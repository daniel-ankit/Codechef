#include <stdio.h>

int min(int a, int b)
{
    if(a<b)
    return a;
    return b;
}

int main(void) {
	int n;
	scanf("%d", &n);
	while(n--)
	{
	    int N, even = 0, odd = 0;
	    scanf("%d", &N);
	    for(int i=0; i<N; i++)
	    {
	        int x;
	        scanf("%d", &x);
	        if(x%2==1)
	        odd++;
	        else even++;
	    }
	    printf("%d\n", min(even, (N+1)/2) + min(odd, N/2));
	}
	return 0;
}