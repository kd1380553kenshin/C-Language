#include <stdio.h>
main()
{
	int data[10] = { 10,20,30,4,50,60,70,80,90,1 };
	int max, min;
	int i;

	printf("配列data=");

	for (i = 0, max = 0, min = data[0]; i < 10; i++)
	{
		printf("%4d",data[i]);
		if (data[i] <= min)
		{
			
			min = data[i];
		}
		else
		{
			max = data[i];
		}
	}
	printf("\n最大値=%d  最小値=%d",max,min);
}