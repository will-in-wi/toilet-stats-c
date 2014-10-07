#import <stdio.h>
#import "suit.h"
#import "deck.h"
#import "util.h"

#define DECKS 1

int main() {
    struct Card unused_cards[TOTAL_DECK];
    struct Card working_deck[TOTAL_DECK];

    generate_deck(unused_cards);
    shuffle_deck(unused_cards);
    format_deck(unused_cards);

    int playing = TRUE;
    while (playing == TRUE) {
        playing = game_round(unused_cards, working_deck);

        format_deck(working_deck);
    }

    printf("Final count: %d\n", count(working_deck));

    return 1;
}
