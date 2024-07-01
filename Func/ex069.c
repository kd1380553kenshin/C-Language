#include <stdio.h>
main()
{
	int num, cnt = 0,sum = 0;
	printf("®”‚ğ“ü—Í(Ctrl+z‚ÅI—¹):");
	while (scanf("%d", &num) != EOF)
	{
		cnt++;
		sum += num;
		printf("®”‚ğ“ü—Í(Ctrl+z‚ÅI—¹):");
	}
	printf("‡Œv= %d  •½‹Ï= %.2f",sum,(float)sum/cnt);
}