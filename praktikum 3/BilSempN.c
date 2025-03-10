/*Nama file     : BilSempN.c*/
/*Deskripsi     : menentukan bilangan sempurna */
/*Pembuat       : Indra Purwanto(24060123140150)*/
/*tanggal pembuatan : 7 maret 2024*/

#include <stdio.h> /*header file*/
#include <stdlib.h>
/*Program Utama*/
int main(){
    /*kamus*/
    int n,i,s,t;

    /*algortima*/
    printf("Program Menentukan Bilangan Sempurna dari N \n");
    printf("Masukan Bilangan : ");
    scanf("%d", &n);
    if(n<6){
        printf("Bukan Bilangan Sempurna");
    }
    else {
        for (i = 6 ; i < n ; i++){
            s = 0;
            for (t = 1 ; t<i ; t++){
                if(i%t==0){
                    s = s + t;
                }
            }
            if (s == i){
                printf("%d ", i);
            }
        }
    }
    return 0;
}