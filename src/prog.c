#import <stdio.h>
#import "suit.h"
#import "deck.h"

#define DECKS 1

// int play_game() {
//     $deck = array();
//     for ($i=0; $i < $decks; $i++) {
//         $deck1 = \ToiletStats\Cards\Deck::generate();
//         $deck = array_merge($deck, $deck1);
//     }

//     // Shuffle deck(s)
//     shuffle($deck);

//     $game = new \ToiletStats\Logic\Toilet($deck);

//     $playing = true;
//     while ($playing === true) {
//         $playing = $game->round();

//         // Deck::format($game->get_deck());
//     }

//     return count($game->get_deck());
// }

int main() {
    struct Card deck[TOTAL_DECK];
    generate_deck(deck);

    shuffle_deck(deck);

    format_deck(deck);

    return 0;
}
