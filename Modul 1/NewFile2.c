#include <stdio.h>

int main()
{

	char x[100];
	int a, b, c, d, y, f = 4;
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
	y = (a+b+c+d) / f;

	if (y>=75){
		printf("oke good job guys\n");
		printf("%i", y);
	}
	else{
		printf("maaf anda belum beruntung coba lagi\n");
		printf("%i", y);
	}			
	return 0;
} 