/*Nama file     : luasKellLayang.c*/
/*Deskripsi     : menghitung luas dan keliling layang layang*/
/*Pembuat       : Indra Purwanto(24060123140150)*/
/*tanggal pembuatan : 28 februari 2024*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main(){
    /*Kamus*/
    float s1,s2,d1,d2,L,K;

    /*Algoritma*/
    printf("Program menghitung keliling dan luas layang-layang \n");
    printf("Masukan sisi satu \n");
    printf("s1 = ");
    scanf("%f",&s1);
    printf("Masukan sisi dua \n");
    printf("s2 = ");
    scanf("%f",&s2);
    printf("Masukan diagonal 1 \n");
    printf("d1 = ");
    scanf("%f",&d1);
    printf("Masukan diagonal 2 \n");
    printf("d2 = ");
    scanf("%f",&d2);

    L = 0.5*d1*d2;

    K = 2*(s1+s2);

    printf("Luas layang-layangnya adalah %.1f \n",L);
    printf("Keliling layang-layangnya adalah %.1f \n",K);


    return 0;
}