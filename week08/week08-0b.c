/// week08-0b.c
#include <stdio.h>
#include <stdlib.h> //qsort()
int cmp(const void *p1, const void *p2){
	return *(int*)p1 - *(int*)p2;
}
int main()
{
	int a[10000];
	int now, N=0;
	while( scanf("%d", &now) == 1 ){
		a[N++] = now;

		qsort(a, N, sizeof(int), cmp);

		if(N%2==1) printf("%d\n", a[N/2]);
		else printf("%d\n", (a[N/2]+a[N/2-1])/2 );
	}
}
