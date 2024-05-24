----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 05/24/2024 10:17:38 AM
-- Design Name: 
-- Module Name: FINAL_CLOCK - Behavioral
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

entity FINAL_CLOCK is
Port ( CLK_IN, RST, LOAD, SENS, EN : in STD_LOGIC;
           D_IN : in STD_LOGIC_VECTOR (7 downto 0);
           D_OUT : out STD_LOGIC_VECTOR (7 downto 0));
end FINAL_CLOCK;

architecture Behavioral of FINAL_CLOCK is


component CLK_Divider is
        generic (P: Natural);
        Port ( CLK_IN : in STD_LOGIC;
               CLK_OUT : out STD_LOGIC);
    end component;
    
    component counter is
        Port ( CLK, RST, LOAD, SENS, EN : in STD_LOGIC;
                D_IN : in STD_LOGIC_VECTOR (7 downto 0);
                D_OUT : out STD_LOGIC_VECTOR (7 downto 0));
    end component;
    
    signal SLOW_CLK : STD_LOGIC; 

begin

  cd: CLK_Divider generic map (P => 26) port map (CLK_IN => CLK_IN, CLK_OUT => SLOW_CLK);-- 2^26 divided
  c: counter port map (CLK => SLOW_CLK, RST => RST, LOAD => LOAD, SENS => SENS, EN => EN, D_IN => D_IN, D_OUT => D_OUT);


end Behavioral;
