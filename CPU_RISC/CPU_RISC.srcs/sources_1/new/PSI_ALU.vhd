----------------------------------------------------------------------------------
-- Company: INSA 4A IR - PSI
-- Engineer: Armand Carraz-Billat & Marti Jimenez
-- 
-- Create Date: 04/02/2024 01:21:56 PM
-- Design Name: 
-- Module Name: PSI_ALU - Behavioral
-- Project Name: 
-- Target Devices: 
-- Tool Versions: 
-- Description: Unité Arithmétique et Logique (UAL)
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
use IEEE.std_logic_unsigned.ALL;
use IEEE.std_logic_arith.ALL; 

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx leaf cells in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity PSI_ALU is
    Port ( A : in STD_LOGIC_VECTOR (7 downto 0);
           B : in STD_LOGIC_VECTOR (7 downto 0);
           Ctrl_Alu : in STD_LOGIC_VECTOR (2 downto 0);
           S : out STD_LOGIC_VECTOR (7 downto 0);
           N : out STD_LOGIC;
           Z : out STD_LOGIC;
           O : out STD_LOGIC;
           C : out STD_LOGIC);
end PSI_ALU;

architecture Behavioral of PSI_ALU is

	signal res:STD_LOGIC_VECTOR (15 downto 0):= (others => 'U');
	signal A_aux:STD_LOGIC_VECTOR (15 downto 0);
	signal B_aux:STD_LOGIC_VECTOR (15 downto 0);
	signal empty_sig : STD_LOGIC_VECTOR (15 downto 0) := (others => '0');

begin

A_aux<="00000000"&A;
B_aux<="00000000"&B;

res <= A_aux + B_aux when Ctrl_Alu= "001" else
	   A * B when Ctrl_Alu = "010" else
	   A_aux - B_aux when Ctrl_Alu = "011" else 
	   empty_sig ;
	   
S <= res(7 downto 0) ;

N <= '1' when A_aux < B_aux and Ctrl_Alu = "011" else '0';

O <= '1' when Ctrl_Alu = "001" and res > x"00FF" else '1' when Ctrl_Alu = "010" and res > x"FF" else '0' ;

Z <= '1' when res = empty_sig else '0';
	   
C <= '1' when Ctrl_Alu = "001" and res > x"00FF" else '0';




end Behavioral;
