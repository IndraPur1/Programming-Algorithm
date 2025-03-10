/*Nama file     : bilInteger.c*/
/*Deskripsi     : menentukan jenis bilangan bulat */
/*Pembuat       : Indra Purwanto(24060123140150)*/
/*tanggal pembuatan : 29 februari 2024*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main(){
    /*Kamus*/
    int n;

    /*Algoritma*/
    printf("Program menentukan jenis bilangan bulat \n");
    printf("Masukan angka ");
    scanf("%d",&n);
    
    if (n > 0) printf("Bilangan tersebut adalah Bulat Positif \n");
    else if (n < 0) printf("Bilangan tersebut adalah Bulat Negatif \n");
    else printf("Nol \n");
    
    return 0;
}