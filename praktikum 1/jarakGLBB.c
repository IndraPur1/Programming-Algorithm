/*Nama file     : jarakGLBB.c*/
/*Deskripsi     : Menghitung jarak GLBB  */
/*Pembuat       : Indra Purwanto(24060123140150)*/
/*tanggal pembuatan : 28 februari 2024*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main(){
    /*Kamus*/
    float v0,t,a,s;

    /*Algoritma*/
    printf("Program menghitung jarak GLBB \n");
    printf("Masukan kecepatan awal \n");
    printf("vo = ");
    scanf("%f",&v0);
    printf("Masukan waktu \n");
    printf("t = ");
    scanf("%f",&t);
    printf("Masukan percepatan \n");
    printf("a = ");
    scanf("%f",&a);

    s = v0*t*(a*t*t)*0.5;
    printf("Jarak GLBB yang ditempuh adalah %.1f", s);

    return 0;
}