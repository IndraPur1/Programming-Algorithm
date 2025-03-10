/*Nama file     : SimetriTabel.c*/
/*Deskripsi     : menentukan 2 tabel masukan simetri atau tidak*/
/*Pembuat       : Indra Purwanto(24060123140150)*/
/*tanggal pembuatan : 24 maret 2024*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    //kamus
    int m,n,i,j;

    //algoritma
    printf("Program Menentukan 2 Tabel Simetri atau tidak \n");
    printf("masukan jumlah elemen tabel 1 : ");
    scanf("%d", &n);
    printf("masukan elemen tabel 1 : ");
    int arr1[n];

    for(i = 0; i<n; i++){
        scanf("%d", &arr1[i]);
    }

    printf("masukan jumlah elemen tabel 2 : ");
    scanf("%d", &m);
    printf("masukan elemen tabel 2 : ");
    int arr2[m];

    for (j = 0; j<m; j++){
        scanf("%d", &arr2[j]);
    }

    if (m==n){
        for(i = 0; i<m; i++){
            if (arr1[i] == arr2[i]){
                if (i == m-1){
                    printf("kedua tabel simetri");
                }
            }
            else{
                printf("kedua tabel tidak simetris");
                break;
            }
        }
    }
    else {
        printf("kedua tabel tidak simetris");
    }
    return 0;

}