#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int num;
	srand(time(0));
	rand();
	num = rand() % 5 + 1;
	if (num == 1)
	{
		printf("�����̂��Ȃ��̉^���́� �ł�");
	}
	else
	{
		if (num == 2)
		{
			printf("�����̂��Ȃ��̉^���́��� �ł�");
		}
		else
		{
			if (num == 3)
			{
				printf("�����̂��Ȃ��̉^���́����� �ł�");
			}
			else
			{
				if (num == 4)
				{
					printf("�����̂��Ȃ��̉^���́������� �ł�");
				}
				else
				{
					if (num == 5)
					{
						printf("�����̂��Ȃ��̉^���́��������� �ł�");
					}
				}
			}
		}
	}
}
