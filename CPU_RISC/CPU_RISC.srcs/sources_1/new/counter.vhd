----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 05/24/2024 10:06:55 AM
-- Design Name: 
-- Module Name: counter - Behavioral
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

entity counter is
    Port ( CLK, RST, LOAD, SENS, EN : in STD_LOGIC;
           D_IN : in STD_LOGIC_VECTOR (7 downto 0);
           D_OUT : out STD_LOGIC_VECTOR (7 downto 0));
end counter;

architecture Behavioral of counter is
   signal COUNT : STD_LOGIC_VECTOR (7 downto 0);
begin

D_OUT <= COUNT;

    process (CLK, RST)
    begin
        if rising_edge(CLK) then
            if RST = '0' then
                COUNT <= (others => '0'); -- rst
                
            elsif EN = '0' then
                if SENS = '0' then
                    COUNT <= COUNT - 1;
                elsif SENS = '1' then
                     COUNT <= COUNT + 1;
                end if;
                
            elsif LOAD = '1' then
                COUNT <= D_IN;
            end if;
        end if;
    end process;


end Behavioral;
