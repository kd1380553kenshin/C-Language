#include <stdio.h>
main()
{
	int num;
	printf("�����H");
	scanf("%d",&num);
	if (num >= 1)
	{
		printf("���͒l�́u�v���X�v�ł�");
	}
	else
	{
		if (num <= -1)
		{
			printf("���͒l�́u�}�C�i�X�v�ł�");
		}
		else
		{
			if (num == 0)
			{
				printf("���͒l�́u�[���v�ł�");
			}
			else
			{
				printf("ERROR");
			}
		}
	}
}