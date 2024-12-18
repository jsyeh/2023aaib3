// week15-6.cpp SOIT106_ADVANCE_005_C
#include <stdio.h>

int MYPOWER(int a, int b)
{ //ex. a^3 = 1 *a *a *a
	int ans = 1;
	for(int i=0; i<b; i++) {
		ans = ans * a;
	}
	return ans;
}

int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("[%d]",MYPOWER(a,b));
	return 0;
}
