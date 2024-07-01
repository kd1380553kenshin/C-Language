#include <stdio.h>
main()
{
	int num, sum = 0, cnt = 0;
	printf("®”?(Ctrl+z‚Å“ü—ÍI—¹):");
	scanf("%d",&num);
	while (num != EOF)
	{
		cnt++;
		sum += num;
		printf("®”?(Ctrl+z‚Å“ü—ÍI—¹):");
		scanf("%d", &num);

	}
	printf("‡Œv=%d •½‹Ï=%.2f",sum,(float)sum/cnt);
}