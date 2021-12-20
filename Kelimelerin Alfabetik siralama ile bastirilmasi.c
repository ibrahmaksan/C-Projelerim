#include <stdio.h>
#include <math.h>
#include <time.h>
#include <windows.h>
#include <limits.h>

int main() {

    char sirasiz[10][51]; // 10, kelime sayisi; 51 ise kelimenin olusabileceði maks
    // karakter sayisini belirtiyor.

    char sirali[10][51];

    printf("10 tane kelime girin: ");

    for(int i = 0;i<10;i++) {

        gets(sirasiz[i]);

    }

    printf("\n");

    printf("Kelimelerin alfabetik sirali hali: \n");


    int enkucukindis;

    char enkucukkelime[51];

    enkucukkelime[50] = '\0';


    for(int i=0;i<10;i++) {

        enkucukindis = -1;

        for(int k = 0; k<50;k++) {

            enkucukkelime[k] = '{';
        }

        for(int j= 0; j<10;j++) {

            if(strcmp(sirasiz[j],enkucukkelime)<0) {
                strcpy(enkucukkelime,sirasiz[j]);
                enkucukindis = j;
            }

        }

        for(int m = 0; m<50;m++) {

        sirasiz[enkucukindis][m] = '{';

        }

        strcpy(sirali[i],enkucukkelime);
    }


    for(int i = 0;i<10;i++) {

        puts(sirali[i]);
    }


    return 0;
}
