#include <stdio.h>
main()
{
	char moji, d[11];
	int i;
	printf("���������͂��Ă�������(10�����܂�)");
	scanf("%s",&d[]);
	for (i = 0; d[i] != '\0'; i++)
	{
		d[i] += 1;
	}
	printf("�Í����������%s�ł�",d);
}


/*	d[i] = d[i] + 1;
	ex. hello
	h +1 e +1 l +1 l+1 o+1
*/
