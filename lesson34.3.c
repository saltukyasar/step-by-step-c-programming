#include<stdio.h>

int maks (int *a,int uzunluk) {
	int max = a[0];
	
	int i ;
	
	for (i=1; i<uzunluk ; i++){
		if (a[i]>max){
			
			max = a[i];
		}
	}
	return max;
}

int main () {
	
	int sayilar[5] = {3,4,42,100,1};
	
	int max = maks (sayilar,5) ;
	
	printf ("sayilar arrayinin en buyuk elemani %d dir",max);
	
	
	return 0;
}
