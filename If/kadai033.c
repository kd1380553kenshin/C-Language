include <stdio.h>
main()
{
	char moji;
	printf("�A���t�@�x�b�g�H");
	scanf("%c",&moji);
	if (moji >= 'A' && moji <= 'Z')
	{
		printf("���̕����́u�啶���v�ł�");
	}
	else
	{
		if (moji >= 'a' && moji <= 'z')
		{
			printf("���̕����́u�������v�ł�");
		}
	}
}