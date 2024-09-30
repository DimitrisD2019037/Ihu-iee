#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void fillPin2D(int n, int *p)
{
 int i,j;
 for ( i=0;i<=n-1;i++)
 for ( j=0;j<=n-1;j++)
 *(p+i*n+j) = (rand() % (10 - 1 + 1)) + 1;
}
void showPin2D( int n, int *p)
{
 int i, j;
 for ( i=0;i<=n-1;i++)
 {
 for ( j=0;j<=n-1;j++)
 printf("%d ", *(p+i*n+j));
 printf("\n");
 }
} 
void findMeanLine(int n,int *p,double *d){
    int i,j;
    double sum,avg;
    sum=0;
    avg=0;
    for (i=0;i<n;i++){
        for(j=0;j<n;j++){
            sum = sum + *(p+i*n+j);
        }
       avg = (double)sum/n;
       *d=avg;
       avg=0;
       sum=0;
       }
     }
main ()
 {
 	/*
     MATHIMA : DOMHMENOS PROGRAMMATISMOS
    TMHMA : T2 
    ERGASTHRIAKH ASKHSH :02 
    HMEROMHNIA : 20/12/2019
    ONOMA : DIMOY DIMITRIOS
    */

int n;
int *pp;
double *dd;
pp = (int*)malloc(sizeof(int) * n); 
dd = (double*)malloc(sizeof(double)*n);
printf("Give an integer n > 5 :");
scanf("%d",&n);
fillPin2D(n,pp);
printf("P =");
showPin2D(n,pp);

}
