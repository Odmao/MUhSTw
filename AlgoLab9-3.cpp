#include <stdio.h>

int main(){
	int a[29],min=1,max=0;
	for(int i=0; i<=29; i++){
		scanf("%d",&a[i]);
	}
	printf("MAX : \n");
	for(int i=0; i<=14; i++){
		max = a[i] + a[29-i];
		printf("a[%d] + a[%d] = %d\n",i,29-i,max);
		max = 0;
	}
	printf("MIN : \n");
	for(int i=0; i<=14; i++){
		min = a[i] * a[15+i];
		printf("a[%d] * a[%d] %d\n",i,15+i,min);
		min = 1;
	}
}
