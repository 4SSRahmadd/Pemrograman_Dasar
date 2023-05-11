 #include <stdio.h>

int main()
{
// pengisian input
	char x[100];
	double a, b, c, d;
	int f = 4;
	double y;
	printf("masukkan nama : ");
	scanf("%s", &x);
	printf("input nilai pemrograman dasar : ");
	scanf("%lf", &a);
	printf("input nilai kalkulus : ");
	scanf("%lf", &b);
	printf("input nilai PTI : ") ;
	scanf("%lf", &c);
	printf("input nilai orkom : ") ;
	scanf("%lf", &d);
	y = (a+b+c+d) / f;
// decision
	if (y>=75){
		printf("oke good job guys\n");
		printf("%lf", y);
	}
	else{
		printf("maaf anda belum beruntung coba lagi\n");
		printf("%lf", y);
	}			
	return 0;
} 