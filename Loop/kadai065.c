#include <stdio.h>
main()
{
	int num, sum,cnt;
	//num = scanf
	sum = 0;
	cnt = 0;

	do
	{
		printf("®”(-999‚ÅI—¹)?");
		scanf("%d", &num);
		sum += num;
		cnt++;
	}
	while(num != -999);

	printf("‡Œv = %d\n",sum);
	printf("•½‹Ï = %f",(float)sum/cnt);
}