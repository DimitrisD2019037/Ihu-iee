#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
    /*
     MATHIMA : DOMHMENOS PROGRAMMATISMOS
    TMHMA : T2 
    ERGASTHRIAKH ASKHSH : 1
    HMEROMHNIA : 08/11/2019
    ONOMA : DIMOY DIMITRIOS
    */
 int num,ekth;
 double dun;
 printf("Give a number between 2 and 10: \n");
 scanf("%d",&num);
 while (num < 2 | num > 10)
 {
        printf("Give a number between 2 and 10: \n");
        scanf("%d",&num);
}
ekth = 1;
dun = pow(num , ekth);
printf("Dynamh = %d ^ %d = %lf\n", num,ekth, dun);
while ( dun <= 100)
{
    ekth = ekth + 1;
    dun = pow(num , ekth);
    printf("Dynamh = %d ^ %d = %lf\n",num,ekth,dun);
}
system("Pause");
}
    
