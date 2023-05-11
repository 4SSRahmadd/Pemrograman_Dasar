// buatlah sistem CRUD dengan menampilkan create, show, update, delete dan search(opsional).
#include <stdio.h>
#include <string.h>

int i, j, a = 0, pick, menu = 0;
char c[20], nama['0'][20], blkg['0'][20], nim['0'][18], kel['0'][20];

FILE *Data;
int create()
{
kembali:
    Data = fopen("create.txt", "a");
    printf("Masukkan Nama depan anda\t:");
    scanf(" %[^\n]s", nama[a]);
    printf("Masukkan Nama belakang anda\t:");
    scanf(" %[^\n]s", blkg[a]);
    printf("Masukkan NIM anda\t\t:");
    scanf(" %[^\n]s", nim[a]);
    printf("Masukkan Kelas anda\t\t:");
    scanf(" %[^\n]s", kel[a]);
    if (strlen(nim[a]) == 17)
    {
        if (a == 0)
        {
            printf("\nData Anda Berhasil Ditambah Awal\n");
            printf("---------------------------------------\n\n");
            fprintf(Data, "\n-Nama depan :%s-Nama belakang : %s-NIM : %s-Kelas : %s", nama[a], blkg[a], nim[a], kel[a]);
            fclose(Data);
            a += 1;
        }
        else
        {
            for (i = 0; i < a; i++)
            {
                if (strcmp(nim[i], nim[a]))
                {
                    printf("\nData Anda Berhasil Ditambah\n");
                    printf("---------------------------------------\n\n");
                    fprintf(Data, "\n-Nama depan :%s-Nama belakang : %s-NIM : %s-Kelas : %s", nama[a], blkg[a], nim[a], kel[a]);
                    fclose(Data);
                    a += 1;
                    return 0;
                }
                else
                {
                    printf("\nNim Yang Anda Tambah Sudah Tersedia, Mohon Input NIM Lain\n\n");
                    goto kembali;
                }
            }
        }
    }
    else
    {
        printf("\nNim Anda Kurang Atau Lebih Dari 17, Tolong Masukan Kembali\n\n");
        goto kembali;
    }
}
int show()
{
    Data = fopen("create.txt", "r");
    if (a == 0)
    {
        printf("anda belum input data\n");
    }
    else
    {
        i = 0;
        while (i < a)
        {
            printf("%d.Nama depan      : %s\n", i + 1, nama[i]);
            printf("%d.Nama belakang   : %s\n", i + 1, blkg[i]);
            printf("  NIM              : %s\n", nim[i]);
            printf("  Kelas            : %s\n", kel[i]);
            printf("----------------------------\n");
            i++;
            fprintf(Data, "-Nama depan :%s\n-Nama belakang : %s\n-NIM : %s\n-Kelas : %s\n", nama[i], blkg[i], nim[i], kel[i]);
        }
        fscanf(Data, "%s", nama[a], blkg[a], nim[a], kel[a]);
        fclose(Data);
    }
}
int update()
{
    Data = fopen("create.txt", "w");
    char update[20];
    printf("Masukkan NIM yang ingin di update : ");
    scanf("%s", &update);
    for (i = 0; i < a; i++)
    {
        if (strcmp(nim[i], update) == 0)
        {
            printf("Data yang anda cari ditemukan\n");
            printf("%d.Nama depan      :", i + 1);
            scanf(" %[^\n]s", &nama[i]);
            printf("%d.Nama belakang   :", i + 1);
            scanf(" %[^\n]s", &blkg[i]);
            printf("  Kelas            :");
            scanf(" %[^\n]s", &kel[1]);
            printf("\nData anda telah diupdate\n");
            return 0;
        }
    }
    printf("Data yang anda cari tidak ditemukan\n\n");
    fprintf(Data, "-Nama depan :%s\n-Nama belakang : %s\n-NIM : %s\n-Kelas : %s\n", nama[i], blkg[i], nim[i], kel[i]);
    fclose(Data);
}

int del()
{
    Data = fopen("create.txt", "w");
    printf("masukkan nim yang ingin di delete : ");
    scanf("%s", c);
    i = 1;
    j = 0;
    while (i <= a && j == 0)
    {
        if (strcmp(c, nim[i]) == 0)
        {
            j++;
        }
        i++;
    }
    if (j < 1)
    {
        printf("data yang akan anda delete mungkin tidak ada\n\n");
    }
    else
    {
        i--;
        printf("data %s berhasil di delete\n\n", nama[i]);
        while (i <= a)
        {
            strcpy(nama[i], nama[i + 1]);
            strcpy(blkg[i], blkg[i + 1]);
            strcpy(nim[i], nim[i + 1]);
            strcpy(kel[i], kel[i + 1]);
            i++;
        }
        a--;
    }
    fprintf(Data, "-Nama depan :%s\n-Nama belakang : %s\n-NIM : %s\n-Kelas : %s\n", nama[i], blkg[i], nim[i], kel[i]);
    fclose(Data);
}
int search()
{
    Data = fopen("create.txt", "r");
    char search[20];
    printf("Masukkan NIM yang ingin di search : ");
    scanf("%s", &search);
    for (i = 0; i < a; i++)
    {
        if (strcmp(nim[i], search) == 0)
        {
            printf("Data yang anda cari ditemukan\n");
            printf("%d.Nama depan      : %s\n", i + 1, nama[i]);
            printf("%d.Nama belakang   : %s\n", i + 1, blkg[i]);
            printf("  NIM              : %s\n", nim[i]);
            printf("  Kelas            : %s\n", kel[i]);
            printf("----------------------------\n");
            return 0;
        }
    }
    printf("Data yang anda cari tidak ditemukan\n\n");
    fprintf(Data, "-Nama depan :%s\n-Nama belakang : %s\n-NIM : %s\n-Kelas : %s\n", nama[i], blkg[i], nim[i], kel[i]);
    fclose(Data);
}
int main()
{
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

        if (menu == 1)
        {
            create();
        }
        else if (menu == 2)
        {
            show();
        }
        else if (menu == 3)
        {
            update();
        }
        else if (menu == 4)
        {
            del();
        }
        else if (menu == 5)
        {
            search();
        }
        else if (menu == 6)
        {
            printf("Terimakasih...");
        }
        else
        {
            printf("pilih menu yang tersedia");
        }

    } while (menu != 6);
    return 0;
}
