#include <stdio.h>
main()
{
	int ia;
	printf("0から100までの整数？");
	scanf("%d",&ia);
	if (ia >= 90)
	{
		printf("その数値の判定結果は「5」です");
	}
	else
	{
		if (ia >= 80 && ia < 90)
		{
			printf("その数値の判定結果は「4」です");
		}
		else
		{
			if (ia >= 50 && ia < 80)
			{
				printf("その数値の判定結果は「3」です");
			}
			else
			{
				if (ia >= 30 && ia < 50)
				{
					printf("その数値の判定結果は「2」です");
				}
				else
				{
					if (ia < 30)
					{
						printf("その数値の判定結果は「1」です");
					}
				}
			}
		}
	}
}