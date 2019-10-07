#include<stdio.h>

int main() {
	
	int note;
	
	printf("lutfen notunzu giriniz:");
	scanf("%d",&note);
	
	if (note > 60){
		
		printf("dersten gectiniz");
		
	}
	else {
		
		printf("dersten kaldiniz");
		
	}
	
	return 0;
	
}
