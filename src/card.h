#ifndef INC_CARD_H
#define INC_CARD_H

#include "suit.h"

#define TOTAL_NUMBERS 13

char get_formatted_number(int number);

struct Card {
    enum Suit suit;
    /**
     * Ace is 1
     * Jack is 11
     * Queen 12
     * King 13
     */
    int number;
};

#endif  /* INC_CARD_H */
