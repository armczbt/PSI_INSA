----------------------------------------------------------------------------------
-- Company: INSA 4A IR - PSI
-- Engineer: Armand Carraz-Billat & Marti Jimenez
-- 
-- Create Date: 05/04/2024 01:51:30 PM
-- Design Name: 
-- Module Name: Pipeline - Behavioral
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

entity Pipeline2Ch is
    Port ( IN_A : in STD_LOGIC_VECTOR (7 downto 0);
           IN_B : in STD_LOGIC_VECTOR (7 downto 0);
           IN_OP : in STD_LOGIC_VECTOR (7 downto 0);
           OUT_A : out STD_LOGIC_VECTOR (7 downto 0);
           OUT_B : out STD_LOGIC_VECTOR (7 downto 0);
           OUT_OP : out STD_LOGIC_VECTOR (7 downto 0);
           EN_PPLN2 : in STD_LOGIC;
           CLK : in STD_LOGIC);
end Pipeline2Ch;

architecture Behavioral of Pipeline2Ch is

begin

process 

begin

        wait until CLK'event and CLK ='1';
        
        if EN_PPLN2 = '1' then
        
            OUT_OP <= IN_OP;
            OUT_A <= IN_A;
            OUT_B <= IN_B;
            
         else
            
            OUT_OP <= (others => '0');
            OUT_A  <= (others => '0');
            OUT_B  <= (others => '0');
            
            
        end if;
end process;
    
    

end Behavioral;
