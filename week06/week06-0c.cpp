// week06-0c.cpp
// If you forgot #include <string> or #include <ctype.h>
#include <iostream>
using namespace std;
int main()
{
	char c;
	while( cin >> c ){ // Do It Yourself
		if(c>='a' && c<='z') c = c - 'a' + 'A';
		else if(c>='A' && c<='Z') c = c - 'A' + 'a';
		cout << c;
	}
	cout << "\n";
}
