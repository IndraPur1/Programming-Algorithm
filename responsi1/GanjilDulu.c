#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/*program Utama*/
int main(){
    /*Kamus*/
     int n,i,m;

    /*Algoritma*/
    printf("Program Mencari Nilai Ganjil \n");
    printf("Masukan Jumlah Elemen Tabel : ");
    scanf("%d", &n);
    printf("Masukan Nilai Elemen Tabel : ");
    int arr[n];

    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    for(i=0; i<n; i++){
        if(arr[i] % 2 != 0){
            printf("%d ", arr[i]);
        }
    }
    for(m=0; m<n; m++){
        if(arr[m] % 2 == 0){
            printf("%d ", arr[m]);
        }
    }
            
    return 0;
}