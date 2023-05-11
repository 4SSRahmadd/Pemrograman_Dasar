#include <stdio.h>

int main()
{
// input data 
	char x;
	int a, b, c, d;
	int y;
	printf("masukkan nama : ");
	scanf("%s", &x);
	printf("input nilai pemrograman dasar : ");
	scanf("%d", &a);
	printf("input nilai kalkulus : ");
	scanf("%d", &b);
	printf("input nilai PTI : ") ;
	scanf("%d", &c);
	printf("input nilai orkom : ") ;
	scanf("%d", &d);
	y = (a+b+c+d)/4;
// decision
	if (y>=75){
		printf("oke good job guys\n");
		printf("%i", y);
	}
	else{
		printf("maybe next time\n");
		printf("%i", y);
	}			
	return 0;
}