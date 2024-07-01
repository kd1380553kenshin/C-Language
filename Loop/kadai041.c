#include <stdio.h>
main()
{
	int num, gokei;
	float ia;
	gokei = 0;
	ia = 0;
	printf("整数(-999で終了)？");
	scanf("%d",&num);
	while (num != -999)
	{
		gokei += num;
		ia++;
		printf("整数(-999で終了)？");
		scanf("%d",&num);
	}
	printf("合計＝%d\n",gokei);
	printf("平均＝%.2f\n",gokei/ia);
}