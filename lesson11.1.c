#include<stdio.h>

int main() {
	
	int vize1,vize2,final;
	float dersort;
	float ortalama;
	
	printf ("1. vize notunuzu girin:");
	scanf("%d",&vize1);
	printf("2.vize notunuzu girin:");
	scanf("%d",&vize2);
	printf("final notunuzu giriniz:");
	scanf("%d",&final);
	printf("ortalamanizi giriniz:");
	scanf("%f",&ortalama);
	
    dersort = (vize1+vize2+final)/3.0 ;
    
    if (dersort > 60 ) printf("dersten geçtiniz");
    
    else if (dersort>50) {
	
	printf("dersten bute kaldiniz.\n");

    if (ortalama < 2.5) {
    	
    printf("butu gecsen bile dersi seneye tekrar almalisin");
		
	}
    
    }

    
    else printf ("maalesef dersten kaldiniz.");
    
	
	return 0;
}
