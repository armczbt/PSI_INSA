----------------------------------------------------------------------------------
-- Company: INSA 4A IR - PSI
-- Engineer: Armand Carraz-Billat & Marti Jimenez
-- 
-- Create Date: 04/22/2024 02:39:13 PM
-- Design Name: 
-- Module Name: BancMem_Data - Behavioral
-- Project Name: 
-- Target Devices: 
-- Tool Versions: 
-- Description: Banc de mémoire dédié aux Datas
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

entity BancMem_Data is
    Port ( add : in STD_LOGIC_VECTOR (7 downto 0);
           IN_D : in STD_LOGIC_VECTOR (7 downto 0);
           RW : in STD_LOGIC;
           RST : in STD_LOGIC;
           CLK : in STD_LOGIC;
           OUT_D : out STD_LOGIC_VECTOR (7 downto 0));
end BancMem_Data;

architecture Behavioral of BancMem_Data is

type bancMem_data is array(0 to 255) of STD_LOGIC_VECTOR(7 downto 0);
signal mem_data : bancMem_data; 

begin

    --mem_data <= (others => x"AB");

    memData : process
    begin
    
        wait until CLK'event and CLK = '1';
        
        if (RST = '0') then
            mem_data <= (others => x"AB");
            OUT_D <= (others => '0');
        else
            if (RW = '0') then
                mem_data(to_integer(unsigned(add))) <= IN_D; 
            else if (RW = '1') then 
                OUT_D <= mem_data(to_integer(unsigned(add))); 
            end if;
            end if;
        end if;
       
    end process;


end Behavioral;
