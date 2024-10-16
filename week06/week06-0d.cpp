// week06-0d.cpp
#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	cin >> s;
	for(int i=0; s[i]!=0; i++){
		char c = s[i];
		if(islower(c)) c = toupper(c);
		else if(isupper(c)) c = tolower(c);
		cout << c;
	}
	cout << "\n";
}
