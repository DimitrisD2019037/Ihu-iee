#include <main.h>
#include <flex_lcd.h>  

#byte PORTB=0xf81 

void main() {
   lcd_init();     // a?????p???s? t?? ??????
   lcd_putc("\f"); // ?a?a??s�?? t?? ??????
   lcd_gotoxy(3,1);// ? ????? ?a e�fa??se? st?? 3? ??s? t?? 1?? ??a��??
   // e�fa???eta? t? �???�a
   lcd_putc(" ELECTRONICS"); 
   
   lcd_gotoxy(4,2); // ? ????? ?a e�fa??se? st?? 4? ??s? t?? 2?? ??a��??
   lcd_putc("*****");// e�fa???eta? t? �???�a
           
   while(TRUE) {}            
}



