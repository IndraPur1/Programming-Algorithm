#include <stdio.h> /*header file*/
#include <stdlib.h>
/*Program Utama*/
/* Fungsi untuk membandingkan dua integer untuk qsort */
int bandingkan(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

/* Fungsi utama */
int main() {
    int a, b;

    /* Baca panjang kedua array */
    scanf("%d %d", &a, &b);

    int arr1[a];
    int arr2[b];

    /* Baca elemen-elemen dari array 1 */
    for(int i = 0; i < a; i++) {
        scanf("%d", &arr1[i]);
    }

    /* Baca elemen-elemen dari array 2 */
    for(int i = 0; i < b; i++) {
        scanf("%d", &arr2[i]);
    }

    /* Urutkan kedua array untuk menggunakan pencarian biner atau teknik serupa */
    qsort(arr1, a, sizeof(int), bandingkan);
    qsort(arr2, b, sizeof(int), bandingkan);

    int hilang[a];  // Array untuk menyimpan elemen yang hilang
    int jumlahHilang = 0;

    /* Teknik dua pointer untuk menemukan elemen yang hilang */
    int i = 0, j = 0;
    while (i < a && j < b) {
        if (arr1[i] < arr2[j]) {
            hilang[jumlahHilang++] = arr1[i++];
        } else if (arr1[i] > arr2[j]) {
            j++;
        } else {
            i++;
            j++;
        }
    }

    /* Jika ada elemen yang tersisa di arr1 yang belum cocok */
    while (i < a) {
        hilang[jumlahHilang++] = arr1[i++];
    }

    /* Cetak elemen yang hilang */
    for (int k = 0; k < jumlahHilang; k++) {
        if (k > 0) {
            printf(" ");
        }
        printf("%d", hilang[k]);
    }

    return 0;
}