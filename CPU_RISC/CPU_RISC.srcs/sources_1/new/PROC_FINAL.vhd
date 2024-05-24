----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 05/04/2024 01:49:15 PM
-- Design Name: 
-- Module Name: PROC_FINAL - Behavioral
-- Project Name: 
-- Target Devices: 
-- Tool Versions: 
-- Description: 
-- 
-- Dependencies: 
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
-- 
----------------------------------------------------------------------------------


library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
use IEEE.NUMERIC_STD.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx leaf cells in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity PROC_FINAL is
    Port ( RST_P : in STD_LOGIC;
           CLK_P : in STD_LOGIC;
           QA : out STD_LOGIC_VECTOR (7 downto 0);
           QB : out STD_LOGIC_VECTOR (7 downto 0));
end PROC_FINAL;

architecture Behavioral of PROC_FINAL is

--Init the ALU

component PSI_ALU is
    Port ( A : in STD_LOGIC_VECTOR (7 downto 0) := (others => '0');
           B : in STD_LOGIC_VECTOR (7 downto 0) := (others => '0');
           Ctrl_Alu : in STD_LOGIC_VECTOR (2 downto 0) := (others => '0');
           S : out STD_LOGIC_VECTOR (7 downto 0) := (others => '0');
           N : out STD_LOGIC;
           Z : out STD_LOGIC;
           O : out STD_LOGIC;
           C : out STD_LOGIC);
end component;

--Init the Registers Bench

component BancReg is
    Port ( addA : in STD_LOGIC_VECTOR (3 downto 0);
           addB : in STD_LOGIC_VECTOR (3 downto 0);
           addW : in STD_LOGIC_VECTOR (3 downto 0);
           W : in STD_LOGIC;
           DATA : in STD_LOGIC_VECTOR (7 downto 0);
           RST : in STD_LOGIC;
           CLK : in STD_LOGIC;
           QA : out STD_LOGIC_VECTOR (7 downto 0);
           QB : out STD_LOGIC_VECTOR (7 downto 0));
end component;

--Init the memory bench for data

component BancMem_Data is
    Port ( add : in STD_LOGIC_VECTOR (7 downto 0);
           IN_D : in STD_LOGIC_VECTOR (7 downto 0);
           RW : in STD_LOGIC;
           RST : in STD_LOGIC;
           CLK : in STD_LOGIC;
           OUT_D : out STD_LOGIC_VECTOR (7 downto 0));
end component;

--Init the memory bench for instructions

component BancMem_Instr is
    Port ( add : in STD_LOGIC_VECTOR (7 downto 0);
           CLK : in STD_LOGIC;
           EN_BMI : in STD_LOGIC;
           OUT_D : out STD_LOGIC_VECTOR (31 downto 0));
end component;

--Init the pipeline component

component Pipeline3Ch is
    Port ( IN_A : in STD_LOGIC_VECTOR (7 downto 0);
           IN_B : in STD_LOGIC_VECTOR (7 downto 0);
           IN_C : in STD_LOGIC_VECTOR (7 downto 0);
           IN_OP : in STD_LOGIC_VECTOR (7 downto 0);
           OUT_A : out STD_LOGIC_VECTOR (7 downto 0);
           OUT_B : out STD_LOGIC_VECTOR (7 downto 0);
           OUT_C : out STD_LOGIC_VECTOR (7 downto 0);
           OUT_OP : out STD_LOGIC_VECTOR (7 downto 0);
           EN_PPLN3 : in STD_LOGIC;
           FLUSH_PPLN3 : in STD_LOGIC;
           CLK : in STD_LOGIC);
end component;

component Pipeline2Ch is
    Port ( IN_A : in STD_LOGIC_VECTOR (7 downto 0);
           IN_B : in STD_LOGIC_VECTOR (7 downto 0);
           IN_OP : in STD_LOGIC_VECTOR (7 downto 0);
           OUT_A : out STD_LOGIC_VECTOR (7 downto 0);
           OUT_B : out STD_LOGIC_VECTOR (7 downto 0);
           OUT_OP : out STD_LOGIC_VECTOR (7 downto 0);
           EN_PPLN2 : in STD_LOGIC;
           CLK : in STD_LOGIC);
end component;

--Then we need to define signals

-------------------Pipelines-------------------

-- 4 pipelines in the CPU (4 * (A,OP,B,C))

type Ppln3 is record
    A : STD_LOGIC_VECTOR (7 downto 0);
    OP : STD_LOGIC_VECTOR (7 downto 0);
    B : STD_LOGIC_VECTOR (7 downto 0);
    C : STD_LOGIC_VECTOR (7 downto 0);
    EN : std_logic;
end record Ppln3;

type Ppln2 is record
    A : STD_LOGIC_VECTOR (7 downto 0);
    OP : STD_LOGIC_VECTOR (7 downto 0);
    B : STD_LOGIC_VECTOR (7 downto 0);
    EN : std_logic;
end record Ppln2;

