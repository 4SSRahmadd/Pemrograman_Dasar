#include<stdio.h>

/*Suatu hari Kante ingin mengetahui angka terkecil dan terbesar dari suatu matriks. Matriks
tersebut memiliki ordo (n x n). n merupakan sebuah bilangan yang bernilai 2 dan 3. Kante
meminta bantuanmu untuk mencari angka terkecil dan terbesar yang dihasilkan oleh matriks
masukan pengguna. Sebagai programmer tugas anda membuat sebuah program untuk
mencari angka terkecil dan terbesar pada matriks sesuai yang diinginkan oleh Kante seperti
gambar di bawah ini :
*/
int main()
{
    int smallest, biggest;
    int value2[2][2];
    int value3[3][3];
    int i, j, k;
    
//i = baris, j = kolom, k = perulangan

	printf("Namaku Kante hendak meminta tolong :\n");
	printf("1. Ordo 2x2 \n");
	printf("2. Ordo 3x3 \n");
	printf("Pilihlah salah satu ordo diatas :\n");
	scanf("%d", &k);
	
	switch (k){
		case 1 :  
	printf("Kante, kamu memilih ordo 2");	   
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("\nMasukkan angka pada index [%d][%d]: ", i, j);
            scanf("%d", &value2[i][j]);
        }
    }
    smallest = value2[0][0];
    biggest = value2[0][0];

    printf("\nHasilnya adalah \n");
    for (i = 0; i < 2; i++)
    {
    for (j = 0; j < 2; j++)
        {
    printf("%d\t", value2[i][j]);
    if (value2[i][j] > biggest){
     biggest = value2[i][j];
     }
    if (value2[i][j] < smallest){
     smallest = value2[i][j];
     }
	} printf("\n");
	
    }break;
    
	case 2 :
	printf("Kante, kamu memilih ordo 3");
	for (i = 0; i < 3; i++)
    {
    for (j = 0; j < 3; j++)
        {
            printf("\nMasukkan angka pada index [%d][%d]: ", i, j);
            scanf("%d", &value3[i][j]);
        }
    }
    smallest = value3[0][0];
    biggest = value3[0][0];

    printf("\nHasilnya adalah\n ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", value3[i][j]);
            if (value3[i][j] > biggest){
                biggest = value3[i][j];
            }
            if (value3[i][j] < smallest){
                smallest = value3[i][j];
            }
        } 
        printf("\n");
    } 
    break;
	}
    
    
    printf("\nsmallest : %d", smallest);
    printf("\nbiggest : %d", biggest);

return 0;}

