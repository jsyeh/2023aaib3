// week15-7.cpp
// UVA11417
#include <iostream>
using namespace std;

int gcd(int a, int b)
{
	if(a==0) return b;
	if(b==0) return a;
	return gcd(b, a%b);
}
int main()
{
	int N; // Step01: Input
	while( cin >> N ){
		if(N==0) break;
		int ans = 0;
		for(int i=1; i<N; i++){
			for(int j=i+1; j<=N; j++){
				ans += gcd(i,j);
			}
		}
		cout << ans << "\n";
	}
}
