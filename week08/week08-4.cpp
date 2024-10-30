// week08-4.cpp ¯x°}¶¶®É°w±ÛÂà
#include <stdio.h> // printf()
#include <iostream> // cin
using namespace std;
int main()
{
	int M, N;
	cin >> M >> N;

	int a[20][20];

	for(int i=0; i<M; i++){
		for(int j=0; j<N; j++){
			cin >> a[i][j];
			//printf("%2d ", a[i][j]);
		}
		//printf("\n");
	}
	printf("\n");
	for(int j=0; j<N; j++){
		for(int i=M-1; i>=0; i--){
			printf("%2d ", a[i][j]);
		}
		printf("\n");
	}
}
