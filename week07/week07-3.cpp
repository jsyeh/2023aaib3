// week07-3.cpp UVA 10107
#include <iostream>
#include <vector>
#include <algorithm> //sort()
using namespace std; //Step01

int main()
{
	vector<int> a;//Step02
	int now;
	while( cin >> now ){ //Step01
		a.push_back(now); //Step02

		sort(a.begin(), a.end());//Step03

		int N = a.size(); //Step04
		if(N%2==1) cout << a[N/2] << "\n";//Step05
		else cout << (a[N/2-1]+a[N/2])/2 << "\n";
	}
}
