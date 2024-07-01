#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i,k,w,target, data[20];
	for (i = 0; i < 20; i++)
	{
		data[i] = i + 1;
	}
	for (i = 0; i < k; i++)
	{
		printf("%d", data[i]);
	}
	printf("\n");
	srand(time());
	rand();
	for (i = 0; i < 20; i++)
	{
		target = rand() % 20;

		w = data[i];
		data[i] = data[target];
		data[target] = w;
	}

	for (i = 0; i < 20; i++)
	{
		printf("%d ",data[i]);
	}
}
	