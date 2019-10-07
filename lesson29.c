#include<stdio.h>
#include<string.h>

int uzunlukdon(char name []){
	
	int uzunluk;
	int i;
	
	for (i=0 ; name[i] !='\0' ; i++){
		
		uzunluk++;
	}
	return uzunluk ;
}



int main () {
	
	char isim[]="MUSTAFA" ;
	
	printf ("%d",uzunlukdon(isim));
	
	
	
	return 0 ;
}
