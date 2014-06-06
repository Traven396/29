#include <iostream>

using namespace std;

int main(){
	while(true){
		for(int n=0; n<=3; n++){
			// Output the move
			cout << n << endl;
			// Get the Board state
			int N, Score, PreviousWorked;
			int Board[16];
			cin >> N >> Score >> PreviousWorked;
			for(int i=0; i<N*N; i++) cin >> Board[i];
		} 
	}
}

