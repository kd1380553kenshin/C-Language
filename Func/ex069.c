#include <stdio.h>
main()
{
	int num, cnt = 0,sum = 0;
	printf("整数を入力(Ctrl+zで終了):");
	while (scanf("%d", &num) != EOF)
	{
		cnt++;
		sum += num;
		printf("整数を入力(Ctrl+zで終了):");
	}
	printf("合計= %d  平均= %.2f",sum,(float)sum/cnt);
}