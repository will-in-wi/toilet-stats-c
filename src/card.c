#include "card.h"

char get_formatted_number(int number) {
    switch (number) {
        case 0:
            return 'A';
        case 11:
            return 'J';
        case 12:
            return 'Q';
        case 13:
            return 'K';
        default:
            return number;
    }
}