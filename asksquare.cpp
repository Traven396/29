#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
	srand(time(NULL));
	for(int i=0; i<10; i++){
		int n=rand()%100+10;
		int m;
		cout << n << " ";
		cin >> m;
		cerr << (m==n*n?"CORRECT":"wrong") << endl;
	}
	return 0;
}

