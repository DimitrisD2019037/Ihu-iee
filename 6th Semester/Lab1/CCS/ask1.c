#include <main-proteus.h> 
#byte PORTB =0xF81 //??s? �??�?? t?? PORTB
void main(void){
   set_tris_b(0x00); //???s�?? PORTB ?? ???d?? 
   PORTB =0b11111111;  //???s�?? t?�?? st?? PORTB
   while(TRUE) {     //??a p??ta                          
      delay_ms(250);    //a?a�??? 250ms
       PORTB=0b00000000;  //LED s�?st?
       delay_ms(250);     //a?a�??? 250ms
       PORTB=0b00000100;  //LED a?a��??a     
       delay_ms(10000);
       PORTB=0b00000010;  //LED a?a��??a     
       delay_ms(2000);
       PORTB=0b00000001;  //LED a?a��??a     
       delay_ms(10000);
    }
 }

