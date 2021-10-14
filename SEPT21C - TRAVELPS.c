#include <stdio.h>
#include <string.h>

int main(void) {
	int n;
	scanf("%d", &n);
	while(n--)
	{
	    int N, A, B, n_states=0, n_district=0;
	    scanf("%d %d %d", &N, &A, &B);
	    char Array[N];
	    scanf("%s", Array);
	    for(int i=0; i<N; i++)
	    {
	        if(Array[i] == '1')
	        n_states++;
	        else n_district++;
	    }
	    printf("%d\n", (n_district*A) + (n_states*B));
	}
	return 0;
}