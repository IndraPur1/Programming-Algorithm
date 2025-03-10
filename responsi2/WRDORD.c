#include <stdio.h>
#include <stdlib.h>

void MINSORT(int T[], int N) {
    int i, Pass, Temp, IMin;
    for (Pass = 0; Pass < N - 1; Pass++) {
        IMin = Pass;
        for (i = Pass + 1; i < N; i++) {
            if (T[i] < T[IMin]) {
                IMin = i;
            }
        }
        Temp = T[IMin];
        T[IMin] = T[Pass];
        T[Pass] = Temp;
    }
}
void balik(int T[], int mulai, int akhir) {
    while (mulai < akhir) {
        int temp = T[mulai];
        T[mulai] = T[akhir];
        T[akhir] = temp;
        mulai++;
        akhir--;
    }
}
void Tabel(int T[], int N) {
    for (int i = 0; i < N; i++) {
        printf("%d ", T[i]);
    }
    printf("\n");
}
int main() {
    int n;
    scanf("%d", &n);

    int T[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &T[i]);
    }
    MINSORT(T, n);
    int tengah = (n + 1) / 2; 
    int baris1[tengah], baris2[n - tengah];

    for (int i = 0, j = 0, k = 0; i < n; i++) {
        if (i % 2 == 0) {
            baris1[j++] = T[i];
        } else {
            baris2[k++] = T[i];
        }
    }
    balik(baris2, 0, n - tengah - 1);
    for (int i = 0, j = 0, k = 0; i < n; i++) {
        if (i % 2 == 0) {
            printf("%d ", baris1[j++]);
        } else {
            printf("%d ", baris2[k++]);
        }
    }
    printf("\n");
    return 0;
}