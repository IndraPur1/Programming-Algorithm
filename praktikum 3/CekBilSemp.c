/*Nama file     : CekBilSemp.c*/
/*Deskripsi     : menentukan bilangan sempurna */
/*Pembuat       : Indra Purwanto(24060123140150)*/
/*tanggal pembuatan : 7 maret 2024*/

#include <stdio.h> /*header file*/
#include <stdlib.h>
/*Program Utama*/
int main(){
    /*Kamus*/
    int n,i,s;

    /*Algoritma*/
    printf("Program Menentukan Suatu Bilangan Sempurna \n");
    printf("Masukan Bilangan : ");
    scanf("%d",&n);
    for(i=1; i<n; i++){
        if(n % i == 0){
            s = s + i;
        }
        else{
            continue;
        }
    }
    if(s==n){
        printf("Bilangan Sempurna");
    }
    else{
        printf("Bukan Bilangan Sempurna");
    }
    return 0;
}