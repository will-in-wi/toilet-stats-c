#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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


// A method for producing a scaled random number.
int scaled_rand(int n) {
    // https://stackoverflow.com/questions/10984974/why-do-people-say-there-is-modulo-bias-when-using-a-random-number-generator#comment14357415_10984975
    int x;

    do {
        x = rand();
    } while(x >= RAND_MAX - n && x >= n);

    return x % n;
}

void shuffle_deck(struct Card deck[TOTAL_DECK]) {
    struct Card tmp;
    srand(time(NULL));

    // Knuth-Fischer-Yates Shuffle. I think. It isn't quite even over 1M iterations.
    // TODO: Replace this with some library.
    for (int i = TOTAL_DECK-1; i > 0; i--) {
        int n = scaled_rand(TOTAL_DECK);

        tmp = deck[i];
        deck[i] = deck[n];
        deck[n] = tmp;
    }
}

int count_deck(struct Card deck[TOTAL_DECK]) {
    int count = 0;
    for (int i = 0; i < TOTAL_DECK; ++i) {
        if (deck[i] != NULL) count++;
    }

    return count;
}
