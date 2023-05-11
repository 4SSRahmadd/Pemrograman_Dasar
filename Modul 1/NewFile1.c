#include <stdio.h>

int hitungLuas(int panjang, int lebar){
	int luas;
	luas = panjang * lebar;
	return luas;
}
int main (){
	int panjang = 10;
	int lebar = 5;
	int luas;
	
	luas hitungLuas(panjang, lebar);
	printf("hasil = %d/n", luas);
	return 0;
}