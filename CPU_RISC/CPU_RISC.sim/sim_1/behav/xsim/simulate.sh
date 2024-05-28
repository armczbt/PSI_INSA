#!/bin/bash -f
# ****************************************************************************
# Vivado (TM) v2023.1 (64-bit)
#
# Filename    : simulate.sh
# Simulator   : Xilinx Vivado Simulator
# Description : Script for simulating the design by launching the simulator
#
# Generated by Vivado on Tue May 28 09:48:43 CEST 2024
# SW Build 3865809 on Sun May  7 15:04:56 MDT 2023
#
# IP Build 3864474 on Sun May  7 20:36:21 MDT 2023
#
# usage: simulate.sh
#
# ****************************************************************************
set -Eeuo pipefail
# simulate design
echo "xsim Proc_Test_behav -key {Behavioral:sim_1:Functional:Proc_Test} -tclbatch Proc_Test.tcl -view /home/carraz-b/4A/PSI/PSI_INSA/CPU_RISC/Proc_Test_behav.wcfg -log simulate.log"
xsim Proc_Test_behav -key {Behavioral:sim_1:Functional:Proc_Test} -tclbatch Proc_Test.tcl -view /home/carraz-b/4A/PSI/PSI_INSA/CPU_RISC/Proc_Test_behav.wcfg -log simulate.log

