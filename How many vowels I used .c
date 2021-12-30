#include <stdio.h>
#include <math.h>
#include <time.h>
#include <windows.h>
#include <limits.h>
#include <string.h>
#include <stdlib.h>

int main() {

    char cumle[100];
    char karakter;
    int sayilar[10] = {97,101,105,111,117};

    printf("Cumleyi yaziniz: ");


    gets(cumle);
    int sayac = 0;
    for(int i = 0;i<5;i++) {

        sayac = 0;

        for(int j = 0;j<strlen(cumle);j++) {

            if(cumle[j] == sayilar[i]){

                sayac += 1;
            }
        }
        if(sayac != 0){
        printf("%d tane %c sesli harfi kullanilmistir.\n",sayac,sayilar[i]);
    }
    }


    return 0;
}
