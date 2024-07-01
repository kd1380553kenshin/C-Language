#include <stdio.h>
main()
{
	int high, low, mid,s;
	int d[11] = { 10,15,18,23,28,35,47,55,68,78,96 };
	printf("’Tõ’l‚ğ“ü—Í");
	scanf("%d",&s);
	for (low = 0, high = 10;high > low;)
	{
		mid = (low + high) / 2;
		if (s == d[mid])break;

		if (s > d[mid])
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	if (low > high)
	{
		printf("Œ©‚Â‚©‚ç‚È‚©‚Á‚½\n");
	}
	else
	{
		printf("’Tõ’l%d‚Í%d”Ô–Ú‚É‚ ‚è‚Ü‚µ‚½\n",s,mid);
	}
}