#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    float a=1,b=1,ak,bk,k,s=0,n,m=1;
    scanf("%f",&n);
    for(k=2;k<=n;k++){
        for(int i=1;i<=k;i++){
            m=m*i;
        }
        ak=3*b+2*a;
        bk=2*a+b;
        a=ak;
        b=bk;
        s=s+pow(2,k)/((1+pow(ak,2)+pow(bk,2))*m);
        m=1;
    }
    printf("%f",s);
    return 0;
}