----------------------------------------------------------------------------------
-- Company: INSA 4A IR - PSI
-- Engineer: Armand Carraz-Billat & Marti Jimenez
-- 
-- Create Date: 04/02/2024 01:57:08 PM
-- Design Name: 
-- Module Name: Alu_Test - Behavioral
-- Project Name: 
-- Target Devices: 
-- Tool Versions: 
-- Description: Test de l'ALU
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

entity Alu_Test is
--  Port ( );
end Alu_Test;

architecture Behavioral of Alu_Test is

component PSI_ALU is
    Port ( A : in STD_LOGIC_VECTOR (7 downto 0);
           B : in STD_LOGIC_VECTOR (7 downto 0);
           Ctrl_Alu : in STD_LOGIC_VECTOR (2 downto 0);
           S : out STD_LOGIC_VECTOR (7 downto 0);
           N : out STD_LOGIC;
           Z : out STD_LOGIC;
           O : out STD_LOGIC;
           C : out STD_LOGIC);
end component;

--inputs
signal A2,B2 : STD_LOGIC_VECTOR (7 downto 0) := (others => '0');
signal Ctrl_Alu2 : STD_LOGIC_VECTOR (2 downto 0) := (others => '0');

--outputs
signal N2,O2,Z2,C2 : STD_LOGIC;
signal S2 : STD_LOGIC_VECTOR (7 downto 0) := (others => '0');

begin

u: PSI_ALU PORT MAP (
    A => A2,
    B => B2,
    N => N2,
    O => O2,
    Z => Z2,
    C => C2,
    S => S2,
    Ctrl_Alu => Ctrl_Alu2
);





A2 <= "00000101","00000000" after 300 ns,"11111111" after 400 ns,"00000001" after 500 ns;
B2 <= "00000011","11111111" after 400 ns,"00001111" after 500 ns;

Ctrl_Alu2 <= "001" , "011" after 100 ns , "010" after 200 ns, "011" after 500 ns;





end Behavioral;
