#include <stdio.h>
#include <string.h>

char NIM['0'][15], nama['0'][100], kel['0'][100], dos['0'][100];
int i = 0, y = 0, x;

#include "secret.h"
int main()
{
    //inputkan pilihanmu
    int pilih;
    printf("\n\t===Sistem Data Infotech===\n");
    printf("1. Create\t:\n");
    printf("2. Read\t:\n");
    printf("3. Update\t:\n");
    printf("4. Delete\t:\n");
    printf("5. Exit\t:\n");
    printf("Masukkan pilihan\t:\n");
    scanf("%d", &pilih);
    // masuk ke percabangan
    system("cls");
    switch (pilih)
    {
    case 1:
        create();
        break;
    case 2:
        read();
        break;
    case 3;
        update();
        break;
        case 4:
        delete ();
        break;
    case 5:
        exit();
        return 0;
        break;
    case 6:
        secretCommand();
    default:
        printf("Inputanmu ndak ada pantek");
    }
}
//masukkan fungsi pertama yakni create
int create()
{
    int unch;
    printf("Masukkan NIM Praktikan\t:\n");
    scanf(" %[^\n]s", &NIM[i]);
    printf("Masukkan Nama Praktikan\t:\n")
        scanf(" %[^\n]s", &nama[i]);
    printf("Masukkan Kelas\t:\n");
    scanf(" %[^\n]s", &kel[i]);
    printf("Masukkan Nama Dosen\t:\n");
    scanf(" %[^\n]s", &dos[i]);
    int a;
    if (strlen(NIM[i]) == 10)
    {
        if (i == 0){
        printf("Date Pertama Berhasil Ditambah\n");
        }
        else{
            int q;
            for(q = 0; q < i; q++){
                //Checking Duplicate 
                if(strcmp(NIM[q], NIM[i]) == 0){
                    printf("Nim Anda Sudah Pernah Dibuat");
                    return 0;
                }
            }
            printf("Data Berhasil Ditambah");
            i += 1;
            return 0;
        }
    }
    //i nya itu data yaa
    else
    {
        printf("NIM mu kurang su");
    }
}
//masukkan fungsi kedua yakni read
int read()
{
    int unch, a = 1;
    if(i==0){
        printf("Data gaada su\n");
    }
    else{
        for(unch=0; unch < 1; unch++)
        {

            printf("NIM mu yekann Masa sich \t: %s\n");
            printf("Nama mu yekann Qaqa\t:\n");
            printf("Kelasmu yekann Asu\t:\n");
            printf("Dosenmu yekann blok\t:\n");
        }
        
    }
    if()
}

int delete(){
    
}

int exit(){
    printf("Terimakasih telah menggunakan program ini cok");
    return 0;
}
// DAFFA KUIMAK
// YAASIR KUONTOLL
// SALMAN BOOL EN
// FAIZ GAK TAU ADUS
HEH AKU KANGEN TESAA pingin nangis aku
OJOK DIOMONG AKU SHARE SCREEN 

arek e ndelok suu ws an mangkane pean tak dc kan @daffa akmal

tesa onk ndek room sebelah
sini noy sek"