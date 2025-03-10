/*Nama file     : jarakPBola.c*/
/*Deskripsi     : menghitung jarak gerak parabola*/
/*Pembuat       : Indra Purwanto(24060123140150)*/
/*tanggal pembuatan : 28 februari 2024*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main(){
    /*Kamus*/
    float v0,t,y;
    const float g = 9.8;

    /*Algoritma*/
    printf("Program menghitung jarak Gerak Parabola \n");
    printf("Masukan Kecepatan Awal \n");
    printf("v0 = ");
    scanf("%f",&v0);
    printf("Masukan Waktu \n");
    printf("t = ");
    scanf("%f",&t);
    
    y = (v0*t)-0.5*(g*t*t);
    printf("Jarak Gerak Parabolanya adalah %.2f", y);

    return 0;
}