#include <stdio.h>
main()
{
	char moji, d[11];
	int i;
	printf("���������͂��Ă�������(10�����܂�)");
	scanf("%s", &d[0]);
	for (i = 0; d[i] != '\0'; i++)
	{
		d[i]--;
		i++;
	}
	printf("�Í����������%s�ł�", d);
}

