#ifndef INC_SUIT_H
#define INC_SUIT_H

enum Suit {
    heart,
    spade,
    diamond,
    club,
};

char * get_suit_text(enum Suit suit);
char * get_suit_symbol(enum Suit suit);

#endif  /* INC_SUIT_H */
