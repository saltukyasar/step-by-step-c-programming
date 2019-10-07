#include<stdio.h>

int main() {
	
	int toplam=0;
	
	int i ;
	
	for ( i = 1 ; i <= 10 ; i++ ) {
		
		if (i % 2 == 1){
			continue;
		}
		toplam += i ;
	}
	printf("%d",toplam);
	
	return 0;

}
