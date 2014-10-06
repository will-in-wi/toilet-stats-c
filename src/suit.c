#import "suit.h"

char * get_suit_text(enum Suit suit) {
    switch (suit) {
        case heart:
            return "heart";
        case spade:
            return "spade";
        case diamond:
            return "diamond";
        case club:
            return "club";
    }
}

char * get_suit_symbol(enum Suit suit) {
    switch (suit) {
        case heart:
            // return "♥";
            return "h";
        case spade:
            // return "♠";
            return "s";
        case diamond:
            // return "♦";
            return "d";
        case club:
            // return "♣";
            return "c";
    }
}
