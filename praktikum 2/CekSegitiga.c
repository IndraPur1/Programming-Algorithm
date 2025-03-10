/*Nama file     : CekSegitiga.c*/
/*Deskripsi     : menentukan jenis segitiga dari sisi-sisinya*/
/*Pembuat       : Indra Purwanto(24060123140150)*/
/*tanggal pembuatan : 29 februari 2024*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main(){
    /*Kamus*/
    int a,b,c;

    /*Algoritma*/
    printf("Program menentukan jenis segitiga \n");
    printf("Masukan sisi pertama \n");
    scanf("%d", &a);
    printf("Masukan sisi kedua \n");
    scanf("%d", &b);
    printf("Masukan ketiga \n");
    scanf("%d", &c);

    if (a<=0 || b<=0 || c<=0) printf("Terdapat nilai yang bukan sisi segitiga \n");
    else if (a==b==c) printf("Segitiga Sama Sisi \n");
    else if (a==b || a==c || b==c) printf("Segitiga Sama Kaki \n");
    else if (a!=b!=c) printf("Segitiga Sembarang \n");
    
}


    