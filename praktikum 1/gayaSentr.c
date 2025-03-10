/*Nama file     : gayaSentr.c*/
/*Deskripsi     : menghitung gaya sentripetal*/
/*Pembuat       : Indra Purwanto(24060123140150)*/
/*tanggal pembuatan : 28 februari 2024*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main(){
    /*Kamus*/
    float m,F,v,r;
    
    /*Algoritma*/
    printf("Program menghitung gaya sentripetal \n");
    printf("Masukan massa : \n");
    printf("m = ");
    scanf("%f",&m);
    printf("Masukan kecepatan linier \n");
    printf("v = ");
    scanf("%f",&v);
    printf("Masukan jari-jari \n");
    printf("r = ");
    scanf("%f",&r);

    F = m*(v*v)/r;
    printf("gaya sentripetalnya adalah %.1f", F);

    return 0;
}