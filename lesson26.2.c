#include<stdio.h>

int faktoriyel(sayi) {
	
	int fact;
	
	for (; sayi > 0 ; sayi --) {
		
		fact *= sayi ;
	}
	
	return fact ;
}

int main () {
	
	int n ;
	
	printf ("lutfen faktoriyelini almak istediginiz sayiyi giriniz:");
	scanf ("%d",&n);
	
	printf("faktoriyel : %d",faktoriyel(n));
	
	return 0 ;
}
