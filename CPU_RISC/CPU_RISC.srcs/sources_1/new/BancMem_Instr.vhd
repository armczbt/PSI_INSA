----------------------------------------------------------------------------------
-- Company: INSA 4A IR - PSI
-- Engineer: Armand Carraz-Billat & Marti Jimenez
-- 
-- Create Date: 05/03/2024 11:27:56 AM
-- Design Name: 
-- Module Name: BancMem_Instr - Behavioral
-- Project Name: PSI
-- Target Devices: 
-- Tool Versions: 
-- Description: Banc de mémoire dédié aux instructions
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

entity BancMem_Instr is
    Port ( add : in STD_LOGIC_VECTOR (7 downto 0);
           CLK : in STD_LOGIC;
           EN_BMI : in STD_LOGIC;
           OUT_D : out STD_LOGIC_VECTOR (31 downto 0));
           
end BancMem_Instr;



architecture Behavioral of BancMem_Instr is

type mem_instr is array(0 to 255) of STD_LOGIC_VECTOR(31 downto 0);
signal bancMem_instr : mem_instr;

begin

 bancMem_instr <= (x"00000000",x"06040106", x"07060206", x"04050106", x"04010205", x"01020301", x"03020402", x"03040503", 
                    x"08050607", x"05050108", x"08150206", x"07020805", x"06040106", x"ff040106", others => x"ffffffff"); --instanciée pour tester 
 -- x"00" rien
 -- x"01" on AFC 4 dans l'adresse 01
 -- x"02" on AFC 6 dans l'adresse 02
 -- x"03" on AFC 5 dans l'adresse 01
 -- x"04" on COPY le contenu de l'@01 dans @02 (on devrait avoir 05 dans 2)
 -- x"05" on ADD contenu de @02 + @01 et on met dans @03 (on devrait avoir 10 dans @03)
 -- x"06" on MUL contenu de @02 * @03 et on met dans @04 (on devrait avoir 50 dans @04)
 -- x"07" on SOUS contenu de @04 - @03 et on met dans @05 (on devrait avoir 40 dans @05)
 -- x"08" on LOAD adresse @05 dans @06 (on devrait avoir 05 dans @06)
 -- x"09" on STORE le contenu du registre @05 dans @01 de la memoire de données (on devrait avoir 40 dans @01|data)
 
 memInstr : process
    begin
            wait until CLK'event and CLK = '1';
        if EN_BMI = '0' then
            
            OUT_D <= bancMem_instr(to_integer(unsigned(add)));
        
        end if;
    end process;


end Behavioral;
