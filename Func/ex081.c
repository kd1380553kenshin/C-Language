#include <stdio.h>
int Get_max(int*array,int size);
int Get_min(int*array,int size);

main()
{
	int data[8] = { 6,10,8,2,9,5,1,7 };

	printf("最大値=%d\n",Get_max(data,8));
	printf("最小値=%d\n",Get_min(data,8));
}

int Get_max(int* array, int size)
{
	int i, max;
	for (max = *array,i = 1;i < size; i++)
	{
		if (max< *(array+i))
		{
			max = *(array+i);
		}
	}
	return max;
}

int Get_min(int* array, int size)
{
	int i, min;
	for (min = *array, i = 1; i < size; i++)
	{
		if (min > *(array + i))
		{
			min = *(array + i);
		}
	}
	return min;
}