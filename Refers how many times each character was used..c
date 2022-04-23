#include <stdio.h>

int main(){

    char kelime[100];
    printf("Kelimeyi giriniz: ");
    gets(kelime);
    int sayi = 0;
    int belirtec = 1;
    for(int i = 0; i<strlen(kelime); i++){
        sayi  = 0;
        belirtec = 1;
        for(int j = i ; j<strlen(kelime); j++){
            if(kelime[i] == kelime[j]){
                sayi++;
            }
        }

        for(int k = i;k>0; k--){
                if(i == 0){
                 printf("--> %c harfinden %d  tane vardir.\n",kelime[i],sayi);
                 break;
                }

                if(kelime[i] == kelime[k-1]){
                    belirtec = 0;
                    break;
                }
        }

    if(belirtec == 1){
        printf("-->%c harfinden %d  tane vardir.\n",kelime[i],sayi);
    }
    }

return 0;}
