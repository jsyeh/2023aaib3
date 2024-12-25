// week16-4z.cpp Wang Wei-Hao's solution
#include <iostream>
using namespace std;
int a[10]={};

int main()
{
	int now;
	while( cin >> now ){
		if(now==0) break;

		a[now]++; //!!!!
	}
	cin >>now;
	cout << a[now] << "\n";
}
