#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *yazdir(char *kopyadizi,char* dizi2, int uzunluk1,int uzunluk2) {

        int temp = uzunluk1+uzunluk2;

        kopyadizi = (char*) realloc(kopyadizi,temp+1);

        for(int i = uzunluk1,j=0;i<temp;i++,j++) {
            kopyadizi[i] = dizi2[j];
        }
        kopyadizi[temp] = '\0';

        return kopyadizi;
}

int main() {

    char dizi1[100];
    char dizi2[100];
    int uzunluk1,uzunluk2;

    printf("Dizileri doldurunuz: ");
    gets(dizi1);
    gets(dizi2);

    uzunluk1 = strlen(dizi1);
    uzunluk2 = strlen(dizi2);

    char* kopya1 = (char*)malloc(strlen(dizi1)); 
    char* kopya2  = (char*)malloc(strlen(dizi2)+1);

    strcpy(kopya1,dizi1);
    strcpy(kopya2,dizi2);

    char* dizi3 = yazdir(kopya1,kopya2,uzunluk1,uzunluk2);
    puts(dizi3);


return 0;
}




