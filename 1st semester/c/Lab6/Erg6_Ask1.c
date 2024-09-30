#include <stdio.h>
#include <stdlib.h>
main()
{
    /*
     MATHIMA : DOMHMENOS PROGRAMMATISMOS
    TMHMA : T2 
    ERGASTHRIAKH ASKHSH :01 
    HMEROMHNIA : 15/11/2019
    ONOMA : DIMOY DIMITRIOS
    */
    int n,npar,i,apar,a;
    printf("Give an integer in [0,10] :");
    scanf("%d",&n);
    if (n==0 | n==1 ){
    	npar = 1;
	}
	else {
		npar=1;
		for (i=2;i<=n;i++)
		 npar =npar *i;
	}
	printf("%d! = %d\n",n,npar);
	printf("Gine an integer in [0,10] :");
	scanf("%d",&a);
	apar = 1;
    for (i=2;i<=a;i++)
	 apar = apar *i;
	printf("%d! = %d\n",a,apar);
	system("pause");
}
