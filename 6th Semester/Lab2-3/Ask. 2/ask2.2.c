#include<main.h>  
#byte PORTA=0xF80 
#byte PORTD=0xF83  
//T?se?? �??�?? SFR                                     
//SFR = Special Function Register 

// ********* main program *********************

void main()
{                   
   set_tris_a(0xff); //PORTA e?s?d??  
   set_tris_d(0x00); //PORTD ???d??  


   int1 a;   //�eta�??t? 1 bit          
   int1 b;   //�eta�??t? 1 bit           

   while(TRUE) {      //??a p??ta
      a=input(PIN_A0); //d??�as�a �e�???�???? pin
      b=input(PIN_A1); //d??�as�a �e�???�???? pin
      if (a==1 && b==1)
      {//??e???? a? a=b=�1�
         output_high(PIN_D0);
      }//a? ???, t?te LED a?a��???
      else{
         output_low(PIN_D0);              //a? ???, t?te LED s�?st?
      }
  }
   
}

