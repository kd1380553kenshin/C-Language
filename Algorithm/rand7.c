#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int num = 0,cnt,atari;

	srand(time(0));
	rand();

	atari = rand() % 1000 + 1;

	printf("1～1000の中であたりの数を予想してください\n");

	for(cnt = 0;num != atari;cnt++)
	{
		printf("あたりの数は?");
		scanf("%d", &num);
		if (num > atari)
		{
			printf("当たりの数より大きいです\n");
		}
		else
		{
			printf("当たりの数より小さいです\n");
		}
	}
	printf("正解!%d回で当たりました", cnt);
}