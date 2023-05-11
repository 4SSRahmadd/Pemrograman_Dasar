#include <stdio.h>

/*Buatlah Program Kasir Warung sederhana dengan 3 jumlah Menu, dengan catatan :
1. Pembeli dapat menginputkan jumlah jenis menu/item yang ingin pesan.
2. Kemudian Pembeli memilih menu yang ingin dipesan sesuai dengan banyaknya jumlah jenis
menu yang dipesan, kemudian tampilkan menu yang di pesan.
3. Masukkan jumlah pesanan (Qty), kemudian tampilkan jumlah pesanan .
4. Tampilkan total harga pesanan.
5. Tampilkan Grand Total, kemudian masukan uang Pembeli (Tunai), dan tampilkan Kembalian dari
keseluruhan menu yang di pesan
6. Di akhir program terdapat pilihan konfirmasi kepada pembeli apakah ingin melanjutkan
pemesanan menu atau tidak. */

int main(){
	   int menu, pilih, jumlah, i, bayar;
	   awal :
	   printf("----------- WARUNG WAREG TENAN -----------\n");
	   printf("                                      \n");
	   printf("No. \tPilihan\t\t\tHarga\n");
	   printf("1.\tNasi Goreng PORTUGAL\t Rp 15.000\n");
	   printf("2.\tCapjay Chindo\t\t Rp 13.000\n");
	   printf("3.\tEs Teh\t\t\t Rp 5.000\n");
	   printf("======================================\n");
	   printf("                                      \n");
	   printf("Mau pesan berapa menu : "); 
	   scanf ("%i", &menu);
int  totalSemuanya = 0;
		 i = 0; 
	   while(i < menu){

	   printf("Pilih menunya lurrr : "); 
	   scanf("%i", &pilih);
   
   	   printf("\n-------------------------------------\n");
	   
   	   switch(pilih){
   	   	
   	   case 1 :
   	   	printf("Anda memesan Nasi Goreng PORTUGAL\n");
   	   	printf("Jumlah pesanan : ");
   	   	scanf("%i", &jumlah);
   	   	printf("----------------------\n");
   	   	printf("Qty(jumlah pesananmu)\t: %i\n", jumlah);
   	   	printf("Harga\t: %i\n", jumlah * 15000);
   	   	printf("----------------------\n");
   	   	totalSemuanya = totalSemuanya + jumlah * 15000;
   	   	break;
	  	   
	   case 2 :
	   	printf("Anda memesan Capjay Chindo\n");
   	   	printf("Jumlah pesanan : ");
   	   	scanf("%i", &jumlah);
   	   	printf("----------------------\n");
   	   	printf("Qty(jumlah pesananmu)\t: %i\n", jumlah);
   	   	printf("Harga\t: %i\n", jumlah * 13000);
   	   	printf("----------------------\n");
   	   	totalSemuanya = totalSemuanya + jumlah * 13000;
   	   	break;
	   	   
	   	case 3 :   
	   	printf("Anda memesan Es Teh\n");
   	   	printf("Jumlah pesanan : ");
   	   	scanf("%i", &jumlah);
   	   	printf("----------------------\n");
   	   	printf("Qty(jumlah pesananmu)\t: %i\n", jumlah);
   	   	printf("Harga\t: %i\n", jumlah * 5000);
   	   	printf("----------------------\n");
   	   	totalSemuanya = totalSemuanya + jumlah * 5000;
   	   	break;
   	   
   	   default:
		  printf("pilihan menu anda salah, silahkan pilih kembali ke\n"); 
   	   continue; 
	   }
	   i++;
	   }
	   printf("Grand Total\t: %d\n", totalSemuanya);
		printf("Tunai\t\t: ");
		scanf("%d", &bayar);
		
		if(bayar >= totalSemuanya)
		{
			printf("Kembalian\t: %d\n", bayar - totalSemuanya);
		}
		else
		{
			printf("\n");
			printf("Maaf, uang anda kurang!\n");
		}
		char ulang;
		again :
			printf("Ingin melanjutkan memesan menu? [Y/N] ");
		scanf(" %c", &ulang);
		
		if(ulang == 'y' || ulang == 'Y'){goto awal;	
		}
		else if(ulang == 'n' || ulang == 'N'){
			printf("Terimakasih telah makan disini, kami menunggu kedatanganmu kembali\n");
			
		}
		else {
			printf("Pilihan tidak tersedia, coba pilih lagi\n");
			goto again;
		}

	return 0;}
