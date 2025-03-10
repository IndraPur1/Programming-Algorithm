/*Nama file     : FrekNilTabel.c*/
/*Deskripsi     : menjumlahkan nilai yang muncul lebih dari satu kali*/
/*Pembuat       : Indra Purwanto(24060123140150)*/
/*tanggal pembuatan : 24 maret 2024*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main(){
    /*Kamus*/
     int n,i,m,t;
     int h=0;

    /*Algoritma*/
    printf("Program Menjumlahkan Nilai Yang Muncul Lebih Dari Satu Kali \n");
    printf("Masukan Jumlah Elemen Tabel : ");
    scanf("%d", &n);
    printf("Masukan Nilai Elemen Tabel : ");
    int arr[n];

    for(i=0; i<n; i++ ){
        scanf("%d", &arr[i]);
    }

    printf("Jumlah Nilai yang sama adalah ");
    for(i=0; i<n; i++){
        t = 0;
        for(m=0; m<n; m++){
            if(arr[i]==arr[m]){
                t++;
            }
        }
        if(t > 1){
            h += arr[i];
        }
    }
    printf("%d", h);
}