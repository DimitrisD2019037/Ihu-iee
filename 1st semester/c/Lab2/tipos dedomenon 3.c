#include <stdio.h>
#include <stdlib.h>
main()
{
    /*
     MATHIMA : DOMHMENOS PROGRAMMATISMOS
    TMHMA : T2 
    ERGASTHRIAKH ASKHSH : 2
    HMEROMHNIA : 18/09/2019
    ONOMA : DIMOY DIMITRIOS
    */

int N, cm, km, i1, m, cm1;

scanf("%d", &N);
cm = N * 80;
printf(" cm = %d", cm,N);
km = cm / 100000 ;
i1 = cm % 100000;
m = i1 / 1000;
cm1 = i1 % 1000; 
printf(" km = %d m = %d cm1 = %d", km,cm,m,cm1,i1);
system("pause");
}
