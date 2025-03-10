#include <stdio.h>
#include <stdlib.h>
    int n = 13;
    int arr[] = {1, 4, 6, 7, 10, 12, 18, 21, 29, 30, 41, 44, 47};
    int ix;
    int found = 0;

void bs(){
    int l = 0;
    int r = n;
    int m;
    int x;  

    printf("cari angka berapa :");
    scanf("%d", &x);

    while(l<=r && found == 0){
        m = (l+r)/2;
        if(x == arr[m]){
            found = 1;
            ix = m + 1;
        }else if(x < arr[m]){
            r = m - 1;
        }else{
            l = m + 1;
        }
    }
}
int main(){
    bs();
    printf("ada %d", found);
    return 0;
}