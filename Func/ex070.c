#include <stdio.h>
int add(int a, int b);
main()
{
	int a, b, answer;
	printf("®”‚ğ2‚Â“ü—Í");
	scanf("%d%d",&a,&b);
	answer = add(a,b);
	printf("‡Œv‚Í%d‚Å‚·\n",answer);
}

int add(int a, int b)
{
	int ans;
	ans = a + b;
	return(ans);
}