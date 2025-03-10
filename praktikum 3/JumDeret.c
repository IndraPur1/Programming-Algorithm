/*Nama file     : JumDeret.c*/
/*Deskripsi     : menghitung jumlah total deret bilangan masukan */
/*Pembuat       : Indra Purwanto(24060123140150)*/
/*tanggal pembuatan : 7 maret 2024*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main(){
    /*Kamus*/
    int n,i,total;

    /*Algoritma*/
    printf("Program Menjumlahkan Total Deret Bilangan \n");
    printf("Masukan Bilangan : ");
    scanf("%d",&n);
    if(n<0){
        printf("Masukan Bilangan tidak tepat");
    }
    else{
        for(i=1; i<=n; i++){
        total = total + i;
        }
        printf("Total Deret Bilangannya adalah %d", total);
    }
    
    return 0;
}    