signal LI_DI : Ppln3;
signal DI_EX : Ppln3;
signal EX_Mem : Ppln2;
signal Mem_RE : Ppln2;


-------------------LC-----------------

signal LC_DI_EX_EX_Mem : STD_LOGIC_VECTOR (2 downto 0);
signal LC_EX_Mem_Mem_RE : STD_LOGIC;
signal LC_OUT : STD_LOGIC;

------------------MUX-----------------

signal MUX_LI_DI_DI_EX : STD_LOGIC_VECTOR (7 downto 0);
signal MUX_DI_EX_EX_Mem : STD_LOGIC_VECTOR (7 downto 0);
signal MUX_EX_Mem_Mem_RE_IN : STD_LOGIC_VECTOR (7 downto 0);
signal MUX_EX_Mem_Mem_RE_OUT: STD_LOGIC_VECTOR (7 downto 0);

------------------ALU-----------------

signal Ctrl_Alu : STD_LOGIC_VECTOR (2 downto 0);
signal N_ALU, Z_ALU, O_ALU, C_ALU : STD_LOGIC;
signal S_ALU : STD_LOGIC_VECTOR (7 downto 0);

------------Registers bench-----------

signal addA_AUX : STD_LOGIC_VECTOR (3 downto 0);
signal addB_AUX : STD_LOGIC_VECTOR (3 downto 0);
signal QA_REG : STD_LOGIC_VECTOR (7 downto 0);
signal QB_REG : STD_LOGIC_VECTOR (7 downto 0);

-----------Instructions memory------------
 
signal add_INPUT_INSTR : STD_LOGIC_VECTOR (7 downto 0);
signal INST_SAVE : STD_LOGIC_VECTOR (7 downto 0);
signal OUT_D_INSTR : STD_LOGIC_VECTOR (31 downto 0);

----------Data Memory---------------------

signal OUT_D_DATA : STD_LOGIC_VECTOR (7 downto 0);

-----------Enables for aleas----------------

signal EN_COUNT : STD_LOGIC;
signal EN_BMI : STD_LOGIC;
signal EN_LI_DI : STD_LOGIC;
signal EN_DI_EX : STD_LOGIC;
signal EN_EX_Mem : STD_LOGIC;
signal EN_Mem_RE : STD_LOGIC;
signal alea, FLUSH_DI_EX, read_li_di_b,read_li_di_c, write_di_ex, write_ex_mem  : STD_LOGIC;

