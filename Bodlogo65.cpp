#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int n,a,s;
    printf("n too oriilna uu(n<=99)\n");
    scanf("%d",&n);
    a=n%10;
    s=n/10;
    if(pow(a,3)+pow(s,3)==n)
        printf("n toonii tsipruudin kubuudiin niilber n toonii kvadrattai tentsuu");
        else 
        printf("n toonii tsipruudin kubuudiin niilber n toonii kvadrattai tentsuu bish");
    return 0;
}