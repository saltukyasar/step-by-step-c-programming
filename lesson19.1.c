#include<stdio.h>

int main() {
	
	int toplam ;
	
	int i;
	
	while ( i <= 10 ) {
		
		if ( i%2 == 1) {
			i++;
			continue ;
		}
		toplam += i;
		i++;
		
	}
	printf ("%d",toplam);
	
	return 0;
}
