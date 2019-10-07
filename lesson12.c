#include<stdio.h>

int main() {
	
	int vize1,vize2,final;
	float okulortalama;
	float dersort;
	
	printf("1.vize notunuzu giriniz:");
	scanf("%d",&vize1);
	printf("2.vize notunuzu giriniz:");
	scanf("%d",&vize2);
	printf("final notunuzu giriniz:");
	scanf("%d",&final);
	printf("universite ortalamanizi giriniz:");
	scanf("%f",&okulortalama);
	
	dersort=(vize1*3/10.0 + vize2*3/10.0 + final*3/10.0);
	
	if (dersort >= 90) {
		printf("harf notunuz : AA ve ders ortalamaniz : %f",dersort);
	}
	else if (dersort >=85 && dersort < 90) {
		printf("harf notunuz : BA ve ders ortalamaniz : %f",dersort);
	}
	else if (dersort >=80 && dersort <85 ) {
		printf("harf notunuz : BB ve ders ortalamaniz : %f\n",dersort);
		printf("helalin var lan");
	}
	else if (dersort >=75 && dersort <80){
		printf("harf notunuz : CB ve ders ortalamaniz : %f",dersort);
	}
	else if (dersort >=70 && dersort <75){
		printf("harf notunuz : CC ve ders ortalamaniz : %f",dersort);
        if (okulortalama < 2.5){
        	printf("dersi tekrar alman senin icin yararli olabilir");
		} 	
	}
	else if (dersort >=65 && dersort <70){
		printf("harf notunuz : CD ve ders ortalamaniz : %f",dersort);
		if (okulortalama < 2.5){
			printf("dersi tekrar alman senin icin yararli olabilir");
		}
	}
	else if (dersort >=60 && dersort <65){
		printf("harf notunuz : DD ve ders ortalamaniz : %f",dersort);
		if (okulortalama){
			printf("dersi tekrar alman senin icin yararli olabilir");
		}
	}
	else {
		printf("harf notunuz : FF ve ders ortalamanýz : %f\n",dersort);
		printf("maalesef dersten kaldiniz");
	}
	return 0;
	
}
