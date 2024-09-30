#include <stdio.h>
#include <stdlib.h>
main()
{
    /*
     MATHIMA : DOMHMENOS PROGRAMMATISMOS
    TMHMA : T2 
    ERGASTHRIAKH ASKHSH : 7
    HMEROMHNIA : 25/09/2019
    ONOMA : DIMOY DIMITRIOS
    */
int tipos,ilikia,kib,cost;
printf("Dose ilikia, tipo oximatos (0 h 1) kai ton kibismo toy");
scanf("%d %d %d", &ilikia, &tipos, &kib);
if (tipos == 0)
 {if ( kib <= 125)
    {cost= 100; 
     if (ilikia <=24)
        cost = cost + cost * 10/100;}
 else 
   {cost = 140; 
   if (ilikia <=24)
     cost = cost + cost * 10/100;}}
else
 {if (kib <= 1400)
  {cost = 400;
   if (ilikia <=24)
        cost = cost + cost * 10/100;}
  else if (kib <=1800)
  {cost = 500;
  if (ilikia <=24)
        cost = cost + cost * 10/100;}
  else 
  {cost = 700;
  if (ilikia <=24)
        cost = cost + cost * 10/100;}}
printf("Etisio kostos asfalisis = %d", cost);
system("pause");
}
