#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
#include <string.h>
#include <windows.h>
#include <time.h>





int main() {

    int dizi[100] = {1,2,3,4,5};

    int deger;

    int konum;

    printf("input the value to be inserted = ");
    scanf("%d",&deger);


    for(int i = 0;i<5;i++) {

        if(dizi[i]>=deger) {

            konum = i;
            break;
        }

        konum = i+1; // eger deger elemanlardan buyukse burasi calisir.
    }

    for(int j = 6;j>= konum;j--) {

        dizi[j] = dizi[j-1];
    }

dizi[konum] = deger;

    for(int i = 0;i<6;i++) {

        printf("%d\n",dizi[i]);
    }





return 0;
}
