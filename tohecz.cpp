
// Define the constants
#define N 4 // Size of the board
#define NUM_GAMES 1 // How many games to play
#define SCORE_LIMIT 5000 // Score limit
#define TIME_LIMIT 1.0e8 // Time limit in seconds - we use 1E8 as infinity
//#define TIME_LIMIT 2.0 // Time limit in seconds
#define PRINT 0 // 0-No print, 1-Print final sheet, 2-Print every sheet

#include "2048-core.inc"

int prevmove=-1;

int xNextStep(const Game& G_){
	if(prevmove==-1) return prevmove=1;
	if(prevmove==1) return prevmove=3;
	if((prevmove==3)&&(G_.bPreviousWorked)) return prevmove=1;
	if((prevmove==3)&&(!G_.bPreviousWorked)) return prevmove=0;
	if((prevmove==0)&&(G_.bPreviousWorked)) return prevmove=1;
	if((prevmove==0)&&(!G_.bPreviousWorked)) return prevmove=2;
	if(prevmove==2) return prevmove=1;
	return prevmove=2;
}

int NextStep(const Game& G_){
	if(prevmove==-1) return prevmove=1;
	if(prevmove==1) return prevmove=3;
	if((prevmove==3)&&(G_.bPreviousWorked)) return prevmove=1;
	if((prevmove==3)&&(!G_.bPreviousWorked)) return prevmove=2;
	if((prevmove==0)&&(G_.bPreviousWorked)) return prevmove=2;
	if((prevmove==0)&&(!G_.bPreviousWorked)) return prevmove=1;
	if(prevmove==2) return prevmove=0;
	return prevmove=2;
}

