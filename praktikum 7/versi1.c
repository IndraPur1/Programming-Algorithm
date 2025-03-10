#include <stdio.h>
#include <stdlib.h>

int main(){
    int n = 20;
    int arr[] = {19,1,28,5,20,15,52,13,16,29,71,65,10,18,87,5,90,35,7,11};
    int i = 0;
    int x, ix;

    printf("cari angka apa? ");
    scanf("%d", &x);

    while(i < n && arr[i] != x){
        i += 1;
    }

    if(arr[i] == x){
        ix = i+1 ;
    }else{
        ix = 0;
    }
    printf("angak %d ada pada %d", x, ix);
    return 0;

}