// week06-0a.cpp
#include <string>
#include <iostream>
using namespace std;
int main()
{
	char c;
	while( cin >> c ){
		if(islower(c)) c = toupper(c);
		else if(isupper(c)) c = tolower(c);
		cout << c;
	}
	cout << "\n";
}
