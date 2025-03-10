#include <stdio.h>
#include <stdlib.h>

void maxsort(int T[], int n){
    //kamus
    int i;
    int pass;
    int Temp;
    int Imax;

    //Algoritma
    for(pass = 1; pass < n-1; pass++){
        Imax = pass;
        for(i = pass+1; i < n; i++){
            if(T[Imax] < T[i]){
                Imax = i;
            }
        }
        Temp = T[Imax];
        T[Imax] = T[pass];
        T[pass] = Temp;
    }
}

int main(){
    int T[7] = {7, 1, 0, 5, 3, 5, 6};
    int n = 7;
    
    maxsort(T, n);

    for(int i = 0; i < n; i++){
        printf("%d ", T[i]);
    }
    return 0;
}