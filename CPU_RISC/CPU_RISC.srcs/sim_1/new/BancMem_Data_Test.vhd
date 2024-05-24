----------------------------------------------------------------------------------
-- Company: INSA 4A IR - PSI
-- Engineer: Armand Carraz-Billat & Marti Jimenez
-- 
-- Create Date: 04/22/2024 03:06:09 PM
-- Design Name: 
-- Module Name: BancMem_Data_Test - Behavioral
-- Project Name: 
-- Target Devices: 
-- Tool Versions: 
-- Description: Test du banc de mémoire des Datas
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

entity BancMem_Data_Test is
--  Port ( );
end BancMem_Data_Test;

architecture Behavioral of BancMem_Data_Test is

component BancMem_Data is
    Port ( add : in STD_LOGIC_VECTOR (7 downto 0);
           IN_D : in STD_LOGIC_VECTOR (7 downto 0);
           RW : in STD_LOGIC;
           RST : in STD_LOGIC;
           CLK : in STD_LOGIC;
           OUT_D : out STD_LOGIC_VECTOR (7 downto 0));
end component;

--inputs
signal add,IN_D : std_logic_vector (7 downto 0) := (others => '0');
signal RW,RST,CLK : std_logic := '0';

--output
signal OUT_D : std_logic_vector (7 downto 0) := (others => '0');

constant CLK_period : time := 10 ns; --periode de la clock

begin

uut: BancMem_Data PORT MAP (
         add => add,
         IN_D => IN_D,
         RW => RW,
         RST => RST,
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


RST <= '1', '0' after 100ns, '1' after 125ns;

add <= x"01", x"02" after 30ns, x"01" after 60ns, x"02" after 150ns;
IN_D <= x"50", x"60" after 30ns;
RW <= '0', '1' after 20 ns, '0' after 40ns, '1' after 50ns;


end Behavioral;
