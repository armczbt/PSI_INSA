----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 05/06/2024 09:21:30 AM
-- Design Name: 
-- Module Name: Proc_Test - Behavioral
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

-- Uncomment the following library declaration if instantiating
-- any Xilinx leaf cells in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity Proc_Test is
--  Port ( );
end Proc_Test;

architecture Behavioral of Proc_Test is

component PROC_FINAL is
    Port ( RST_P : in STD_LOGIC;
           CLK_P : in STD_LOGIC;
           QA : out STD_LOGIC_VECTOR (7 downto 0);
           QB : out STD_LOGIC_VECTOR (7 downto 0));
end component;

--inputs
signal IP : std_logic_vector (7 downto 0):= (others => '0');
signal CLK_P,RST_P : std_logic := '0'; 

--outputs
signal QA,QB: std_logic_vector (7 downto 0) := (others => '0');

constant CLK_period : time := 10 ns; --periode de la clock


begin

uut: PROC_FINAL PORT MAP(
    RST_P => RST_P,
    CLK_P => CLK_P,
    QA => QA,
    QB => QB
);

--simulate a clock 
CLKp : process
begin
    
    CLK_P <= '1';
	wait for CLK_period/2;
    CLK_P <= '0';
	wait for CLK_period/2;
	
		
end process;

RST_P <= '0', '1' after 50ns;

--IP <= x"01", x"02" after 100ns, x"03" after 200ns, x"04" after 300ns, x"05" after 400ns,x"06" after 500ns, 
--x"07" after 600ns, x"08" after 700ns, x"09" after 800ns;


end Behavioral;
