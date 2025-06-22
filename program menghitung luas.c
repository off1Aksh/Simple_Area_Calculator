#include <stdio.h>
#define PI 3.14

int main()
{
    int pil;
    float panjang, lebar, hasil;
    printf("Program Menghitung Luas\n\n");
    printf("Luas Apa Yang Ingin Anda Hitung :\n");
    printf("1. Persegi Panjang\n2. Segi Empat\n3. Segi Tiga\n4. Lingkaran\n");
    printf("Masukkan Pilihan Anda : ");
    scanf("%d", &pil);

    if (pil == 1)
    {
        printf("Luas Persegi Panjang\n");
        printf("Masukkan Panjang = ");
        scanf("%f", &panjang);
        printf("Masukkan Lebar = ");
        scanf("%f", &lebar);
        hasil = panjang * lebar;
        printf("Luas Segi Empat Tersebut Adalah = %.2f", hasil);
    }else if (pil == 2)
    {
        printf("Luas Segi Empat\n");
        printf("Masukkan Sisi = ");
        scanf("%f", &panjang);
        hasil = panjang * panjang;
        printf("Luas Segi Empat Tersebut Adalah = %.2f", hasil);
    }else if (pil == 3)
    {
        printf("Luas Segi Tiga\n");
        printf("Masukkan Alas = ");
        scanf("%f", &lebar);
        printf("Masukkan Tinggi = ");
        scanf("%f", &panjang);
        hasil = (lebar * panjang)/2;
        printf("Luas Segitiga Tersebut Adalah = %.2f", hasil);
    }else if(pil == 4)
    {
        printf("Luas Lingkaran\n");
        printf("Masukkan Jari-Jari = ");
        scanf("%f", &panjang);
        hasil = PI * panjang * panjang;
        printf("Luas Lingkaran Tersebut Adalah = %.2f", hasil);
    }else
    {
        printf("\tERROR");
    }
}
