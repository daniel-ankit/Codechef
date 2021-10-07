#include <stdio.h>
#include <limits.h>

int main()
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		int n, k, l;
		scanf("%d %d %d", &n, &k, &l);
		int s[n];
		int maxi = INT_MIN;
		int ind_maxi = n - 1;
		for (int i = 0; i < n; i++)
			scanf("%d", &s[i]);
		int flag = 1;
		for (int i = 0; i < n - 1; i++)
		{
			if (s[i] >= s[ind_maxi])
				flag = 0;
		}
		if (flag)
			printf("Yes\n");
		else
		{
			flag = 1;
			s[ind_maxi] = s[ind_maxi] + (l - 1) * k;
			for (int i = 0; i < n - 1; i++)
			{
				if (s[i] >= s[ind_maxi])
					flag = 0;
			}
			if (flag)
				printf("Yes\n");
			else
				printf("No\n");
		}
	}
	return 0;
}