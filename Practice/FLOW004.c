#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);
	while(n--)
	{
	    int num, l, f;
	    scanf("%d", &num);
	    l=num%10;
	    while(num>9)
	        num/=10;
	    f=num;
	    printf("%d\n", f+l);
	}
	return 0;
}