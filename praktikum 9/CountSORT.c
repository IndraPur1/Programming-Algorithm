#include <stdio.h>
#include <stdlib.h>

void countsort(int T[], int n, int valmin, int valmax){
    //kamus
    int i, j, k;
    int Tcount[valmax - valmin + 1];
    
    //Algoritma
    for(i = 0; i < valmax - valmin + 1; i++){
        Tcount[i] = 0;
    }

    for(i = 0; i < n; i++){
        Tcount[T[i] - valmin] = Tcount[T[i] - valmin] +1;
    }

    k = 0;
    for(i = 0; i < valmax - valmin + 1; i++){
        for(j = 0; j < Tcount[i]; j++){
            T[k] = i + valmin;
            k = k + 1;
        }
    }
}

int main(){
    int T[7] = {7, 1, 0, 5, 3, 5, 6};
    int n = 7;
    int valmin = 0;
    int valmax = 7;

    countsort(T, n, valmin, valmax);

    for(int i = 0; i < n; i++){
        printf("%d ", T[i]);
    }
    return 0;
}