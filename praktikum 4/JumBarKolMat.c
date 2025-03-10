/*Nama file     : JumBarKolMat.c*/
/*Deskripsi     : menentukan 2 tabel masukan simetri atau tidak*/
/*Pembuat       : Indra Purwanto(24060123140150)*/
/*tanggal pembuatan : 24 maret 2024*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    //kamus
    int n,m,i,j,t;

    //algoritma
    printf("Program menjumlahkan semua elemen matriks \n");
    printf("masukan jumlah baris matriks : ");
    scanf("%d", &n);
    printf("masukan jumlah kolom matriks : ");
    scanf("%d", &m);

    int arr[n][m];
    for(i = 0; i<n; i++){
        for(j=0; j<m; j++){
            printf("masukan elemen baris %d dan kolom %d: ", i+1, j+1);
            scanf("%d", &arr[i][j]);
        }
    }
    for(i=0; i<n; i++){
        t=0;
        for(j=0; j<n; j++){
            t += arr[i][j];
        }
    printf("Jumlah Baris ke %d adalah %d \n", i+1, t);
    }

    for(i=0; i<m; i++){
        t=0;
        for(j=0; j<m; j++){
            t += arr[j][i];
        }
    printf("Jumlah Kolom ke %d adalah %d \n", j+1, t);
    }
    return 0;

}