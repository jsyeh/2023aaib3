// week14-5.cpp UVA10190
#include <iostream>
using namespace std;

int main()
{
	int a, b; // Step01: Input
	while( cin >> a >> b ){
		int bad = 0, backup = a; // Step04: backup
		while(a>1){ // Step03: Testing bad
			//cout << a << " ";
			if(a%b > 0) bad = 1;
			a = a / b;
		}
		if(bad==1) cout << "Boring!\n";
		else{
			a = backup; // Step04: backup
			while(a>1){ //Step05
				cout << a << " ";
				a = a / b;
			}
			cout << "1\n"; //Step05
		}
	}// Step02: Output
}