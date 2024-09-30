#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct ypallhlos
 {
 	/*
     MATHIMA : DOMHMENOS PROGRAMMATISMOS
    TMHMA : T2 
    ERGASTHRIAKH ASKHSH :01 
    HMEROMHNIA : 13/12/2019
    ONOMA : DIMOY DIMITRIOS
    */
 char name[50];
 int aM;
 int eidpt;
 int uper;
 double basMisth;
 } p1, p2;

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
void findTMisthos(struct ypallhlos p)
{
    double TMisthos;
    int x,pt=p.eidpt;
    
    switch (pt){
        case 1:  TMisthos= p.basMisth + p.uper * 20 + 300;
               break;
       case 2:  TMisthos= p.basMisth + p.uper * 20 + 150;
              break;
      case 3: TMisthos= p.basMisth + p.uper * 20 + 100;
             break;
      case 4: TMisthos= p.basMisth + p.uper * 20 + 50;
            break; 
      default: TMisthos= p.basMisth + p.uper * 20 ;
}           
    printf("call findTMisthos() - tM = %lf\n",TMisthos);
}
double returnTMisthos(struct ypallhlos p)
{
    double TMisthos;
    int x,pt=p.eidpt;
    
    switch (pt){
        case 1: TMisthos= p.basMisth + p.uper * 20 + 300;
               break;
       case 2: TMisthos= p.basMisth + p.uper * 20 + 150;
              break;
      case 3: TMisthos= p.basMisth + p.uper * 20 + 100;
             break;
      case 4: TMisthos= p.basMisth + p.uper * 20 + 50;
            break; 
      default: TMisthos= p.basMisth + p.uper * 20;
}           
    return TMisthos;
}
void findMaxTM(double TMisthos1,double TMisthos2)
{

 if (TMisthos2>TMisthos1){
 	printf("TM yp2 = %lf > TM yp1 = %lf\n",TMisthos2,TMisthos1);
 }
 else if (TMisthos2<TMisthos1){
 	printf("TM yp2 = %lf < TM yp1 = %lf\n",TMisthos2,TMisthos1);
 }
else {
	printf("TM yp2 = %lf = TM yp1 = %lf\n",TMisthos2,TMisthos1);
}
}
void swapYp1Yp2(struct ypallhlos p1,struct ypallhlos p2){
 struct ypallhlos temp = p1;
 p1=p2;
 p2=temp;
}


main ()
{  
   
    
   char name[50];
   int aM,eidpt,uper;
   double basMisth,Tmisthos;
   p1 = gemismaPedion("ioannou",192134,1,7,600.0);
  printf("Ypallhlos p1 : \n");
 emfanishPedion( p1 );
 findTMisthos(p1);
 printf("Give name of ypallhlos 2 :");
 scanf("%s",name);
 printf("Give aM of ypallhlos 2:");
 scanf("%d",&aM);
 printf("Give ptyxio of ypallhlos 2 :");
 scanf("%d",&eidpt);
 printf("Give yperories of ypallhlos 2 :");
 scanf("%d",&uper);
 printf("basikosMisthos of ypallhlos 2 : ");
 scanf("%lf",&basMisth);
 printf("Ypallhlos p2 : \n");
 p2 = gemismaPedion(name,aM,eidpt,uper,basMisth);
 emfanishPedion(p2);
 double TMisthos1=returnTMisthos(p1);
 double TMisthos2=returnTMisthos(p2);
 printf("call returnTMisthos() - tM = %lf\n",TMisthos2);
 findMaxTM(TMisthos1,TMisthos2);
 swapYp1Yp2(p1,p2);
 printf("ypallhlos p1 after swap yp 1 yp2 :\n");
 emfanishPedion(p1);
 printf("ypallhlos p2 after swap yp1 yp2 : \n");
emfanishPedion(p2);
swapYp1Yp2(p1,p2);
printf("ypallhlos p1 after swapYp1Yp2 : \n");
emfanishPedion(p1);
printf("ypallhlos p2 after swapYp1Yp2 : \n");
emfanishPedion(p2);
system("pause");
}


