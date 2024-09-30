#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
void fillpin(int n, int p[])
{  
   /*
     MATHIMA : DOMHMENOS PROGRAMMATISMOS
    TMHMA : T2 
    ERGASTHRIAKH ASKHSH :01 
    HMEROMHNIA : 22/11/2019
    ONOMA : DIMOY DIMITRIOS
    */
    
    int i;
    for (i=0;i<=n-1;i++)
    {
    p[i]= rand()% ((10 - 1 + 1))+1;
    }
}
void showpin(int n, int p[])
{
    int i;
    for (i=0;i<=n-1;i++){
      printf("%d",p[i]);
      printf("\t");
    
    }
}
 void findThesiMax(int n,int p[])
 {
        int i,max,thesimax;
    max = p[0];
    thesimax=0;
    for (i = 1;i<=n-1;i++)
    {
        if (p[i] > max) {
            max = p[i];
            thesimax=i;
        }
    }
    printf("max = %d ThesiMax = %d \n",max,thesimax);
    }
  void findThesiMin(int n,int p[])
  {
    int i,min,thesimin;
    min = p[0];
    thesimin=0;
    for (i =1;i<=n-1;i++)
    {
        if (p[i] < min) {
            min = p[i];
            thesimin=i;
        }
    }
    printf("min = %d ThesiMin = %d \n",min,thesimin);
}
void countAvg(int n, int p[]){
    int i,countavg;
    double avg,sum;
    sum=0;
    for (i=1;i<=n-1;i++){
     sum= sum+p[i];}
    countavg=0;
    avg= sum/n;
    for (i=1;i<=n-1;i++){
        if (p[i]> avg){
            countavg=countavg +1;
        }
    }
    printf("avg = %lf \n",avg);
    printf("count avg = %d\n",countavg);
    
}
int searchPThesiNum(int num, int n, int p[])
{
 int i=0;
 int thesiNum = -1;
 bool found = false;
 while ( i<=n-1 && !found)
 if ( num == p[i] )
 {
 thesiNum = i;
 found = true;
 }
 else
 i++;
 return thesiNum;
}
main()
{
   
int n,num,thesiNum;
printf("Give an integer n > 5 : ");
scanf("%d",&n);
int p[n];
fillpin(n,p);
printf("p = ");
showpin(n,p);
printf("\n");
findThesiMax(n,p);
findThesiMin(n,p);
countAvg(n,p);
printf("Give an integer num : ");
scanf("%d",&num);
thesiNum = searchPThesiNum( num, n, p);
 if ( thesiNum > -1 )
printf("Found num = %d in position %d, p[%d] = %d\n", num, thesiNum,thesiNum, p[thesiNum]);
 else
 printf("num = %d not Found\n", num); 
system("Pause");
}
