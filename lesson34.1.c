#include<stdio.h>

int main () {
	
	int sayilar[5] = {1,2,3,4,5};
	
	int *p=sayilar;
	
	printf("%d\n",p[0]);
	printf("%d\n",p[1]); 
	printf("%d\n",p[2]); 
	printf("%d\n",p[3]); 
	printf("%d\n",p[4]); 
	
	/* 	
	gereksiz yazým þekli sadece bilgi olsun diye koydum üstteski daha kullanýþlý ve anlaþýlýr.
	
	printf("%u\n",*p);
    printf("%u\n",*(p+1));
	printf("%u\n",*(p+2));
	printf("%u\n",*(p+3));
	
	*/	
	
	return 0 ;
}
