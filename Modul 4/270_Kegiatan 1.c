#include<stdio.h>

/*soal
Boruto meminta spesifikasi jika nilai boruto lebih tinggi, maka berikan nilai 1 sebagai penanda.
jika sarada lebih tinggi atau imbang, maka berikan nilai 0 sebagai penanda. Dari spesifikasi
tersebut, anda analisis dan buatlahlah program yang sesuai kebutuhan Boruto.
*/

int main()
{
    int boruto[3];
    int sarada [3];
    int b, s;
    

    printf("\n1. Nilai Ujian Boruto\n");
    for (b = 0; b < 3; b++)
    {
        printf("\nNilai Boruto : ");
        scanf("%d", &boruto[b]);
    }
    printf("\n2. Nilai Ujian Sarada\n");
    for (s = 0; s < 3; s++)
    {
        printf("\nNilai Sarada : ");
        scanf("%d", &sarada[s]);
    }
    printf("\nHasil Perbandingan Nilai Boruto dan Sarada");
    for (b = 0; b < 3; b++)
    {
        if (boruto[b] > sarada[b])
        { printf("\n1");
        
        }
        else
        {
        printf("\n0");
        }
    }
    return 0;
}