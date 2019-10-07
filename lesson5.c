#include <stdio.h>
#include <iostream>

 int main(){
 	
 	int x=5;
 	int y=7;
 	int a=2;
 	
 	x=y;
 	y = x+a+1;
 	 printf("x:%d\ny:%d\na:%d\n",x,y,a);
 	 
 	
 	x =4;
 	y=5;
 	a=6;
 	
 	printf("x:%d y:%d a:%d\n", --x,++y,a++);
 	printf("x:%d y:%d a:%d\n",x,y,a);
 	printf("x:%d y:%d a:%d\n",x--,--y,a--);
 	/*
 	
 	*/
 	x += a+1;
 	printf("x:%d\n",x);
 	
 	x=y=a+4;
 	printf("x:%d y:%d a:%d\n",x,y,a);
 	
 	system("pause");
 	return 0;
 }
