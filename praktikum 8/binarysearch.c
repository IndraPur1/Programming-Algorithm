#include <stdio.h>
#include <stdlib.h>
    int n = 13;
    int arr[] = {1, 4, 6, 7, 10, 12, 18, 21, 29, 30, 41, 44, 47};
    int ix;
    
void bs(){
    int l = 0;
    int r = n;
    int m;
    int x;  
    int found = 0;

    printf("cari angka berapa :");
    scanf("%d", &x);

    m=(l+r)/2;
    while(l < r && x != arr[m]){
        if(x < arr[m]){
            r = m - 1;
        }else if(x > arr[m]){
            l =  m + 1;
        }
        m=(l+r)/2;
    }
    if(x == arr[m]){
        found = 1;
        ix = m + 1;
    }else{
        found = 0;
        ix = 0;
    }
}

int main(){
    bs();
    printf("angka ada di %d", ix);
    return 0;
}