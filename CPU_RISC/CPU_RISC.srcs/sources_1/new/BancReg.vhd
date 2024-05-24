----------------------------------------------------------------------------------
-- Company: INSA 4A IR - PSI
-- Engineer: Armand Carraz-Billat & Marti Jimenez
-- 
-- Create Date: 04/22/2024 12:57:43 PM
-- Design Name: 
-- Module Name: BancReg - Behavioral
-- Project Name: 
-- Target Devices: 
-- Tool Versions: 
-- Description: Banc de registres à double lecture
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

entity BancReg is
    Port ( addA : in STD_LOGIC_VECTOR (3 downto 0);
           addB : in STD_LOGIC_VECTOR (3 downto 0);
           addW : in STD_LOGIC_VECTOR (3 downto 0);
           W : in STD_LOGIC;
           DATA : in STD_LOGIC_VECTOR (7 downto 0);
           RST : in STD_LOGIC;
           CLK : in STD_LOGIC;
           QA : out STD_LOGIC_VECTOR (7 downto 0);
           QB : out STD_LOGIC_VECTOR (7 downto 0));
end BancReg;

architecture Behavioral of BancReg is


type registers is array(0 to 15) of STD_LOGIC_VECTOR(7 downto 0); --Tab de 16 registres de 8 bits

signal regs: registers;

begin


QA <= DATA when (W = '1' and addW = addA) else regs(to_integer(unsigned(addA))); -- DATA quand on essaye de lire et d'écrire en même temps
QB <= DATA when (W = '1' and addW = addB) else regs(to_integer(unsigned(addB))); -- Sinon simplement le contenu du registre

p: process

begin

    wait until CLK'event and CLK = '1'; --synchrone
    
    if (RST = '0') then
        regs <= (others => (others => '0')); --reset
    
    else 
        if (W = '1') then
            regs(to_integer(unsigned(addW))) <= DATA; --on ecrit la data dans l'adresse correspondante
        end if;
    end if;


end process; 


end Behavioral;
