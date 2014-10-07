#include <stdio.h>
#include "card.h"

char * get_formatted_number(int number) {
    char * out;

    switch (number) {
        case 0:
            out = "A";
        case 11:
            out = "J";
        case 12:
            out = "Q";
        case 13:
            out = "K";
        default:
            sprintf(out, "%d", number);
    }

    return out;
}