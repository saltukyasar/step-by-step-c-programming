#include<stdio.h>

void hatayibas(int hata) {
	
	printf("hata kodu %d",hata);
}

int main() {
	
	int sayi ;
	
	printf("lutfen negatif olmayan bir sayi giriniz ");
	scanf("%d",&sayi);
	
	if ( sayi < 0 ) {
		
		hatayibas(404);
		
	}
	else  {
		printf ("tebrikler kocum");
	}
	
	return 0 ;
}
