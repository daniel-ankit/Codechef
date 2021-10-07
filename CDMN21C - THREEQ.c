#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);
	while(n--)
	{
	    int Right[3], Answered [3], right = 0, ans_right = 0;
	    for(int i=0; i< 3; i++)
	    scanf("%d", &Right[i]);
	    for(int i=0; i< 3; i++)
	    scanf("%d", &Answered[i]);
	    for(int i=0; i<3; i++)
	    {
	        if(Right[i] == 1)
	        right++;
	        if(Answered[i] == 1)
	        ans_right++;
	    }
	    if(right == ans_right)
	    printf("Pass\n");
	    else printf("Fail\n");
	}
	return 0;
}