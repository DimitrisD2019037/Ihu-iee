﻿#include <main.h>
#byte PORTD=0xF83  
#byte PORTB=0xF81     

//d???s? s??a?t?se??
void rb(void);                                                                               
void init (void);                                                              

void main(){
   init();//?a?? t?? s????t?s? p?? ???e? a?????p???se??      
   while(TRUE){;}  //??a p??ta                                                             
   }
           
//???t??a e??p???t?s?? d?a??p?? ap? ta RB4~RB7
void init (){
   set_tris_b(0xFF); //???sµ?? PORTB ?? e?s?d??
   set_tris_d(0x00); //???sµ?? PORTD ?? ???d??                                                  
   enable_interrupts(INT_RB);    
   enable_interrupts(GLOBAL); //e?e???p???s? "?e????? d?a??pt?" interrupt                                                                                                                    
   PORTD=0xFF;       //a????? ?at?stas? st?? PORTD                                                 
}
            
            
#INT_RB                                                                                                                                             
void rb(){  //???t??a e??p???t?s?? d?a??p??
   int8 a; 
   PORTD=PORTD^0xFF;
   a=PORTB; 
}
                                                                                                                           