#include <stdio.h>
int add(int a, int b);
main()
{
	int a, b, answer;
	printf("������2����");
	scanf("%d%d",&a,&b);
	answer = add(a,b);
	printf("���v��%d�ł�\n",answer);
}

int add(int a, int b)
{
	int ans;
	ans = a + b;
	return(ans);
}