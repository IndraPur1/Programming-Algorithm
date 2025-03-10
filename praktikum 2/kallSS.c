/*Nama file     : kallSS.c*/
/*Deskripsi     : menghitung aritmatika dasar*/
/*Pembuat       : Indra Purwanto(24060123140150)*/
/*tanggal pembuatan : 1 Maret 2024*/

#include <stdio.h> /*header file*/

/*Program Utama*/
int main(){
    /*Kamus*/
    int A,B;
    int a,b,c,e,f;
    float d;
    char x;

    /*Algoritma*/
    printf("Program Aritmatika Super Sederhana \n");
    printf("pilihan operasi ");
    scanf("%c", &x);
    printf("Masukan pertama ");
    scanf("%d", &A);
    float g = A;
    printf("Masukan kedua ");
    scanf("%d", &B);
    float h = B;
    
    a = A + B;
    b = A - B;
    c = A * B;
    d = g / h;
    e = A / B;
    f = A % B;

    if (x == 'a') printf("A + B = %d", a);
    else if (x == 'b') printf("A - B = %d", b);
    else if (x == 'c') printf("A * B = %d", c);
    else if (x == 'd') printf("A / B = %.1f", d);
    else if (x == 'e') printf("A div B = %d", e);
    else if (x == 'f') printf("A mod B = %d", f);
    else printf("Masukan pilihan menu yang benar \n");

    return 0;

}