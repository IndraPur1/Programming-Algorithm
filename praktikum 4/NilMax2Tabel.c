/*Nama file     : NilMax2Tabel.c*/
/*Deskripsi     : menentukan nilai terbesar kedua dari tabel */
/*Pembuat       : Indra Purwanto(24060123140150)*/
/*tanggal pembuatan : 23 maret 2024*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main(){
    /*Kamus*/
     int n,i;
     int max1 = 0;
     int max2 = 0;

    /*Algoritma*/
    printf("Program mencari Nilai Terbesar Kedua \n");
    printf("Masukan Jumlah Elemen Tabel : ");
    scanf("%d", &n);
    printf("Masukan Nilai Elemen Tabel : ");
    int arr[n];

    for(i=0; i< n; i++ ){
        scanf("%d", &arr[i]);
    }
    

    for(i=0; i<n; i++){
        if(arr[i] > max1){
            max2=max1;
            max1=arr[i];
        }
        else if(arr[i] > max2 && arr[i]!=max1){
                max2 = arr[i];
            }

        }

    printf("Nilai Terbesar Kedua adalah %d", max2);
    return 0;
}