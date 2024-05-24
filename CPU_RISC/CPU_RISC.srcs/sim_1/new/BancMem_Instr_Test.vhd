----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 05/03/2024 11:38:46 AM
-- Design Name: 
-- Module Name: BancMem_Instr_Test - Behavioral
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
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx leaf cells in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity BancMem_Instr_Test is
--  Port ( );
end BancMem_Instr_Test;


architecture Behavioral of BancMem_Instr_Test is

component BancMem_Instr is
    Port ( add : in STD_LOGIC_VECTOR (7 downto 0);
           CLK : in STD_LOGIC;
           OUT_D : out STD_LOGIC_VECTOR (31 downto 0));
end component ;

--inputs
signal add : STD_LOGIC_VECTOR (7 downto 0);
signal CLK : STD_LOGIC;

--outputs
signal OUT_D : STD_LOGIC_VECTOR (31 downto 0);

constant CLK_period : time := 10 ns; --periode de la clock


begin

uut: BancMem_Instr PORT MAP (
         add => add,
         CLK => CLK,
         OUT_D => OUT_D
       );
       

--simulate a clock 
CLKp : process
begin
    
    CLK <= '1';
	wait for CLK_period/2;
    CLK <= '0';
	wait for CLK_period/2;
	
		
end process;







end Behavioral;
