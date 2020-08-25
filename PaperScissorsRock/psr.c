#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <assert.h>

char results[] = {0x18, 0x21, 0x06};

/*
 * Moves 0 = paper, 1 = scissors, 2 = rock
 *
 * [[ 0, 2, 1 ], <- Player 1's move, subcomponent <- Player 2's move, Row0 == Player 1 plays rock
 *  [ 1, 0, 2 ],
 *  [ 2, 1, 0 ]]
 *
 *  So expressing as binary:
 *  b'01 10 00 01 00 10 00 01 10'
 *
 *  This can be padded to be represented as three chars:
 *  '00 01 10 00', '00 10 00 01', '00 00 01 10'
 *
 *  And as hex:
 *  0x18, 0x21, 0x06
 *  Where each hex number is selected by player 1's move
 */
int do_game(int8_t player_one, int8_t player_two) {
    return (int)((results[player_one] & (3<<(player_two*2))) >> player_two*2);
}

