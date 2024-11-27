// week12-4.cpp UVA 11349 (not OK, not finished)
#include <iostream>
using namespace std;

int main()
{
	int T, N, now;
	char c, c2; // not important!!
	cin >> T; // Step01: Input
	for(int t=1; t<=T; t++) { // Test Case t
		cin >> c >> c2 >> N; // Step01: Input
		for(int i=0; i<N; i++){
			for(int j=0; j<N; j++){
				cin >> now; // Step03: for-loop Input
			}
		}
		cout << "Test #" << t << ": Symmetric.\n";
	} // Step02: Output
}
