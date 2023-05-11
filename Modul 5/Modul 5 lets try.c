#include <stdio.h>
#include <string.h>

int i,j, a = 0, pick, menu = 0;
char c[20], nama['0'][20], nim['0'][11], kel['0'][20], jur['0'][20], fak['0'][20], dos['0'][20];

int create(){
	kembali:
	a = a+1;
	printf("Masukkan Nama anda\t:");
	scanf(" %[^\n]s", nama[a]);
	printf("Masukkan NIM anda\t:");
	scanf(" %[^\n]s", nim[a]);
	printf("Masukkan Kelas anda\t:");
	scanf(" %[^\n]s", kel[a]);
	printf("Masukkan Jurusan anda\t:");
	scanf(" %[^\n]s", jur[a]);
	printf("Masukkan Fakultas anda\t:");
	scanf(" %[^\n]s", fak[a]);
	printf("Masukkan Nama Dosen\t:");
	scanf(" %[^\n]s", dos[a]);
	
    if(strlen(nim[a]) == 10){
        if(a == 0){
            printf("\nData Anda Berhasil Ditambah Awal\n");
            printf("---------------------------------------\n\n");
            a += 1;
        }
        else{
            for(a = 0; a < i; a++){
                if(strcmp(nim[i], nim[a])){
                    printf("\nData Anda Berhasil Ditambah\n");
                    printf("---------------------------------------\n\n");
                    a += 1;
                    break;
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
    if(a<1){
        printf("anda belum input data");
    }else{
        i=1;
        while(i<=a){
            printf("%d.Nama     : %s\n",i,nama[i]);
            printf("  NIM      : %s\n",nim[i]);
            printf("  Kelas  : %s\n",kel[i]);
            printf("  Jurusan  : %s\n",jur[i]);
            printf("  Fakultas : %s\n",fak[i]);
            printf("  Nama Dosen : %s\n", dos[i]);
            printf("----------\n");
            i++;
        }
    }
}
int update(){
    printf("masukkan nim yang ingin di update : ");
    scanf("%s",c);
    i=1;
    j=0;
    while(i<=a && j==0){
        if(strcmp(c,nim[i])==0){
            j++;
        }
        i++;
    }
    if(j<1){
        printf("data yang akan anda update mungkin tidak ada");
    }else{
        i--;
        printf("Nama     : %s\n",nama[i]);
        printf("NIM      : %s\n",nim[i]);
        printf("Kelas  : %s\n",kel[i]);
        printf("Jurusan  : %s\n",jur[i]);
        printf("Fakultas : %s\n",fak[i]);
        printf("Nama Dosen : %s\n", dos[i]);
		printf("----------\n");
        printf("masukkan Nama baru     : ");
        scanf(" %[^\n]s",nama[i]);
        printf("masukkan NIM baru      : ");
        scanf(" %[^\n]s",nim[i]);
        printf("masukkan Kelas baru  : ");
        scanf(" %[^\n]s",kel[i]);
        printf("masukkan Jurusan baru  : ");
        scanf(" %[^\n]s",jur[i]);
        printf("masukkan Fakultas baru : ");
        scanf(" %[^\n]s",fak[i]);
        printf("masukkan nama dosen baru : ");
        scanf(" %[^\n]s", dos[i]);
    }
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
        i++;
    }
    if(j<1){
        printf("data yang akan anda delete mungkin tidak ada");
    }else{
        i--;
        printf("data %s berhaasil di delete",nama[i]);
        while(i<=a){
            strcpy(nama[i],nama[i+1]);
            strcpy(nim[i],nim[i+1]);
            strcpy(kel[i],kel[i+1]);
            strcpy(jur[i],jur[i+1]);
            strcpy(fak[i],fak[i+1]);
            strcpy(dos[i],dos[i+1]);
            i++;
        }
        i--;
        strcpy(nim[i],"");
        a--;
    }
}
int main(){
	printf("\tSistem Pendataan Akun I-Lab Infotech :\n");
	printf("\n\t====== PILIH MENU ======\n");
	printf("1.\tCreate Data\t:\n");
	printf("2.\tShow Data\t:\n");
	printf("3.\tUpdate Data\t:\n");
	printf("4.\tDelete data\t:\n");
	printf("5.\tSearch Data\t:\n");
	printf("6.\tExit\t\t:\n");
	printf("\n\tPILIH\t\t:");
	scanf("%d", &pick);	
	while(menu!=5)
	{
		scanf("%d", &menu);
	puts("");
        if(menu==1){
            create();
        }else if(menu==2){
            show();
        }else if(menu==3){
            update();
        }else if(menu==4){
            del();
        }else if(menu==5){
            printf("keluar...");
        }else{
            printf("pilih menu yang tersedia");
        }puts("");
    return 0;
	}
	
}