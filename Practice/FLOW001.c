#include <stdio.h> 

int main() {
	int T;
	scanf("%d", &T);
	for (int i=T; i>0; i--)
	{
		int a, b;
		scanf("%d %d", &a, &b);
		int ans = a + b;
		printf("%d\n", ans);
	}
	return 0;
}