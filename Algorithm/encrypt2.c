#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	char s[21];
	int i,k[20],n;
	srand(time(0));
	rand();


	printf("���������͂��Ă�������(20�����܂�)");
	scanf("%s",&s[0]);

	for (i = 0; s[i] != '\0'; i++)
	{
		k[i] = rand() % 5;
		s[i] = k[i] + s[i];
	}
	printf("�Í���������� %s �ł�\n",s);
	printf("�Í����L�[��");

	for (n = 0; n < i; n++)
	{
		printf("%d",k[n]);
	}

}