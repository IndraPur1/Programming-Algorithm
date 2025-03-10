/*Nama file     : CekBilPrima.c*/
/*Deskripsi     : menentukan bilangan prima */
/*Pembuat       : Indra Purwanto(24060123140150)*/
/*tanggal pembuatan : 7 maret 2024*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main(){
    /*Kamus*/
    int n,i,p;

    /*Algoritma*/
    printf("Program Menentukan suatu Bilangan Prima \n");
    printf("Masukan Bilangan : ");
    scanf("%d", &n);
    if(n==2){
        printf("Bilangan Prima");
    }
    else{
        for(i=1; i<=n; i++){
            if(n % i == 0){
                p++;
            }
            else{
                continue;
            }
        }
    }
    if(p==2){
        printf("Bilangan Prima");
    }
    else{
        printf("Bukan Bilangan Prima");
    }
    return 0;
}