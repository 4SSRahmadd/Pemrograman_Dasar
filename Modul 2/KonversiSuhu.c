#include <stdio.h>

float hitungKelvin(float c){
	float konversi;
	konversi = c + 273;
	return konversi;
}
float hitungFahrenthait(float c){
	float konversi;
	konversi = c * 9/5 + 32;
	return konversi;
}

float hitungReamur(float c){
	float konversi;
	konversi = c * 4/5;
	return konversi;
}


int main(){
	float c, konversi;
	printf("Masukkan nilai celcius = ");
	scanf("%f", &c);
	
	printf("--------------------\n");
	
	konversi = hitungKelvin(c);
	printf("Konversi Celcius ke Kelvin = %.1f K\n", konversi);
	
	printf(" \n");
	
	konversi = hitungFahrenthait(c);
	printf("Konversi Celcius ke Fahrenthait = %.1f F\n", konversi);
	
	printf(" \n");
	
	konversi = hitungReamur(c);
	printf("Konversi Celcius ke Reamur = %.1f R", konversi);
	
	printf(" \n");
	return 0;
}