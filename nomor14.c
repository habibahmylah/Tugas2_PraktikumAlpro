// Nama File : HargaDiskon.c
// Deskripsi : menghitung besarnya harga setelah diberikan diskon
// Nama : Habibah Mylah Dalilah
// NIM : 24060121120028
// Kelas : Informatika B

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //kamus
    int a;
    float d,B;
    char j;

    //algoritma
    printf("Harga barang setelah di diskon\n");
    printf("harga awal barang : \n");
    scanf("%d", &a);
    printf("Jenis Diskon : \n");
    scanf("%s", &j);

    switch(j){
    case 'A' :
        d = 0.1;
        B = a - (a * d);
        printf("Harga barang dengan tipe diskon A adalah %.2f", B);
        break;
    case 'B' :
        d = 0.15;
        B = a - (a * d);
        printf("Harga barang dengan tipe diskon B adalah %.2f", B);
        break;
    case 'C' :
        d = 0.2;
        B = a - (a * d);
        printf("Harga barang dengan tipe diskon C adalah %.2f", B);
        break;
    default :
        printf("Diskon tidak tersedia");
    }
    return 0;
}
