/*Nama file     : volBolaKerct.c*/
/*Deskripsi     : Menghitung volume bola dan volume kerucut yang mempunyai jari jari sama*/
/*Pembuat       : Indra Purwanto(24060123140150)*/
/*tanggal pembuatan : 28 februari 2024*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main(){
    /*Kamus*/
    float r,Vb,Vk;
    const float phi = 3.14;

    /*Algoritma*/
    printf("Program Menghitung Gaya Sentripetal \n");
    printf("Masukan Jari-Jari \n");
    printf("r = ");
    scanf("%f",&r);

    Vb = (4/3)*(phi*r*r*r);

    Vk = 0.5*Vb ;

    printf("Besar Volume Bola adalah %.2f \n", Vb);
    printf("Besar Volume Kerucut adalah %.2f \n", Vk);



}