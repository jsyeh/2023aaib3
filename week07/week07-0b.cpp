// week07-0b.cpp
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	if(n<1500) printf("%d", 100);
	else {
		n -= 1500;
		int ans = 100 + n/250*5;
		if(n%250) ans += 5;
		printf("%d", ans);
	}
}
