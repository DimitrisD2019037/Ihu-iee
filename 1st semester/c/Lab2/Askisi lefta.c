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
int M, i50, i20, i10, i5, i2 ,i1,M1;
scanf("%d", &M);
i50 = M / 50;
M = M % 50;
i20 = M / 20;
M = M % 20;
i10 = M /10;
M = M % 10;
i5 = M / 5;
M = M % 5;
i2= M / 2;
M1 = M % 2;
printf(" i50 = %d, i20 = %d, i10 = %d, i5= %d, i2= %d, M1 = %d", i50,M,i20,i10,i5,i2,M1);
system("pause");
}
