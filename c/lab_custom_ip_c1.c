//=========================================================//
//   Advanced Workshop on FPGA-based Systems-on-Chip for   //
// Scientific Instrumentation and Reconfigurable Computing //
//                                                         //
//                          Lab                            //
//                    Custom IP Case 1                     //
//                                                         //
//                                                         //
//=========================================================//
//-----------------------------------------------------------
//-- File       : lab_custom_ip.c
//-- Author     : Cristian
//-- Company    : ICTP-MLAB
//-- Created    : 2018-11-08
//-- Last update: 2021-02-03
//-----------------------------------------------------------
//-- Description: Simple 'C' code that write the Duty Cycle 
//-- value into the only register usable in this IP
//-----------------------------------------------------------
//--
//-----------------------------------------------------------
//-- Revisions  :
//-- Date        Version   Author      Description
//-- 2018-11-08   1.0     Crisitan      Created
//-----------------------------------------------------------

#include <stdio.h>
#include "xparameters.h"
#include "my_pwm_ip_c1.h"
#include "xil_io.h"

//-----------------------------------------------------------
int main()
{
   int i;
   int k=0x7FFF;

	printf("-- Start of the Program --\r\n");

 	while (1)
	  {
 		for (k=0x7FFF; k>0x0; k--)
 			{
 			MY_PWM_IP_C1_mWriteReg(XPAR_MY_PWM_IP_C1_0_S_AXI_BASEADDR, MY_PWM_IP_C1_S_AXI_SLV_REG0_OFFSET,k);
 			for (i=0; i<9999; i++); // delay loop
 			}
	   }

    return 0;
}
//-----------------------------------------------------------
//-- EOF
//-----------------------------------------------------------
