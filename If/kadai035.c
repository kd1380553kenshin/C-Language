#include <stdio.h>
main()
{
	int num;
	printf("整数？");
	scanf("%d",&num);
	if (num >= 1)
	{
		printf("入力値は「プラス」です");
	}
	else
	{
		if (num <= -1)
		{
			printf("入力値は「マイナス」です");
		}
		else
		{
			if (num == 0)
			{
				printf("入力値は「ゼロ」です");
			}
			else
			{
				printf("ERROR");
			}
		}
	}
}