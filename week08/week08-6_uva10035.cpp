#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int a, b;
	while( cin >> a >> b){
		if(a==0 && b==0) break;
		int ans = 0, carry = 0;
		while(a>0 || b>0){
			int now = a%10 + b%10 + carry;
			carry = now/10;
			if(carry>0) ans++;
			a /= 10;
			b /= 10;
		}
		if(ans==0) printf("No carry operation.\n");
		else if(ans==1) printf("1 carry operation.\n");
		else printf("%d carry operations.\n", ans);
	}
}
