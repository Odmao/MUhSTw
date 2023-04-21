#include <stdio.h>
#include <stdlib.h>
int main(){
	float a[4],b[4],c[4];
	int i;
	for(i=1; i<=4; i++){
		printf("a[%d]= ",i); scanf("%f",&a[i]);
		printf("b[%d]= ",i); scanf("%f",&b[i]);
	}
	for(i=1; i<=4; i++){
		c[5-i] = a[5-i]/ (b[5-i]-c[5-i+1]);
		printf("c[%d]=%f\n",5-i,c[5-i]);
	}
}
