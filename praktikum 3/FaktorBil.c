/*Nama file     : FaktorBill.c*/
/*Deskripsi     : mencari bilangan faktor dari bilangan masukan */
/*Pembuat       : Indra Purwanto(24060123140150)*/
/*tanggal pembuatan : 7 maret 2024*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main(){
    /*Kamus*/
    int n,i;

    /*Algoritma*/
    printf("Program Menentukan Faktor dari Suatu Bilangan \n");
    printf("Masukan Bilangan : ");
    scanf("%d",&n);
    printf("Faktor Bilangannya adalah ");
    for(i=1; i<=n; i++){
        if(n % i == 0){
            printf("%d  ", i);
        }
    }
    return 0;
}