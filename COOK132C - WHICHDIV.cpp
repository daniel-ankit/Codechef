#include <stdio.h>

int main(void) {
    int n, num;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d", &num);
        if(num>=2000) printf("1\n");
        else if(num >= 1600 && num <2000) printf("2\n");
        else printf("3\n");
    }
	return 0;
}