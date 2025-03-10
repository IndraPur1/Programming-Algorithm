#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

// Fungsi untuk menghitung faktorial
int faktorial(int n) {
    int hasil = 1;
    for (int i = 1; i <= n; i++) {
        hasil *= i;
        hasil %= 1009; // Modulo dengan 1009
    }
    return hasil;
}

int main() {
    int A, B;
    printf("Masukkan nilai A dan B: ");
    scanf("%d %d", &A, &B);

    // Menghitung A+(B faktorial)
    int hasil = A + faktorial(B);
    hasil %= 1009; // Modulo dengan 1009

    printf("Hasil: %d\n", hasil);
    return 0;
}