#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/*program Utama*/
int main(){
    /*Kamus*/
     int n = 0<n<2000;
     int k = 0<k<86400;
     int ji = 0<ji<23;
     int mi = 0<mi<59;
     int i;
     int mk = 0;
     int waktu;

    /*Algoritma*/
    printf("Program Menentukan Jadwal yeon \n");
    printf("Masukan Jumlah Kegiatan dan waktunya : ");
    scanf("%d %d", &n, &k);

    for (i = 0; i < n; i++) {
        int Ji, Mi;
        scanf("%d %d", &ji, &mi);

        int wk = Ji * 3600 + Mi * 60;


        if (wk>= waktu) {
            waktu = wk + k; 
            mk++; 
        }
    }

    printf("%d\n", mk);
}
    

