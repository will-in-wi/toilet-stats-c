#include <stdio.h>
#include "deck.h"
#include "card.h"

void generate_deck(struct Card deck[TOTAL_DECK]) {

    /* Generate all suits and numbers */
    int i = 0;
    for (int number=1; number <= TOTAL_NUMBERS; number++) {
        /* Generates all numbers. */
        for (int suit=heart; suit <= club; suit++) {
            /* Generate all suits. */
            struct Card card;
            card.suit = suit;
            card.number = number;
            deck[i] = card;
            i++;
        }
    }
}

void format_deck(struct Card deck[TOTAL_DECK]) {
    for (int i=0; i < TOTAL_DECK; i++) {
        printf("%d => %s of %s\n", i, get_formatted_number(deck[i].number), get_suit_symbol(deck[i].suit));
    }
}
