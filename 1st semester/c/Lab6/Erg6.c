#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int findParagontiko(int n)
{
	 /*
     MATHIMA : DOMHMENOS PROGRAMMATISMOS
    TMHMA : T2 
    ERGASTHRIAKH ASKHSH :01 & 02 & 03 & 04
    HMEROMHNIA : 15/11/2019
    ONOMA : DIMOY DIMITRIOS
    */
	int i,bpar;
	bpar =1;
	for (i=2;i<=n;i++)
	 bpar = bpar *i;
	return bpar; 
}
bool isProtos(int n2)
{
	bool protos2;
	int i,b;
    protos2 = true;
	for (i=2;i<=n2/2;i++)
	   b = n2%i;
	  if ( b==0){
	  	protos2 = false;
	  }
    return protos2;	
}
main()
{
   
    int n,npar,i,apar,a,n2,b;
    bool protos;
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
	 int bpar = findParagontiko(n);
  printf("%d! = %d - function call\n",n,bpar);
	printf("Give an integer number in [2,100] : ");
	scanf("%d",&n2);
	protos = true;
	for (i=2;i<=n2/2;i++)
	   b = n2%i;
	  if ( b==0){
	  	protos = false;
	  }
  if (protos == true){
  	printf("n = %d einai protos\n",n2);
  	}
  else{
  	printf("n = %d den einai protos\n",n2);
  }
 bool protos2 = isProtos(n2);
 if (protos2==true){
 	printf("n = %d einai protos - function call\n",n2);
 }
 else {
 	printf("n = %d den einai protos - function call\n",n2); }
system("pause");
}

