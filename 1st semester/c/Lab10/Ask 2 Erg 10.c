#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct ypallhlos{
/*
     MATHIMA : DOMHMENOS PROGRAMMATISMOS
    TMHMA : T2 
    ERGASTHRIAKH ASKHSH :02 
    HMEROMHNIA : 13/12/2019
    ONOMA : DIMOY DIMITRIOS
    */
    	char name[50];
    	int aM;
    	int eidpt;
    	int uper;
    	double basMisth;
    	double tM;
    	}yp[50];
    	
struct ypallhlos gemismaPedion( char name[], int am, int eidpt, int uper, double basmisth)
 {
 struct ypallhlos p;
 strcpy(p.name, name);
 p.aM = am;
 p.eidpt = eidpt;
 p.uper = uper;
 p.basMisth = basmisth;
 return p;
 }
 void emfanishPedion(struct ypallhlos p){
	printf("name :  %s\n aM = %d\n ptyxio = %d\n uperories = %d \n basikosMisthos = %lf\n", p.name,p.aM, p.eidpt, p.uper, p.basMisth);
}
double returnTMisthos(struct ypallhlos yp)
{
    double TMisthos;
    int x,pt=yp.eidpt,tM;
    
    switch (pt){
        case 1: tM= yp.basMisth + yp.uper * 20 + 300;
               break;
       case 2: tM= yp.basMisth + yp.uper * 20 + 150;
              break;
      case 3: tM= yp.basMisth + yp.uper * 20 + 100;
             break;
      case 4: tM= yp.basMisth + yp.uper * 20 + 50;
            break; 
      default: tM= yp.basMisth + yp.uper * 20;
}           
    return tM;
}
void setTMALL(struct ypallhlos yp[50],int n)
{
	int i;
	for (i=0;i<n;i++){
		yp[i].tM = returnTMisthos(yp[i]);
	}
}
void swapYpiYp1(struct ypallhlos yp[],int i,int j){
	struct ypallhlos temp = yp[i];
	yp[i] = yp[j];
	yp[j] = temp;
}
int returnThesiMaxTM(struct ypallhlos yp[],int n){
	double maxTM = 0;
	int i, thesiTM=0;
	for (i=0;i<n;i++){
		if (yp[i].tM>maxTM){
			maxTM = yp[i].tM;
			thesiTM=i;
		}
	}
	return thesiTM;
}
main ()
{
    char name[50];
    int n,i,aM,eidpt,uper,thesiMaxTm;
    double basMisth;
    do
    {
	printf("Give n <= 50 :");
    scanf("%d",&n);
    }while (n > 50);
    for (i=0;i<n;i++){
    	printf("Give name of ypallhlos yp [%d] :",i);
    	scanf("%s",name);
    	printf("Give aM of ypallhlos yp[%d] :",i);
    	scanf("%d",&aM);
    	printf("Give ptyxio of ypallhlos yp[%d] : ",i);
    	scanf("%d",&eidpt);
    	printf("Give yperories of ypallhlos yp[%d] : ",i);
    	scanf("%d",&uper);
    	printf("Give basikosMisthos of ypallhlos yp[%d] :",i);
    	scanf("%lf",&basMisth);
    	yp[i] = gemismaPedion(name,aM,eidpt,uper,basMisth);
	}
	for(i=0;i<n;i++){
		printf("Ypallhlos yp[%d] : \n",i);
		emfanishPedion(yp[i]);
	}
	setTMALL(yp,n);
	int index = rand() % (n-2);
	swapYpiYp1( yp, index, index+1);
	printf("pinakas after Swap yp[%d] <--> yp[%d]\n",index,index+1);
	for(i=0;i<n;i++){
		printf("Ypallhlos yp[%d] : \n",i);
		emfanishPedion(yp[i]);
	}
	 thesiMaxTm = returnThesiMaxTM(yp,n);
	 printf("Pedia ypallhloy me maxTM : \n");
	 emfanishPedion(yp[thesiMaxTm]);
	system("pause");
}
