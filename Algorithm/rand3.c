#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int num;
	srand(time(0));
	rand();
	num = rand() % 100 + 1;
	if (num <= 30)
	{
		printf("���񂵂�̈ꌂ\n");
	}
	else
	{
		if (num >= 90)
		{
			printf("�U�����O�ꂽ\n");
		}
		else
		{
			printf("�ʏ�U��\n");
		}
	}
}