#include<stdio.h>
#include<time.h>

int main(){


for(int i = 0;i<=59;i++){

    for(int j =0;j<=59;j++){

        printf("%02d : %02d",i,j);
        sleep(1);
        printf("\r"); // Satýr baþýna getirir ve orada yazanýn üzerine yazar.

    }
}

    return 0;
}
