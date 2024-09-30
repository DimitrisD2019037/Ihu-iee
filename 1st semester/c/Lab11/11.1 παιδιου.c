#include <stdio.h>
#include <stdlib.h>

void fillPin(int n, int *pp) {
	
	int i=0;
	
	for (i=0;i<=n-1;i++) {
		*(pp+i)=(rand()%10)+1;
	}

}

void showPin(int n, int *pp) {
	
	int i=0;
	
	printf("p = ");
	
	for (i=0;i<=n-1;i++) {
		printf("%d ", *(pp+i));
	}
	
}

void findThesiMax(int n, int max, int *pp, int thesiMax) {
	
	int i=0;
	
	for (i=0;i<=n-1;i++) {	
		if (max<*(pp+i)) {
			max=*(pp+i);
			thesiMax=i;
		}
	}
	
	printf("\nmax = %d thesiMax = %d", max, thesiMax);
	
}

void findThesiMin(int n, int min, int *pp, int thesiMin) {
	
	int i=0;
	
	for (i=0;i<=n-1;i++) {
		if (min>*(pp+i)) {
			min=*(pp+i);
			thesiMin=i;
		}
	}
	
	printf("\nmin = %d thesiMin = %d", min, thesiMin);
	
}

int countAvg(int n, double sum, int *pp, double avg, int count) {

	int i=0;
	
	for (i=0;i<=n-1;i++) {
		sum=sum+*(pp+i);
	}
	
	avg=(double)(sum/n);
	
	printf("\navg = %lf",avg);
	
	count=0;
	
	for (i=0;i<=n-1;i++) {
		if (avg<*(pp+i)) {
			count++;
		}
	}
	
	return count;
	
}

int searchPthesiNum(int n, int num, int *pp, int thesiNum) {
	
	int i=0;
	
	for (i=0;i<=n-1;i++) {
		if (num==*(pp+i)) {
			thesiNum=i;
			break;
		}
	}
	return thesiNum;
}

void bubbleDesc(int n, int *pp, int temp) {
	
	int i=0;
	int j=0;
	
	
	for (j=0;j<=n-1;j++) {
		for (i=0;i<=n-2;i++) {
			if (*(pp+i)<*(pp+i+1)) {
				temp=*(pp+i);
				*(pp+i)=*(pp+i+1);
				*(pp+i+1)=temp;
			}
		}
	}
	
}

int binarysearchPThesiNum(int n, int num, int *pp) {
	
	int a=0;
	int t=n-1;
	int m=0;
	int thesiNum = -1;
	
	while (a<=t&&thesiNum==-1) {
		
		m=(a+t)/2;
		
		if (num==*(pp+m)) {
			thesiNum=m;
			}
		else if (num>*(pp+m)) {
			t=m-1;
		}
		else {
			a=m+1;
		}
	
	}

return thesiNum;

}

void swapPin(int index, int n, int *pp, int temp) {
	
		temp=*(pp+index);
		*(pp+index)=*(pp+index+1);
		*(pp+index+1)=temp;
		
		printf("Swap p[%d], p[%d]\n",index,index+1);

}

main() {
	
	int n=0;
	
	do {
		printf("Give an integer n>5: ");
		scanf("%d",&n);
	}
	while(n<=5);
	
	printf("\n");
	
	int *pp;
	pp=(int*)malloc(sizeof(int)*n);
	
	fillPin(n,pp);
	
	showPin(n,pp);
	
	int max=*pp;
	int thesiMax=0;
	
	findThesiMax(n,max,pp,thesiMax);
	
	int min=*pp;
	int thesiMin=0;
	
	findThesiMin(n,min,pp,thesiMin);
	
	double sum=0;
	double avg=0;
	
	int count=countAvg(n,sum,pp,avg,count);
	
	printf("\ncount avg = %d",count);
	
	int num=0;
	
	printf("\n\nGive an integer num: ");
	scanf("%d",&num);
	
	printf("\n");
	
	int thesiNum=searchPthesiNum(n,num,pp,thesiNum);
	
	if (thesiNum>-1) {
		printf("Found num %d in position %d, p[%d] = %d\n",num,thesiNum,thesiNum,*(pp+thesiNum));
	}
	
	else {
		printf("NOT FOUND\n");
	}
	
	int temp=0;
	
	bubbleDesc(n,pp,temp);
	
	showPin(n,pp);
	
	printf("\n\nGive an integer num: ");
	scanf("%d",&num);
	
	printf("\n");
	
	*pp=62;
	*(pp+n-1)=-15;
	
	thesiNum=binarysearchPThesiNum(n,num,pp);
	
	if (thesiNum>-1) {
		printf("Found num %d in position %d, p[%d] = %d\n",num,thesiNum,thesiNum,*(pp+thesiNum));
	}
	
	else {
		printf("NOT FOUND\n");
	}
	
	int index=rand()%(n-1);
	
	temp=0;
	
	swapPin(index,n,pp,temp);
	
	showPin(n,pp);
	
	
	
	
	printf("\n\n");
	system("pause");
	
}
