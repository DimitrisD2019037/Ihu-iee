#include <stdio.h>
#include <stdlib.h>
main()
{
    /*
     MATHIMA : DOMHMENOS PROGRAMMATISMOS
    TMHMA : T2 
    ERGASTHRIAKH ASKHSH : 5
    HMEROMHNIA : 25/09/2019
    ONOMA : DIMOY DIMITRIOS
    */
double x,Uni,SOS,Sal;
printf("give salary :");
scanf("%lf ",&x);
if (x <= 800)
  {Uni = x * 4 / 100;
  SOS = x * 5 / 100;
  Sal= x - Uni - SOS;}
else if (x <= 1200)
 {Uni = x * 6 / 100;
  SOS = x * 7.5 / 100;
  Sal = x - Uni - SOS; }
else if (x <= 2000)
 {Uni = x * 8 / 100;
  SOS = x * 9.5 / 100;
  Sal = x - Uni - SOS;}
else 
 {Uni = x * 11 / 100;
 SOS = x * 12 /100;
 Sal = x - Uni - SOS;} 
printf("Telikos misthos = %lf poso UNISEF = %lf poso SOS = %lf",Sal,Uni,SOS);
system("Pause");
}
