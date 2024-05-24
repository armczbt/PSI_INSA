----------------------------------------------------------------------------------
-- Company: INSA 4A IR - PSI
-- Engineer: Armand Carraz-Billat & Marti Jimenez
--  
-- Create Date: 04/22/2024 01:20:30 PM
-- Design Name: 
-- Module Name: BancReg_Test - Behavioral
-- Project Name: 
-- Target Devices: 
-- Tool Versions: 
-- Description: Test banc de registres
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

entity BancReg_Test is
--  Port ( );
end BancReg_Test;

architecture Behavioral of BancReg_Test is

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

--inputs
signal addA,addB,addW : std_logic_vector (3 downto 0):= (others => '0');
signal W,CLK,RST : std_logic := '0'; 
signal DATA: std_logic_vector (7 downto 0) := (others => '0');

--outputs
signal QA,QB: std_logic_vector (7 downto 0) := (others => '0');

constant CLK_period : time := 10 ns; --periode de la clock

begin


uut: BancReg PORT MAP (
         addA => addA,
         addB => addB,
         addW => addW,
         W => W,
         DATA => DATA,
         RST => RST,
         CLK => CLK,
         QA => QA,
         QB => QB
       );
       
--simulate a clock 
CLKp : process
begin
    
    CLK <= '1';
	wait for CLK_period/2;
    CLK <= '0';
	wait for CLK_period/2;
	
		
end process;

RST <= '1', '0' after 100ns;

W <= '1' after 20ns, '0' after 40ns, '1' after 80ns;
DATA <= x"20", x"50" after 30ns;
addW <= x"1", x"2" after 30ns, x"3" after 40ns;
addA <= x"1", x"2" after 30ns;
addB <= x"3", x"1" after 60ns;


end Behavioral;
