#include <stdio.h>
main()
{
	int high, low, mid,s;
	int d[11] = { 10,15,18,23,28,35,47,55,68,78,96 };
	printf("探索値を入力");
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
		printf("見つからなかった\n");
	}
	else
	{
		printf("探索値%dは%d番目にありました\n",s,mid);
	}
}