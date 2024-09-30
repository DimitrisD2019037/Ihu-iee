#include <stdio.h>
#include <stdlib.h>

 
void fillPin2D(int n,int my2DArray[50][50])
{
    int i,j;
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            my2DArray[i][j]= (rand() % (10 - 1 +1))+1;
        }
    }
}
void showPin2D(int n,int my2DArray[50][50]){
    int i,j;
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            printf("%d ", my2DArray[i][j]);
        }
            printf("\n");  
        }
    }
void findMeanLine(int n,int my2DArray[50][50],double avgLine[50]){
    int i,j;
    double sum,avg;
    sum=0;
    avg=0;
    for (i=0;i<n;i++){
        for(j=0;j<n;j++){
            sum = sum + my2DArray[i][j];
        }
       avg = (double)sum/n;
       avgLine[i]=avg;
       avg=0;
       sum=0;
       }
     }
void showPinDouble1D(int n,double avgLine[50]){
int i;
for (i=0;i<n;i++){
    printf("%lf ",avgLine[i]);
    
}
    } 
void findMeanCol(int n,int my2DArray[50][50],double avgCol[50]) {
	int i,j;
	double sum,avg;
	sum=0;
	avg=0;
	for (j=0;j<n;j++){
		for (i=0;i<n;i++){
			sum = sum + my2DArray[i][j];
			
		}	
		avg = (double) sum/n;
		avgCol[j]=avg;
		avg =0;
		sum=0;	
	}
}
void findDSum(int n,int my2DArray[50][50],int sum1D, int sum2D){
	int i,j;
	sum1D=0;
	sum2D=0;
	for (i=0;i<n;i++){
		for (j=0;j<n;j++)
	             if (i == j) 
                      sum1D += my2DArray[i][j]; 
                 if ((i + j) == (n - 1)) 
                       sum2D += my2DArray[i][j]; 
	}			
			
}

main ()
{  
   /*
     MATHIMA : DOMHMENOS PROGRAMMATISMOS
    TMHMA : T2 
    ERGASTHRIAKH ASKHSH :01 
    HMEROMHNIA : 06/12/2019
    ONOMA : DIMOY DIMITRIOS
    */
int i,j,n,my2DArray[50][50],sum1D,sum2D,x;
double avgLine[50],avgCol[50];
printf("Give an integer n > 5 :");
scanf("%d",&n);
fillPin2D(n,my2DArray);
printf("P=");
showPin2D(n,my2DArray);
findMeanLine(n,my2DArray,avgLine);
printf("avgLine =");
showPinDouble1D(n,avgLine);
findMeanCol(n,my2DArray,avgCol);
printf("\n");
printf("avgCol =");
showPinDouble1D(n,avgCol);
findDSum(n,my2DArray,sum1D,sum2D);
printf("\n");
printf("sum1D = %d\n",sum1D);
x=sum1D+sum2D;
printf("sum1D + sum2D = %d\n",x);
system("pause");
}   
