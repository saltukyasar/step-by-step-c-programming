#include<stdio.h>

int main () {
	
	float toplam = 0.0 ;

	float sayilar [5];
	int i ;
	
	for ( i = 0 ; i <= 4 ; i++ ){
		printf("bir sayi giriniz:");
		scanf("%f",&sayilar[i]);
	}
	
	for ( i=0 ; i<=4 ; i++){
		toplam += sayilar[i];
	}
	
	printf("girdiginiz sayilarin aritmetik ortalamasi %.2f dir:",toplam/5);
	
	return 0 ;
}
