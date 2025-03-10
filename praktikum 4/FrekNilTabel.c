/*Nama file     : FrekNilTabel.c*/
/*Deskripsi     : menentukan nilai yang muncul lebih dari satu kali*/
/*Pembuat       : Indra Purwanto(24060123140150)*/
/*tanggal pembuatan : 24 maret 2024*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main(){
    /*Kamus*/
     int n,i,m,k,t;

    /*Algoritma*/
    printf("Program Mencari Nilai Yang Muncul Lebih Dari Satu Kali \n");
    printf("Masukan Jumlah Elemen Tabel : ");
    scanf("%d", &n);
    printf("Masukan Nilai Elemen Tabel : ");
    int arr[n];

    for(i=0; i<n; i++ ){
        scanf("%d", &arr[i]);
    }

    printf("Nilai yang Muncul lebih dari satu kali : ");
    for(i=0; i<n; i++){
        t = 0;
        for(m=i+1; m<n; m++){
            if(arr[i]==arr[m]){
                t++;
                for(k = i+1; k<n; k++){
                    if(arr[i]==arr[k]){
                        arr[k]=0;
                    }
                }
            }
        }
        if(t != 0 && arr[i] != 0){
            printf("%d ", arr[i]);
        }
    }
    return 0;
}