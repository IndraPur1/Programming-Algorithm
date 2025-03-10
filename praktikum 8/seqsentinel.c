#include <stdio.h>
#include <stdlib.h>

int main(){
    int n = 10;
    int arr[] = {1,5,13,15,16,19,20,28,29,52};
    int i = 0;
    int x, ix;

    printf("cari angka berapa :");
    scanf("%d", &x);

    arr[n+1] = x;

    while(arr[i] != x){
        i += 1;
    }

    if(i < n+1){
        ix = i+1;
    }else{
        ix = 0;
    }
    printf("di %d", ix);
    return 0;
}