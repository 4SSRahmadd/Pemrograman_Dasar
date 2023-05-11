#include <stdio.h>
#include <string.h>
#include <time.h>
#include <windows.h>

int i,j, a = 0, pick, menu = 0;
char c[20], nama['0'][20], nim['0'][11], kel['0'][20], dos['0'][20];

int create(){
	kembali:
	printf("Masukkan Nama anda\t:");
	scanf(" %[^\n]s", nama[a]);
	printf("Masukkan NIM anda\t:");
	scanf(" %[^\n]s", nim[a]);
	printf("Masukkan Kelas anda\t:");
	scanf(" %[^\n]s", kel[a]);
	printf("Masukkan Nama Dosen\t:");
	scanf(" %[^\n]s", dos[a]);
	
    if(strlen(nim[a]) == 10){
        if(a == 0){
            printf("\nData Anda Berhasil Ditambah Awal\n");
            printf("---------------------------------------\n\n");
            a += 1;
        }
        else{
            for(i = 0; i < a; i++){
                if(strcmp(nim[i], nim[a])){
				printf("\nData Anda Berhasil Ditambah\n");
                printf("---------------------------------------\n\n");
                a += 1;
                return 0;
                }
                else{
                    printf("\nNim Yang Anda Tambah Sudah Tersedia, Mohon Input NIM Lain\n");
                    goto kembali;
                }
            }
        }
	}
    else{
        printf("\nNim Anda Kurang Atau Lebih Dari 10, Tolong Masukan Kembali\n");
        goto kembali;
    }
}
int show(){
    if(a == 0){ 
        printf("anda belum input data");
    }else{
        i=0;
        while(i<a){
            printf("%d.Nama      : %s\n",i + 1,nama[i]);
            printf("  NIM        : %s\n",nim[i]);
            printf("  Kelas      : %s\n",kel[i]);
            printf("  Nama Dosen : %s\n", dos[i]);
            printf("--------------------\n");
            i++;
        }
    }
}
int update(){
    char update[20];
	printf("Masukkan NIM yang ingin di update : ");
	scanf("%s", &update);
	for(i = 0; i < a; i++){
		if(strcmp(nim[i], update)== 0){
			printf("Data yang anda cari ditemukan\n");
			printf("%d.Nama      :",i + 1);
			scanf(" %[^\n]s", &nama[i]);
            printf("  Kelas      :");
            scanf(" %[^\n]s", &kel[1]);
            printf("  Nama Dosen :");
            scanf(" %[^\n]s", &dos[i]);
            printf("\nData anda telah diupdate\n");        
			return 0;
		}
	} 		printf("Data yang anda cari tidak ditemukan\n\n");
}
 
int del(){
	
    printf("masukkan nim yang ingin di delete : ");
    scanf("%s",c);
    i=1;
    j=0;
    while(i<=a && j==0){
        if(strcmp(c,nim[i])==0){
            j++;
        }
        i--;
    }
    if(j<1){
        printf("data yang akan anda delete mungkin tidak ada\n\n");
    }else{
        i++;
        printf("data %s berhaasil di delete\n\n",nama[i]);
        while(i<=a){
            strcpy(nama[i],nama[i+1]);
            strcpy(nim[i],nim[i+1]);
            strcpy(kel[i],kel[i+1]);
            strcpy(dos[i],dos[i+1]);
            i++;
        }
        i--;
        strcpy(nim[i],"");
        a--;
    }
}
int search(){
	char search[20];
	printf("Masukkan NIM yang ingin dicari : ");
	scanf("%s", &search);
	for(i = 0; i < a; i++){
		if(strcmp(nim[i], search)== 0){
			printf("Data yang anda cari ditemukan\n");
			printf("%d.Nama      : %s\n",i + 1,nama[i]);
            printf("  NIM        : %s\n",nim[i]);
            printf("  Kelas      : %s\n",kel[i]);
            printf("  Nama Dosen : %s\n", dos[i]);
            printf("--------------------\n");
			return 0;
		}
	} 		printf("Data yang anda cari tidak ditemukan\n\n");
}
int main(){
	
	printf("N");
    Sleep(100);
    printf("o");
    Sleep(100);
    printf("w ");
    Sleep(100);
    printf("L");
    Sleep(100);
    printf("o");
    Sleep(100);
    printf("a");
    Sleep(100);
    printf("d");
    Sleep(100);
    printf("i");
    Sleep(100);
    printf("n");
    Sleep(100);
    printf("g");
    Sleep(100);    
    printf(".");
    Sleep(1000);
    printf(".");
    Sleep(1000);
    printf(".\n");
    Sleep(1000);
	system("cls");
	do
	{
		printf("Sistem Pendataan Akun I-Lab Infotech :\n");
		printf("\n\t====== PILIH MENU ======\n");
		printf("1.\tCreate Data\t:\n");
		printf("2.\tShow Data\t:\n");
		printf("3.\tUpdate Data\t:\n");
		printf("4.\tDelete data\t:\n");
		printf("5.\tSearch Data\t:\n");
		printf("6.\tExit\t\t:\n");
		printf("\n\tPILIH\t\t:");
		scanf("%d", &menu);	
		
        if(menu==1){
            create();
        }else if(menu==2){
            show();
        }else if(menu==3){
            update();
        }else if(menu==4){
            del();
        }else if(menu==5){
        	search();
		}else if(menu==6){	
            printf("Terimakasih . . . ");        	
		}else{
            printf("Pilih menu yang tersedia kak.......\n\n");
        }
	}while(menu!=6);
	return 0; 
}
