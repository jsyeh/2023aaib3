// week07-0a.cpp
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	if(n<=1500) cout << 100;
	else{
		n -= 1500;
		int ans = 100 + n/250*5;
		if(n%250>0) ans += 5;
		cout << ans;
	}
}
