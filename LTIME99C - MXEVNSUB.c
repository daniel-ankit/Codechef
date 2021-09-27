#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);
	while(n--)
	{
	    int N;
	    scanf("%d", &N);
	    if(N%4 == 0 || (N+1)%4 == 0) printf("%d\n", N);
	    else printf("%d\n", N-1);
	}
	return 0;
}
