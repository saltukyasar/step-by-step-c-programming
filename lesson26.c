#include<stdio.h>

int topla(int sayi1 , int sayi2) {
	
	
	return (sayi1+sayi2);
}

int main () {
	
	int sayi1,sayi2 ;
	
	scanf ("%d %d",&sayi1,&sayi2);
	
	printf ("%d",topla(sayi1,sayi2));
	
	
	return 0 ;
}
