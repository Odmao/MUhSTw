#include<stdlib.h>
#include<stdio.h>
#include<string.h>
float Doctor(float tsalin, float t){
    float Nem,NDSH,JilNem;
    Nem = (tsalin * 20) / 100;
  	NDSH = (tsalin * 11,5 ) / 100;
  	if (t <= 6)
    JilNem = (tsalin * 1) / 100;    	
  	else if (t <= 10)
  	JilNem = (tsalin * 5) / 100;
  	else if (t <= 15)
	JilNem = (tsalin * 10) / 100; 
	else if (t<=20)
	JilNem = (tsalin * 15) / 100;
	else if (t <= 25)
	JilNem = (tsalin * 20) / 100;
	else if ( t >= 25)
	JilNem = (tsalin * 25) /100;
	return (tsalin+Nem+JilNem-NDSH);
}
float Professor(float tsalin, float t){
    float Nem,NDSH,JilNem;
    Nem = (tsalin * 15) / 100;
  	NDSH = (tsalin * 11,5 ) / 100;
  	if (t <= 6)
    JilNem = (tsalin * 1) / 100;    	
  	else if (t <= 10)
  	JilNem = (tsalin * 5) / 100;
  	else if (t <= 15)
	JilNem = (tsalin * 10) / 100; 
	else if (t<=20)
	JilNem = (tsalin * 15) / 100;
	else if (t <= 25)
	JilNem = (tsalin * 20) / 100;
	else if ( t >= 25)
	JilNem = (tsalin * 25) /100;
	return (tsalin+Nem+JilNem-NDSH);
}
int Une(int oroh, int garah){
    int une;
    une=(garah-oroh)*1500;
    return une;
}
int Tsag(int oroh, int garah){
    int tsag;
    tsag=garah-oroh;
    return tsag;
}
int main(){
    char dugaar[20][7];
    int oroh[20],garah[20],tsag[20],une[20],x;
    printf("Mashinii zogsooliin too: ");
    scanf("%d",&x);
    for(int i=0; i<x; i++){
        printf("Mashinii Dugaar: ");
        scanf("%s",&dugaar[i]);
        printf("Orson Tsag: ");
        scanf("%d",&oroh[i]);
        printf("Garsan Tsag: ");
        scanf("%d",&garah[i]);
        tsag[i]=Tsag(oroh[i],garah[i]);
        une[i]=Une(oroh[i],garah[i]);
    }

    for(int i=0;i<x;i++){
        printf("%s Dugaartai mashin %d tsag zogsson %d tulbur tulnu\n",dugaar[i],tsag[i],une[i]);
    }
    char Ner[20][10],Zereg[20][10];
    int Jil[20],y;
    float Tsalin;
    printf("Ajilchdiin too: ");
    scanf("%d",&y);
    printf("Kompaniin engiin tsalin: ");
    scanf("%f",&Tsalin);
    for(int i=0;i<y;i++){
        printf("Tanii Ner: ");
        scanf("%s",&Ner[i]);
        printf("Tanii Zereg(Professor,Doctor): ");
        scanf("%s",&Zereg[i]);
        printf("Tanii ajillasan jil :");
        scanf("%d",&Jil[i]);
    }
    for(int i=0;i<y;i++){
        if(Zereg[i]=="Doctor")
        printf("%s ni %f tsaln awna\n",Ner[i],Doctor(Tsalin,Jil[i]));
        else 
        printf("%s ni %f tsaln awna\n",Ner[i],Professor(Tsalin,Jil[i]));
    }
    return 0;
}