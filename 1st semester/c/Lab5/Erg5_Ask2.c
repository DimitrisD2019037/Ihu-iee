#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
    /*
     MATHIMA : DOMHMENOS PROGRAMMATISMOS
    TMHMA : T2 
    ERGASTHRIAKH ASKHSH : 2
    HMEROMHNIA : 08/11/2019
    ONOMA : DIMOY DIMITRIOS
    */
    int num,i;
    double dyn;
    do {
        printf("Give a number between 2 and 10 : \n");
        scanf("%d",&num);
}
while (num < 2 | num > 10);
i=1;
do {
    dyn = pow(num,i);
    printf("Dynamh = %d ^ %d = %lf\n",num,i,dyn);
    i = i + 1;
}while ( dyn < 100 );
system("pause");
}
        
