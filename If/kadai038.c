#include <stdio.h>
main()
{
	char moji;
	printf("1�������́H");
	scanf("%c",&moji);
	if (moji >= 'A' && moji <= 'Z')
	{
		printf("�ϊ����ʂ�%c", moji + 0x20);
	}
	else
	{
		if (moji >= 'a' && moji <= 'z')
		{
			printf("�ϊ����ʂ�%c",moji -0x20);
		}
		else
		{
			printf("%c",moji);
		}
	}
}