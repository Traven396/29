
int NextStep(const Game& G_){
	int i;
	// we output:
	// <N> <score> <1-if the last performed move actually did something> <the-board>
	std::cout << N << " " << G_.nScore << " " << (G_.bPreviousWorked?1:0);
	for(i=0; i<NN; i++) std::cout << " " << G_.Board[i];
	std::cout << std::endl;
	// we wait for an integer to return
	std::cin >> i;
	return i;
}
