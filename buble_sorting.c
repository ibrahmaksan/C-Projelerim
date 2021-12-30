#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
#include <string.h>
#include <windows.h>
#include <time.h>





int main() {

    int dizi[9] = {2,1,2,2,4,3,3,4,1};

    int sayac = 0,toplam = 0;

    for(int i = 0; i<9;i++) {

        sayac = 0;
        toplam = 0;

        for(int j = i+1; j<9;j++){

            if(dizi[i] == dizi[j]) {
                sayac = 1;
                break;
            }
        }

        if(sayac == 0) {

            for(int k = 0; k<9;k++) {

                if(dizi[i] == dizi[k]) {

                    toplam = toplam +1;
                }
            }

            printf("%d den %d kadar vardir.",dizi[i],toplam);
        }
    }



return 0;
}
