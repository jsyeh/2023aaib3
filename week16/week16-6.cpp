// week16-6.cpp UVA299 train swapping
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
		}
		// Step03: Bubble Sort
		int ans = 0;
		for(int k=0; k<N-1; k++){
			for(int i=0; i<N-1; i++){
				if(a[i]>a[i+1]){
					swap(a[i], a[i+1]);
					ans++;
				}
			}
		}
		cout << "Optimal train swapping takes " << ans << " swaps.\n";
	} // Step02: Output
}