begin

    -------------Increment instructions---------------

    Instructions : process
    begin
            wait until CLK_P'event and CLK_P ='1';
        if EN_LI_DI = '0' then
            if rst_p = '0' then
                add_INPUT_INSTR <= x"00";
            else
                add_INPUT_INSTR <= add_INPUT_INSTR + 1;
            end if;
        end if; 
    end process;
    
    -----------Outputs------------------
    
    QA <= QA_REG;
    QB <= QB_REG;
    
    --------LOGIC COMB--------------
    
    LC_DI_EX_EX_Mem <= DI_EX.OP(2 downto 0);
    LC_EX_Mem_Mem_RE <= '0' when EX_MEM.OP = x"08" else '1';
    LC_OUT <= '1' when Mem_RE.OP = x"06" or Mem_RE.OP = x"05" or Mem_RE.OP = x"01" or Mem_RE.OP = x"02" or Mem_RE.OP = x"03" or Mem_RE.OP = x"07" else '0';
    
    ------MULTIPLEXEURS-----
    
    MUX_LI_DI_DI_EX <= LI_DI.B when LI_DI.OP = x"06" or LI_DI.OP=x"07" else QA_REG;
    MUX_DI_EX_EX_Mem <= S_ALU when DI_EX.OP = x"01" or DI_EX.OP = x"02" or DI_EX.OP = x"03" else DI_EX.B;
    MUX_EX_Mem_Mem_RE_IN <= EX_Mem.A when EX_Mem.OP = x"08" else EX_Mem.B;
    MUX_EX_Mem_Mem_RE_OUT <= OUT_D_DATA when EX_Mem.OP = x"07" else EX_Mem.B;
    
    -------------ALEAS---------------------
    read_li_di_b <= '1' when (LI_DI.OP = x"01" or LI_DI.OP = x"02" or LI_DI.OP = x"03" or LI_DI.OP = x"04" or LI_DI.OP = x"05" or LI_DI.OP = x"07" or LI_DI.OP = x"08" )   else '0';
    read_li_di_c <= '1' when (LI_DI.OP = x"01" or LI_DI.OP = x"02" or LI_DI.OP = x"03" or LI_DI.OP = x"04")   else '0';
    write_di_ex <= '1' when (LI_DI.OP = x"01" or LI_DI.OP = x"02" or LI_DI.OP = x"03" or LI_DI.OP = x"04" or LI_DI.OP = x"05" or LI_DI.OP = x"06" or LI_DI.OP = x"07" or LI_DI.OP = x"08") else '0';
    write_ex_mem <= '1' when (LI_DI.OP = x"01" or LI_DI.OP = x"02" or LI_DI.OP = x"03" or LI_DI.OP = x"04" or LI_DI.OP = x"05" or LI_DI.OP = x"06" or LI_DI.OP = x"07" or LI_DI.OP = x"08") else '0';
    alea <= '1' when (read_li_di_b = '1' and write_di_ex = '1' and DI_EX.A=LI_DI.B) or (read_li_di_c = '1' and write_di_ex = '1' and DI_EX.A=LI_DI.C) or (read_li_di_b = '1' and write_ex_mem = '1' and EX_MEM.A=LI_DI.B) or (read_li_di_c = '1' and write_ex_mem = '1' and EX_MEM.A=LI_DI.C) else '0';
    -- alea <= '1' when (LI_DI.OP = x"05" and DI_EX.OP = x"06" and DI_EX.A=LI_DI.B) or (LI_DI.OP = x"05" and DI_EX.OP = x"06" and DI_EX.A=LI_DI.B) or (LI_DI.OP = x"06" and EX_Mem.OP = x"05" and Ex_Mem.A=LI_DI.B) or (LI_DI.OP = x"05" and EX_Mem.OP = x"06" and Ex_Mem.A=LI_DI.B) else '0';
    EN_COUNT <= alea;
    EN_BMI <= alea;
    EN_LI_DI <= alea;
    EN_DI_EX <= '1';
    FLUSH_DI_EX <= alea;
    EN_EX_Mem <= '1';
    EN_Mem_RE <= '1';
    


    BMI : BancMem_Instr PORT MAP(
        add => add_INPUT_INSTR,
        CLK => CLK_P,
        OUT_D => OUT_D_INSTR,
        EN_BMI => EN_BMI
    );
    
    LI_DI_PL : Pipeline3Ch PORT MAP(
        IN_A => OUT_D_INSTR(15 downto 8),
        IN_B => OUT_D_INSTR(23 downto 16),
        IN_C => OUT_D_INSTR(31 downto 24),
        IN_OP => OUT_D_INSTR(7 downto 0),
        OUT_A => LI_DI.A,
        OUT_B => LI_DI.B,
        OUT_C => LI_DI.C,
        OUT_OP => LI_DI.OP,
        CLK => CLK_P,
        EN_PPLN3 => EN_LI_DI,
        FLUSH_PPLN3  => '0'
    );

    DI_EX_PL : Pipeline3Ch PORT MAP(
        IN_A => LI_DI.A,
        IN_B => MUX_LI_DI_DI_EX,
        IN_C => QB_REG,
        IN_OP => LI_DI.OP,
        OUT_A => DI_EX.A,
        OUT_B => DI_EX.B,
        OUT_C => DI_EX.C,
        OUT_OP => DI_EX.OP,
        CLK => CLK_P,
        EN_PPLN3 => '0',
        FLUSH_PPLN3  => FLUSH_DI_EX
    );
    
    EX_Mem_PL : Pipeline2Ch PORT MAP(
        IN_A => DI_EX.A,
        IN_B => MUX_DI_EX_EX_Mem,
        IN_OP => DI_EX.OP,
        OUT_A => EX_Mem.A,
        OUT_B => EX_Mem.B,
        OUT_OP => EX_Mem.OP,
        CLK => CLK_P,
        EN_PPLN2 => EN_EX_Mem
    );
    
    Mem_RE_PL : Pipeline2Ch PORT MAP(
        IN_A => EX_Mem.A,
        IN_B => MUX_EX_Mem_Mem_RE_OUT,
        IN_OP => EX_Mem.OP,
        OUT_A => Mem_RE.A,
        OUT_B => Mem_RE.B,
        OUT_OP => Mem_RE.OP,
        CLK => CLK_P,
        EN_PPLN2 => EN_Mem_RE
    );
    
     RB : BancReg PORT MAP(
        addA => LI_DI.B(3 downto 0),--addA_AUX(3 downto 0),
        addB => LI_DI.C(3 downto 0),--addB_AUX(3 downto 0),
        addW => Mem_RE.A(3 downto 0),
        W => LC_OUT,
        DATA => Mem_RE.B,
        RST => RST_P,
        CLK => CLK_P,
        QA => QA_REG,
        QB => QB_REG
    );
    
    UAL : PSI_ALU PORT MAP(
         A => DI_EX.B,
         B => DI_EX.C,
         Ctrl_Alu => LC_DI_EX_EX_Mem,
         S => S_ALU,
         N => N_ALU,
         Z => Z_ALU,
         O => O_ALU,
         C => C_ALU  
 
    );
    
    BMD : BancMem_Data PORT MAP(
         add => MUX_EX_Mem_Mem_RE_IN,
         IN_D => EX_MEM.B,
         RW => LC_EX_Mem_Mem_RE,
         RST => RST_P,
         CLK => CLK_P,
         OUT_D => OUT_D_DATA
    );

    



end Behavioral;
