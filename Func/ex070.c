#include <stdio.h>
int add(int a, int b);
main()
{
	int a, b, answer;
	printf("整数を2つ入力");
	scanf("%d%d",&a,&b);
	answer = add(a,b);
	printf("合計は%dです\n",answer);
}

int add(int a, int b)
{
	int ans;
	ans = a + b;
	return(ans);
}