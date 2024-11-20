// week11-4b.cpp Part2: BoPiFa
#include <iostream>
using namespace std;
int f(int n){ // Part2: BoPiFa
	int ans = 0;
	while(n>0){
		ans += n%10;
		n = n / 10;
	}
	return ans;
}
int main()
{
	int n;
	while( cin >> n ){
		if(n==0) break;

		n = f(f(f(n))); //Part2: BoPiFa function

		cout << n << "\n";
	}
}
