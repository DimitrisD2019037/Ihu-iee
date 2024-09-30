#include <stdio.h>
#include <stdlib.h>
main()
{
    /*
     MATHIMA : DOMHMENOS PROGRAMMATISMOS
    TMHMA : T2 
    ERGASTHRIAKH ASKHSH : 3
    HMEROMHNIA : 01/11/2019
    ONOMA : DIMOY DIMITRIOS
    */
int arithmosAkinhtwn,aforologhtoEisodhma;
double posoEisodhmatos,forologhteoEisodhma,forosPouAnalogei;
printf("Dose poso eisodhmatos kai aritmhos akinhtwn \n ");
scanf("%lf %d", &posoEisodhmatos, &arithmosAkinhtwn);
switch (arithmosAkinhtwn){
    case 0: aforologhtoEisodhma = 12000;
            break;
    case 1: aforologhtoEisodhma = 10000;
            break;
    case 2: aforologhtoEisodhma = 8000;
            break;
    case 3: aforologhtoEisodhma = 5000;
            break;
    default: aforologhtoEisodhma = 0;
}
printf("To aforologhto eisodhma einai : %d \n", aforologhtoEisodhma);
forologhteoEisodhma = posoEisodhmatos - aforologhtoEisodhma;
printf("To forologhteo eisodhma einai : %lf \n ", forologhteoEisodhma);
forosPouAnalogei = forologhteoEisodhma * 30 / 100;
printf("O foros pou tou analogei einai : %lf \n", forosPouAnalogei);
system("pause");
}
