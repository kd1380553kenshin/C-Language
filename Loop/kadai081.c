#include <stdio.h>
main()
{
	int num, cnt,sum;

	for (cnt = 0, sum = 0;;cnt++)
	{
		printf("®”(-999‚ÅI—¹)?");
		scanf("%d", &num);
		if (num == -999)break;
		sum += num;
	}
	printf("‡Œv%d\n",sum);
	printf("•½‹Ï%.3f", (float)sum / cnt);

}
