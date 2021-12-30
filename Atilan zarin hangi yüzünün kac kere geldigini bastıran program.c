#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
#include <string.h>
#include <windows.h>
#include <time.h>





void siralama(int sayilar[], int boyut) {

        int gecici;

        for(int i = 0;i<sizeof(sayilar);i++) {
            for(int j= 0;j<strlen(sayilar);j++) {

                if(sayilar[i]>sayilar[j]) {

                    gecici = sayilar[i];

                    sayilar[i] = sayilar[j];

                    sayilar[j] = gecici;

                }
            }
        }

        for(int k = 0;k<sizeof(sayilar);k++) {

            printf("%d",sayilar[k]);
        }
   }



int main()
{

   int sayilar[10] = {1,5,8,9,6,5,55,10};

   siralama(sayilar,8);


    return(0);
}
