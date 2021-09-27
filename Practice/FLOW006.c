#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	{
	    int num;
	    int Sum=0, unit;
	    scanf("%d", &num);
	    while(num>0)
	    {
	        unit=num%10;
	        Sum+=unit;
	        num=num/10;
	    }
	    printf("%d\n", Sum);
	}
	return 0;
}