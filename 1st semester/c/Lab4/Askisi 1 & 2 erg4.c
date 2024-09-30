#include <stdio.h>
#include <stdlib.h>
main()
{
    /*
     MATHIMA : DOMHMENOS PROGRAMMATISMOS
    TMHMA : T2 
    ERGASTHRIAKH ASKHSH :01 
    HMEROMHNIA : 01/11/2019
    ONOMA : DIMOY DIMITRIOS
    */
    
int day,x;
printf("Give me a number from 1 to 7 : ");
scanf("%d", &day);
if ( day == 1 ){
   printf("The first day of a week is Monday. \n");
}
else if ( day == 2 ) {
    printf("The second day of a week is Tuesday. \n");
}
else if ( day == 3 ) {
    printf("The third day of a week is Wednesday. \n");
}
else if ( day == 4 ) {
    printf("The fourth day of a week is Thursday. \n");
}
else if (day == 5) {
    printf("The fifth day of a week is Friday. \n");
}
else if (day == 6) {
    printf("The sixth day of a week is Saturday. \n");
}
else if (day == 7) {
    printf("The seventh day of a week is Sunday. \n");
}
else {
    printf("You gave a wrong number. \n");
}
printf ("Dose enan akeraio MH ARNHTIKO arithmo gia to x : ");
scanf("%d", &x);
switch(x){
    case 0: printf("x = 0\n");
            break;
    case 1: printf("x = perittos\n");
            break;
    case 2: printf("x = artios\n");
            break;
    case 3: printf(" x = perittos\n");
            break;
    case 4: printf(" x = artios\n");
            break;
    case 5: printf(" x = perittos\n");
           break;
    default: printf (" x > 5 \n");
} 
system("pause");
}
