#include <stdio.h>
main()
{
	int moji1, moji2;
	char syori;
	printf("d:�ő�l�@s:�ŏ��l�@g:���v�@h:����\n");
	printf("��������́F");
	scanf("%c",&syori);

	printf("��������́F");
	scanf("%d%d",&moji1,&moji2);

	switch (syori)
	{
	case 'd':
		if(moji1 >= moji2)
		{
			printf("�ő�l��%d�ł�\n", moji1); break;
		}
		else
		{
			printf("�ő�l��%d�ł�\n", moji2); break;
		}
	case 's':
		if (moji1 <= moji2)
		{
			printf("�ŏ��l��%d�ł�\n", moji1); break;
		}
		else
		{
			printf("�ŏ��l��%d�ł�\n", moji2); break;
		}
	case 'g':
		printf("���v��%d�ł�\n", moji1 + moji2); break;

	case 'h':
		printf("���ς�%d�ł�\n",(moji1+moji2)/2);
	}