
// Define the constants
#define N 4 // Size of the board
#define NUM_GAMES 1 // How many games to play
#define SCORE_LIMIT 5000 // Score limit
#define TIME_LIMIT 1.0e8 // Time limit in seconds - we use 1E8 as infinity
//#define TIME_LIMIT 2.0 // Time limit in seconds
#define PRINT 0 // 0-No print, 1-Print final sheet, 2-Print every sheet

#include "2048-core.inc"

int NextStep(const Game& G_){
	// 0 - UP
	// 1 - RIGHT
	// 2 - DOWN
	// 3 - LEFT
	return rand()%4;
}

