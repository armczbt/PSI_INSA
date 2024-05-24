----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 05/24/2024 10:11:55 AM
-- Design Name: 
-- Module Name: CLK_Divider - Behavioral
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

entity CLK_Divider is
 generic (P: Natural);
    Port ( CLK_IN : in STD_LOGIC;
           CLK_OUT : out STD_LOGIC);
end CLK_Divider;

architecture Behavioral of CLK_Divider is
signal COUNT : STD_LOGIC_VECTOR (P downto 0) := (others => '0');
begin
    CLK_OUT <= COUNT(P);
    process (CLK_IN)
    begin
        if rising_edge(CLK_IN) then
            COUNT <= COUNT + 1;
        end if;
    end process;

end Behavioral;
