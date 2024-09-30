#include <stdio.h>
#include <stdlib.h>
main()
{
    /*
     MATHIMA : DOMHMENOS PROGRAMMATISMOS
    TMHMA : T2 
    ERGASTHRIAKH ASKHSH : 3
    HMEROMHNIA : 08/11/2019
    ONOMA : DIMOY DIMITRIOS
    */
    int xoritikotita,syn_epit,syn_xor,i;
    syn_epit=0;
    syn_xor=0;
    i = 0 ;
    do{
        printf("Give an integer number :");
        scanf("%d",&xoritikotita);
        if (xoritikotita <= 15){
            printf("Apaitountai 1 ephthrhths\n");
             syn_epit= syn_epit+ 1 ;
             syn_xor = syn_xor + xoritikotita;
             i = i +1;     
       }else if (xoritikotita <= 23){
            printf("Apaitountai 2 ephthrhtes\n");
            syn_epit = syn_epit + 2;
            syn_xor = syn_xor + xoritikotita;
            i = i +1;
        }else {
            printf("Apaitountai 3 ephthrhtes\n");
            syn_epit = syn_epit + 3;
            syn_xor = syn_xor + xoritikotita;
            i = i+1; 
        }
}while (syn_xor <= 100 );
printf("Synolo Aithouswn = %d\n",i);
printf("Synolo epithrhtwn = %d\n",syn_epit);
printf("Synolo thesewn = %d\n",syn_xor);
system("Pause");
}   
        
         
