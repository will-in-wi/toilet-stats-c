#ifndef INC_DECK_H
#define INC_DECK_H

#include "card.h"
#include "suit.h"

#define TOTAL_DECK 52

void generate_deck(struct Card deck[TOTAL_DECK]);
void format_deck(struct Card deck[TOTAL_DECK]);
void shuffle_deck(struct Card deck[TOTAL_DECK]);
int count_deck(struct Card deck[TOTAL_DECK]);
struct Card shift_first_card(struct Card deck[TOTAL_DECK]);
int last_card_index(struct Card deck[TOTAL_DECK]);

#endif  /* INC_DECK_H */
