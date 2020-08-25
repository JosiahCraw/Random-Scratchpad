#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <assert.h>

#include "psr.h"

int main(void) {
    // Paper - Paper = Tie
    assert(do_game(0,0) == 0);

    // Paper - Scissors = Two
    assert(do_game(0,1) == 2);
    
    // Paper - Rock = One
    assert(do_game(0,2) == 1);
    
    // Scissors - Paper = One
    assert(do_game(1,0) == 1);
    
    // Scissors - Scissors = Tie
    assert(do_game(1,1) == 0);
    
    // Scissors - Rock = Two
    assert(do_game(1,2) == 2);
    
    // Rock - Paper = Two
    assert(do_game(2,0) == 2);
    
    // Rock - Scissors = One
    assert(do_game(2,1) == 1);
    
    // Rock - Rock = Tie
    assert(do_game(2,2) == 0);
    
    return 0;     
}
