// SOIT108_Base_013
// §U∂g¶“√D
#include <iostream>
using namespace std;

int main()
{
	int now, total=0;
	while( cin >> now ){
		if(now==0) break;
		if(now>0) total += now;
	}
	cout << total;
}
