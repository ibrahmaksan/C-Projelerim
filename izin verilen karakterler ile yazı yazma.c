#include <stdio.h>
#include <math.h>
#include <time.h>
#include <windows.h>
#include <limits.h>

int main() {

    char izinliler[63];

    izinliler[62] ='\0';

    for(int i = 0;i<26;i++) {

        izinliler[i] = 65+i;
    }

    for(int i = 0;i<26;i++) {

        izinliler[26+i] = 97+i;
    }

    for(int i = 0;i<10;i++) {

        izinliler[52+i] = 48+i;
    }

    int i;

    puts(izinliler);

    while(1) {

        char girdi = getch();

        if(girdi == '*') {
            break;
        }

        for(i = 0; i<62;i++) {

            if(girdi != izinliler[i])
                ;

            else {

                putch(izinliler[i]);
            }


        }
    }




    return 0;
}
