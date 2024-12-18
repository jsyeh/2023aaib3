// week15-1.cpp UVA12250 Language Detection not OK
#include <iostream>
#include <string> // <==== Step03: string
using namespace std;

int main()
{
	string hello; // Step 03: string
	int t = 1;
	while( cin >> hello ) { // Step01: input
		if(hello=="#") break;


		cout << "Case " << t << ": ENGLISH\n";
		t++; // Step04: test case t
	} // Step02: Output
}
