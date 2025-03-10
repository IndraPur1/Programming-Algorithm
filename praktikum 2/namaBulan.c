/*Nama file     : namaBulan.c*/
/*Deskripsi     : menentukan nama bulan dari angka 1-12 */
/*Pembuat       : Indra Purwanto(24060123140150)*/
/*tanggal pembuatan : 29 februari 2024*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main(){
    /*Kamus*/
    int n;

    /*Algoritma*/
    printf("Program menentukan nama bulan dari angka 1-12 \n");
    printf("Masukan angka : ");
    scanf("%d", &n);

    if(n==12) printf("Bulan Desember");
    else if(n==11) printf("Bulan November");
    else if(n==10) printf("Bulan Oktber");
    else if(n==9) printf("Bulan September");
    else if(n==8) printf("Bulan Agustus");
    else if(n==7) printf("Bulan Juli");
    else if(n==6) printf("Bulan Juni");
    else if(n==5) printf("Bulan Mei");
    else if(n==4) printf("bulan April");
    else if(n==3) printf("Bulan Maret");
    else if(n==2) printf("Bulan Februari");
    else if(n==1) printf("Bulan Januari");
    else printf("Masukan nomoer bulan tidak tepat \n");
    
    return 0;
}