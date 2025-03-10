#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    int gelap = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            bool terang = 0;
            for (int j = -k; j <= k; j++) {
                int pos = i + j;
                if (pos >= 0 && pos < n && a[pos] == 1) {
                    terang = 1;
                    break;
                }
            }
            if (!terang) {
                gelap++;
            }
        }
    }
    
    printf("%d\n", gelap);
    
    return 0;
}