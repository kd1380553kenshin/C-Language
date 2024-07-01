#include <stdio.h>
main()
{
	int moji1, moji2;
	char syori;
	printf("d:最大値　s:最小値　g:合計　h:平均\n");
	printf("処理を入力：");
	scanf("%c",&syori);

	printf("整数を入力：");
	scanf("%d%d",&moji1,&moji2);

	switch (syori)
	{
	case 'd':
		if(moji1 >= moji2)
		{
			printf("最大値は%dです\n", moji1); break;
		}
		else
		{
			printf("最大値は%dです\n", moji2); break;
		}
	case 's':
		if (moji1 <= moji2)
		{
			printf("最小値は%dです\n", moji1); break;
		}
		else
		{
			printf("最小値は%dです\n", moji2); break;
		}
	case 'g':
		printf("合計は%dです\n", moji1 + moji2); break;

	case 'h':
		printf("平均は%dです\n",(moji1+moji2)/2);
	}