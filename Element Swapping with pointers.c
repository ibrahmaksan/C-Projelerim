#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <time.h>
#include <limits.h>
#include <math.h>

int swap(int* girdi,int len) {

    int gecici;

    for(int j = 1;j<len;j++) {

        gecici = *(girdi);

        *(girdi) = *(girdi+j);

        *(girdi+j) = gecici;
        }

    for(int i = 0;i<len;i++){

        printf("%d",*(girdi+i));

        puts("");
    }
}



int main() {

    int uzunluk;

    printf("dizi uzunlugunu giriniz: ");
    scanf("%d",&uzunluk);
    int dizi[uzunluk];

    printf("Dizi elemanlarini giriniz: ");
    for(int i = 0;i<uzunluk;i++) {

        scanf("%d",&dizi[i]);
    }


    int* ptr = dizi;


    swap(ptr,uzunluk);

    puts("");



return 0;
}
