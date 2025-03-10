/*Nama file     : namaHari.c*/
/*Deskripsi     : menentukan nama hari dari angka 1-7 */
/*Pembuat       : Indra Purwanto(24060123140150)*/
/*tanggal pembuatan : 29 februari 2024*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main(){
    /*Kamus*/
    int n;

    /*Algoritma*/
    printf("Program menentukan nama hari dari angka 1-7 \n");
    printf("Masukan angka \n");
    scanf("%d", &n);

    if(n==7) printf("Hari Mingggu");
    else if(n==6) printf("Hari Saptu");
    else if(n==5) printf("Hari Jumat");
    else if(n==4) printf("Hari Kamis");
    else if(n==3) printf("Hari Rabu");
    else if(n==2) printf("Hari Selasa");
    else if(n==1) printf("Hari Senin");
    else printf("Masukan nomoer hari tidak tepat \n");
    
    return 0;
}