#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <assert.h>

#include "psr.h"

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: PLAYERONE PLAYERTWO\n");
        return 1;
    }
    int8_t player_one = (strcmp(argv[1], "paper") == 0) ? 0 : (strcmp(argv[1], "scissors") == 0) ? 1 : 2;
    int8_t player_two = (strcmp(argv[2], "paper") == 0) ? 0 : (strcmp(argv[2], "scissors") == 0) ? 1 : 2;
    printf("%d\n", do_game(player_one, player_two)); 
    return 0;     
}

