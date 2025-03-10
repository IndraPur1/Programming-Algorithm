#include <stdio.h>
#include <stdlib.h>

int main(){
    int n = 20;
    int arr[] = {19,1,28,5,20,15,52,13,16,29,71,65,10,18,87,5,90,35,7,11};
    int i = 0;
    int x, ix;
    int found;

    printf("cari angka apa? ");
    scanf("%d", &x);

    while(i < n && arr[i] != x){
        i += 1;
    }
    
    if(arr[i] == x){
        found = 1;
    }else{
        found = 0;
    }

    printf("%d", found);
    return 0;
}