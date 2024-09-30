#include<main.h>                
#byte PORTB=0xF81         
#byte PORTD=0xF83                                              
//SFR = Special Function Register
                   
                   
//*********Main program***********

void main()
{                                 
   set_tris_b(0x00);       
   set_tris_d(0xff);        

   int8 a;                    
                    
   while(TRUE) {         
   a=PORTD;                   
   PORTB=a/2;  
   }
}

