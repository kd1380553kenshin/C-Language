#include <stdio.h>
main()
{
	int ia;
	printf("0����100�܂ł̐����H");
	scanf("%d",&ia);
	if (ia >= 90)
	{
		printf("���̐��l�̔��茋�ʂ́u5�v�ł�");
	}
	else
	{
		if (ia >= 80 && ia < 90)
		{
			printf("���̐��l�̔��茋�ʂ́u4�v�ł�");
		}
		else
		{
			if (ia >= 50 && ia < 80)
			{
				printf("���̐��l�̔��茋�ʂ́u3�v�ł�");
			}
			else
			{
				if (ia >= 30 && ia < 50)
				{
					printf("���̐��l�̔��茋�ʂ́u2�v�ł�");
				}
				else
				{
					if (ia < 30)
					{
						printf("���̐��l�̔��茋�ʂ́u1�v�ł�");
					}
				}
			}
		}
	}
}