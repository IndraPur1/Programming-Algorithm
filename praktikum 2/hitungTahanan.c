/*Nama file     : namaBulan.c*/
/*Deskripsi     : menghitung total tahanan */
/*Pembuat       : Indra Purwanto(24060123140150)*/
/*tanggal pembuatan : 29 februari 2024*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main(){
    /*Kamus*/
    int a,b,c,t;

    /*Algoritma*/
    printf("Program menghitung jummlah tahanan \n");
    printf("Masukan tahanan \n");
    scanf("%d", &a);
    printf("Masukan tahanan \n");
    scanf("%d", &b);
    printf("Masukan tahanan \n");
    scanf("%d", &c);
    
    t = a+b+c;
    if(a,b,c > 0) printf("Total tahanan adalah %d",t);
    else printf("Masukan tahanan tidak boleh negatif \n");
    
    return 0;
}