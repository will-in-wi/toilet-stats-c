#ifndef INC_DECK_H
#define INC_DECK_H

#include "card.h"
#include "suit.h"

#define TOTAL_DECK 52

void generate_deck(struct Card deck[TOTAL_DECK]);
void format_deck(struct Card deck[TOTAL_DECK]);

#endif  /* INC_DECK_H */
