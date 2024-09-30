#include <stdio.h>
#include <stdlib.h>
main()
{
    /*
     MATHIMA : DOMHMENOS PROGRAMMATISMOS
    TMHMA : T2 
    ERGASTHRIAKH ASKHSH : 3
    HMEROMHNIA : 25/09/2019
    ONOMA : DIMOY DIMITRIOS
    */ 
int il ;
double ips,m,dms,kg;
printf("Give age varos ypsos se ekatosta :");
scanf("%d %lf %lf",&il,&kg ,&ips);
if ( il > 18 ) 
   {m = ips / 100;
   dms = kg / (m * m); 
   if (dms < 18,5) 
     printf("Deikths mazas somatos = %lf Adinato atomo\n",dms);
    else if  (dms >= 18,5 & dms < 25)
      printf("Deikths mazas somatos = %lf Kanoniko atomo\n ",dms);
    else if (dms >= 25 & dms <30 )
        printf("Deikths mazas somatos = %lf Bary atomo\n ",dms);
    else 
     printf("Deikths mazas somatos = %lf Yperbaro atomo\n",dms);}
else 
printf("Den mporei na ypologistei o Deikths Mazas Somatos dms"); 
system("pause"); 
} 

