#include <stdio.h>

float hitungLuasPermukaanKubus(float sisi){
	float luas;
	luas = 6 * sisi * sisi;
	return luas;
		
	}
	
float hitungVolumeKubus(float sisi){
	float volume;
	volume = sisi * sisi * sisi;
	return volume;
	
}

float hitungKelilingKubus (float sisi){
	float keliling;
	keliling = 12 * sisi;
	return keliling;
	
}

float hitungLuasPermukaanBalok (float panjang, float lebar, float tinggi){
	float luas;
	luas = 2*(panjang * lebar) + (panjang * tinggi) + (lebar * tinggi);
	return luas;
	
}


float hitungVolumeBalok(float panjang, float lebar, float tinggi){
	float volume;
	volume = panjang * lebar * tinggi;
	return volume;
	
}

float hitungKelilingBalok(float panjang, float lebar, float tinggi){
	float keliling;
	keliling = 4 * (panjang + lebar + tinggi);
	return keliling;
	
}


float hitungLuasBola(float phi, float r){
	float luas;
	luas = 4 * phi * r * r;
	return luas;
	
}
float hitungVolumeBola(float phi, float r){
	float volume;
	volume = phi * r * r * r * 4/3;
	return volume;
	
}

float hitungLuasKerucut(float phi, float r, float s){
	float luas;
	luas = (phi*r*r) + (phi*r*s);
	return luas;
	}

float hitungVolumeKerucut(float phi, float r, float tinggi){
	float volume;
	volume = phi* r * r * tinggi * 1/3;
	return volume;
	
}

int main(){
	float sisi = 15;
	float luas, volume, keliling;
	float r = 12;	
	float panjang = 20;
	float lebar = 10;
	float tinggi = 15;	
	float phi = 3.14;
	float s = 5;
	
	luas = hitungLuasPermukaanKubus(sisi);
	printf("Luas Permukaan Kubus = %.2f\n", luas);
	
	volume = hitungVolumeKubus(sisi);
	printf("Volume Kubus = %.2f\n", volume);
	
	keliling = hitungKelilingKubus(sisi);
	printf ("Keliling Kubus = %.2f\n", keliling);	
	
	printf ("----------------------------------\n");
	
	luas = hitungLuasPermukaanBalok(panjang, lebar, tinggi);
	printf("Luas Permukaan Balok = %.2f\n", luas);
	
	volume = hitungVolumeBalok(panjang, lebar, tinggi);
	printf("Volume Balok = %.2f\n", volume);
	
	keliling = hitungKelilingBalok(panjang, lebar, tinggi);
	printf("Keliling Balok = %.2f\n", keliling);
	
	printf ("---------------------------------\n");
	
	luas = hitungLuasBola(phi, r);
	printf("Luas Bola = %.2f\n", luas);
	
	volume = hitungVolumeBola(phi, r);
	printf("Volume Bola = %.2f\n", volume);
	
	printf ("---------------------------------\n");
	
	luas = hitungLuasKerucut(phi, r, s);
	printf("Luas kerucut = %.2f\n", luas);
	
	volume = hitungVolumeKerucut(phi, r, tinggi);
	printf("Hail volume kerucut = %.2f\n", volume);
	
	printf ("--------------------------------\n");
	
		return 0;
	}
