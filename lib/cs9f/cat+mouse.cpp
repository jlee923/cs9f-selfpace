#include <iostream>
#include <cmath>
#include "positions.h"

using namespace std;

// You define the GetPositions function.
// It should read legal cat and mouse positions from the user
// and return the position values in its two arguments.
void GetPositions ( ... [you fill these in] ) {
    ... [you fill this in]
}

// You define the RunChase function.
// Given initialized cat and mouse positions,
// it should simulate the cat chasing the mouse, printing the 
// result of each movement of cat and mouse.  Either the cat will 
// catch the mouse, or 30 time units will go by and the cat will 
// give up.
void RunChase ( ... [you fill this in] ) {
    ... [you fill this in]
}

int main () {
    Position cat, mouse;
    GetPositions (cat, mouse);
    RunChase (cat, mouse);
    return 0;
}
