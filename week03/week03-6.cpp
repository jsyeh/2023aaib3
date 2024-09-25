// week03-6.cpp SOIT106_ADVANCE_012
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> a;
	int now;
	while(true){ //you can write while(1)
		cin >> now;
		if(now==0) break;
		a.push_back(now);
	}
	cin >> now;
	int ans = 0;
	for(int c : a){ //Compiler: MSVC, not CodeBlocks
		if(c==now) ans++;
	}
	cout << ans << "\n"; //endl End of Line l1l1l1 
}