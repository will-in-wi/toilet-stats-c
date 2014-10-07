#include <stdio.h>
#include "logic.h"
#include "util.h"
#include "deck.h"
#include "card.h"

void discard_card(struct Card working_deck[TOTAL_DECK], int i) {
    working_deck[i] = NULL;
}

int check_same_number(struct Card working_deck[TOTAL_DECK]) {
    if (count_deck(working_deck) < 4) {
        return FALSE;
    }

    int last_index = count_deck(working_deck) - 1;
    struct Card top_card = working_deck[last_index];
    struct Card fourth_card = working_deck[last_index - 3];

    // Check for same number four cards back.
    if (top_card.number == fourth_card.number) {
        // Pull the last four cards and discard them.
        discard_card(working_deck, last_index);
        discard_card(working_deck, last_index-1);
        discard_card(working_deck, last_index-2);
        discard_card(working_deck, last_index-3);
        return TRUE;
    }

    return FALSE;
}

int check_same_suit(struct Card working_deck[TOTAL_DECK]) {
    if (count_deck(working_deck) < 4) {
        return FALSE;
    }

    int last_index = count_deck(working_deck) - 1;
    struct Card top_card = working_deck[last_index];
    struct Card fourth_card = working_deck[last_index - 3];

    // Check for the same suit four cards back.
    if (top_card.suit == fourth_card.suit) {
        // Pull the last four cards and discard them.
        discard_card(working_deck, last_index-1);
        discard_card(working_deck, last_index-2);
        return TRUE;
    }

    return FALSE;
}

int game_round(struct Card unused_cards[TOTAL_DECK], struct Card working_deck[TOTAL_DECK]) {
    // TODO: Figure out how to count an array.
    if (count_deck(unused_cards) == 0) {
        return FALSE;
    }


    // Add cards until the deck has at least 4.
    do {
        // TODO: Figure out how to grab the shifted card.
        working_deck[last_card_index(working_deck)] = shift_first_card(unused_cards);
    } while (count_deck(working_deck) < 4 && count_deck(unused_cards) > 0);


    // Play a round.
    int did_stuff = TRUE;
    while (did_stuff == TRUE) {
        int same_number = check_same_number(working_deck);
        int same_suit = check_same_suit(working_deck);

        // This syntax might not work.
        did_stuff = (same_suit || same_number);
    }

    return TRUE;
}
