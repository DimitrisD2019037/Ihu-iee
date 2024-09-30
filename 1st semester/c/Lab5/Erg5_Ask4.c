#include <stdio.h>
#include <stdlib.h>
main()
{
    /*
     MATHIMA : DOMHMENOS PROGRAMMATISMOS
    TMHMA : T2 
    ERGASTHRIAKH ASKHSH : 4
    HMEROMHNIA : 08/11/2019
    ONOMA : DIMOY DIMITRIOS
    */
    int a,b,e,p,c;
    
    printf("Give two numbers a and b:");
    scanf("%d %d",&a,&b);
    e = a * b;
    printf(" a * b = %d\n",e);
    p = 0;
    while ( b > 0) {
        c = b % 2; 
        if (c == 1){
            p = p + a;
    }printf(" a = %d, b = %d, p = %d\n",a,b,p);
            a = a *2;
            b = b / 2;
    }
    printf("p = %d",p);
    system("pause");
}
