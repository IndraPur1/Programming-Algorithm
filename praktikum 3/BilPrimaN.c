/*Nama file     : BilPrimaN.c*/
/*Deskripsi     : menentukan bilangan prima */
/*Pembuat       : Indra Purwanto(24060123140150)*/
/*tanggal pembuatan : 7 maret 2024*/

#include <stdio.h> /*header file*/
#include <stdlib.h>
/*Program Utama*/
int main(){
    /*Kamus*/
    int n,i,p;

    /*Algoritma*/
    printf("Program Menentukan Bilangan Prima dari N \n");
    printf("Masukan Bilangan : ");
    scanf("%d", &n);
    printf("Bilangan Primanya ");
    for(i=1; i<=n; i++){
        if(i==2){
            printf("%d", i);
        }
        else{
            for(p=2; p<i; p++){
                if(i % p == 0){
                    break;
                }
                else if(p == i - 1){
                    printf(", %d", i);
                }
            }
        }
    }
    return 0;

}