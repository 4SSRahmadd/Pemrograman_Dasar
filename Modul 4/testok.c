#include<stdio.h>

int main()
{
    int small, big;
    int value2[2][2];
    int value3[3][3];
    int i, j;
    char k;


	printf("Namaku Kante minta tolong dong :");
	scanf(" %s", &k);

	printf("pilih ordo 2x2 / 3x3");
	scanf(" %c", &k);
		
    printf("Masukkan angka dalam Matrix");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("\nMasukkan angka pada index [%d][%d]: ", i, j);
            scanf("%d", &value2[i][j]);
        }
    }
    small = value2[0][0];
    big = value2[0][0];

    printf("\nHasilnya adalah ");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d", value2[i][j]);
            if (value2[i][j] > big){
                big = value2[i][j];
            }
            if (value2[i][j] < small){
                small = value2[i][j];
            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\nMasukkan angka pada index [%d][%d]: ", i, j);
            scanf("%d", &value3[i][j]);
        }
    }
    small = value3[0][0];
    big = value3[0][0];

    printf("\nHasilnya adalah ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d", value3[i][j]);
            if (value3[i][j] > big){
                big = value3[i][j];
            }
            if (value3[i][j] < small){
                small = value3[i][j];
            }
        }
    }
    printf("\nsmall : %d", small);
    printf("\nbig: %d", big);
}

