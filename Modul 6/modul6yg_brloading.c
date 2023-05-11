#include <stdio.h>
#include <string.h>
#include <time.h>

char nama[100], blkg[100], nim[100], kel[100];
int main()
{
    int menu;
    system("cls");
    printf("Now Loading");
    Sleep(1000);
    printf(". ");
    Sleep(1000);
    printf(". ");
    Sleep(1000);
    printf(". ");
    Sleep(1000);
    printf(". ");
    Sleep(1000);
    printf(". ");
ulang:
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
    switch (menu)
    {
    case 1:
        create();
        break;
    case 2:
        show();
        break;
    case 3:
        update();
        break;
    case 4:
        delete ();
        break;
    case 5:
        search();
        break;
    case 6:
        printf("Terimakasih telah memrogram...");
        return 0;
        break;
    default:
        break;
    }
    goto ulang;

    return 0;
}
int create()
{
    int a;
    FILE *create, *show;
    create = fopen("data.txt", "a");
    show = fopen("data.txt", "r");
    printf("Masukkan NIM :");
    scanf("%s", &nim);
    strupr(nim);
    if (nim[0] > 64 && nim[1] > 64)
    {
        for (a = 2; a < strlen(nim); a++)
        {
            if ((int)nim[a] > 47)
            {
                if ((int)nim[a] <= 58)
                {
                }
                else
                {
                    printf("Terdapat karakter dalam inputanmu");
                    return 0;
                }
            }
            else
            {
                printf("Terdapat karakter dalam inputanmu");
                return 0;
            }
        }
    }
    else
    {
        printf("2 karakter NIM awal harus A-Z");
        return 0;
    }
    char i[100];
    while (!feof(show))
    {
        fscanf(show, "%[^|]|%*[^|]|%*[^|]|%*[^|]|\n", i);
        if (strcmp(nim, i) == 0)
        {
            printf("NIM anda sudah ada\n\n");
            return 0;
        }
    }
    printf("Masukkan Nama depan :");
    scanf(" %[^\n]s", &nama);
    printf("Masukkan Nama belakang :");
    scanf(" %[^\n]s", &blkg);
    printf("Masukkan Kelas anda :");
    scanf(" %[^\n]s", &kel);
    strupr(kel);
    fprintf(create, "%s|%s|%s|%s|\n", nim, nama, blkg, kel);
    fclose(create);
    fclose(show);
}

int show()
{
    FILE *show;
    show = fopen("data.txt", "r");
    while (!feof(show))
    {
        fscanf(show, "%[^|]|%[^|]|%[^|]|%[^|]|\n", nim, nama, blkg, kel);
        printf("NIM anda\t\t: %s\n", nim);
        printf("Nama depan anda\t\t: %s\n", nama);
        printf("Nama belakang anda\t: %s\n", blkg);
        printf("Kelas anda\t\t: %s\n\n", kel);
    }
    fclose(show);
}

int search()
{
    char b[100];
    FILE *cari;
    cari = fopen("data.txt", "r");
    printf("Masukkan NIM yang anda cari :");
    scanf("%s", &b);
    while (!feof(cari))
    {
        fscanf(cari, "%[^|]|%[^|]|%[^|]|%[^|]|\n", nim, nama, blkg, kel);
        if (strcmp(nim, b) == 0)
        {
            printf("Data ditemukan :\n");
            printf("NIM anda\t\t: %s\n", nim);
            printf("Nama depan anda\t\t: %s\n", nama);
            printf("Nama belakang anda\t: %s\n", blkg);
            printf("Kelas anda\t\t: %s\n\n", kel);
            fclose(cari);
            return 0;
        }
    }
    printf("Data anda tidak ditemukan, silahkan input lagi\n");
    fclose(cari);
    return search();
}

int update()
{
    char c[100];
    FILE *update, *show;
    show = fopen("data.txt", "r");
    update = fopen("input.txt", "w");
    printf("Masukkan NIM yang akan anda update :");
    scanf("%s", &c);
    while (!feof(show))
    {
        fscanf(show, "%[^|]|%[^|]|%[^|]|%[^|]|\n", nim, nama, blkg, kel);
        if (strcmp(nim, c) == 0)
        {
            printf("Ubah Nama depan\t\t:");
            scanf(" %[^\n]s", &nama);
            printf("Ubah Nama belakang\t:");
            scanf(" %[^\n]s", &blkg);
            printf("Ubah Kelas anda\t\t:");
            scanf(" %[^\n]s", &kel);
            fprintf(update, "%s|%s|%s|%s|\n", nim, nama, blkg, kel);
        }
        else
        {
            fprintf(update, "%s|%s|%s|%s|\n", nim, nama, blkg, kel);
        }
    }
    fclose(update);
    fclose(show);
    remove("data.txt");
    rename("input.txt", "data.txt");
}

int delete ()
{
    char c[100];
    FILE *delete, *show;
    show = fopen("data.txt", "r");
    delete = fopen("input.txt", "w");
    printf("Masukkan NIM yang akan anda update :");
    scanf("%s", &c);
    while (!feof(show))
    {
        fscanf(show, "%[^|]|%[^|]|%[^|]|%[^|]|\n", nim, nama, blkg, kel);
        if (strcmp(nim, c) == 0)
        {
        }
        else
        {
            fprintf(delete, "%s|%s|%s|%s|\n", nim, nama, blkg, kel);
        }
    }
    fclose(delete);
    fclose(show);
    remove("data.txt");
    rename("input.txt", "data.txt");
}
