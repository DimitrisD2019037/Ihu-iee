#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void swapPiPj( int i, int j, int *p)
{
 int temp;
 temp = *(p+i);
 *(p+i) = *(p+j);
 *(p+j) = temp;
} 
void fillPin( int n, int *p)
{
 int i;
 srand(1);
 for ( i=0;i<=n-1;i++)
 *(p+i) = rand()% ((10 - 1 + 1))+1;
}

void showPin( int n, int *p)
{
 int i;
 for ( i=0;i<=n-1;i++)
 printf(" %d", *(p+i));
 printf("\n");
}
int findThesiMax( int n, int *p)
{
 int i, max, thesiMax;
 max = *p;
 thesiMax = 0;
 for ( i=1;i<=n-1;i++)
 if ( *(p+i) > max )
 {
 max = *(p+i);
 thesiMax = i;
 }
 return thesiMax;
}
int findThesiMin( int n, int *p)
{
 int i, min, thesiMin;
 min = *p;
 thesiMin = 0;
 for ( i=1;i<=n-1;i++)
 if ( *(p+i) < min )
 {
 min = *(p+i);
 thesiMin = i;
 }
 return thesiMin;
}
void countAvg(int n, int *p){
    int i,countavg;
    double avg,sum;
    sum=0;
    for (i=1;i<=n-1;i++){
     sum= sum+*(p+i);}
    countavg=0;
    avg= sum/n;
    for (i=1;i<=n-1;i++){
        if ( *(p+i) > avg ){
            countavg=countavg +1;
        }
    }
    printf("avg = %lf \n",avg);
    printf("count avg = %d\n",countavg);
}
    
int searchThesiNum( int n, int num, int *p)
{
 int i, thesiNum = -1;
 i=0;
 while ( i<=n-1 && thesiNum == -1)
 if ( *(p+i) == num )
 thesiNum = i;
 else
 i++;
 return thesiNum;
}
void findThesiNum( int n, int num, int *p)
{
 int i;

 for ( i=0;i<=n-1;i++ )
 if ( *(p+i) == num )
 printf("*(p+i) = %d in position i = %d\n", *(p+i),
i);
}
int findThesiNumBinSearch( int a, int t, int num, int *p)
{
 int i, m, thesiNum = -1;

 while ( a<=t && thesiNum == -1)
 {
 m = (a+t)/2;
 if ( *(p+m) == num )
 thesiNum = m;
 else
 if ( *(p+m) > num )
 t = m-1;
 else
 a = m + 1;

}
 return thesiNum;
}



main ()
{
	/*
     MATHIMA : DOMHMENOS PROGRAMMATISMOS
    TMHMA : T2 
    ERGASTHRIAKH ASKHSH :01 
    HMEROMHNIA : 20/12/2019
    ONOMA : DIMOY DIMITRIOS
    */
    
   int i, j, num, n = 10;
   int *pp; 
   pp = (int*)malloc(sizeof(int) * n); 
   fillPin( n, pp);
 printf("\n pp = ");
 showPin( n, pp);
 int thesiMax = findThesiMax(n, pp); 
printf("\n max = *(pp+thesiMax) = %d in position thesiMax =%d\n", *(pp+thesiMax) , thesiMax ); 
int thesiMin = findThesiMin(n,pp);
printf("\n min = *(pp+thesiMin) = %d in position thesiMin = %d\n",*(pp+thesiMin),thesiMin);
countAvg(n,pp);
swapPiPj(i,j,pp);
printf("Give an integer num :");
scanf("%d",&num);
int thesiNum = searchThesiNum(n, num, pp);
 if (thesiNum != -1)
 printf("*(pp+thesiNum) = %d in thesiNum = %d\n",*(pp+thesiNum), thesiNum );
 else
 printf("not found\n"); 
system("Pause");
}
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    

