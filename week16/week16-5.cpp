// week16-5.cpp UVA299 train swapping
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int T, N;
	cin >> T; // Step01: Input
	for(int t=0; t<T; t++){
		cin >> N; // Step01: Input
		vector<int> a(N);
		for(int i=0; i<N; i++){
			cin >> a[i]; // Step01: Input
			cout << a[i] << " "; //delete latter
		}
		cout << "\n"; // delete latter


		cout << "Optimal train swapping takes 1 swaps.\n";
	} // Step02: Output
}
