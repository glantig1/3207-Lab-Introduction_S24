#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char randchar(){
    char x;
    switch ((rand() % 26)+1) {
        case 1:
            x = 'a';
            break;
        case 2:
            x = 'b';
            break;
        case 3:
            x = 'c';
            break;
        case 4:
            x = 'd';
            break;
        case 5:
            x = 'e';
            break;
        case 6:
            x = 'f';
            break;
        case 7:
            x = 'g';
            break;
        case 8:
            x = 'h';
            break;
        case 9:
            x = 'i';
            break;
        case 10:
            x = 'j';
            break;
        case 11:
            x = 'k';
            break;
        case 12:
            x = 'l';
            break;
        case 13:
            x = 'm';
            break;
        case 14:
            x = 'n';
            break;
        case 15:
            x = 'o';
            break;
        case 16:
            x = 'p';
            break;
        case 17:
            x = 'q';
            break;
        case 18:
            x = 'r';
            break;
        case 19:
            x = 's';
            break;
        case 20:
            x = 't';
            break;
        case 21:
            x = 'u';
            break;
        case 22:
            x = 'v';
            break;
        case 23:
            x = 'w';
            break;
        case 24:
            x = 'x';
            break;
        case 25:
            x = 'y';
            break;
        case 26:
            x = 'z';
            break;
        default:
            x = 'a';
            break;
    }
    return x;

}