#include<stdio.h>
main()
{
	int a;
	printf("1〜3の好きな数字を入力してください");
	scanf("%d",&a);
	if (a == 1)
	{
		printf("○");
	}
	else
	{
		if (a == 2)
		{
			printf("△");
		}
		else
		{
			if (a == 3)
			{
				printf("×");
			}
			else
			{
				if (a != 1 && a != 2 && a != 3)
				{
					printf("エラー");
				}
			}
		}
	}
}