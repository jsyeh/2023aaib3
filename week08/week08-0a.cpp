// week08-0a.cpp
#include <iostream>
#include <vector>
#include <algorithm> //sort()
using namespace std;

int main()
{
	vector<int> a;
	int now;
	while( cin >> now ){
		a.push_back(now);

		sort(a.begin(), a.end());

		int N = a.size();
		if(N%2==1) cout << a[N/2];
		else cout << (a[N/2]+a[N/2-1])/2;
		cout << "\n";
	}
}
