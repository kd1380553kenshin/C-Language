#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int num;
	srand(time(0));
	rand();
	num = rand() % 5 + 1;
	
	printf("�����̂��Ȃ��̉^����");
	for (int i = 0; i < num; i++)
	{
		printf("��");
	}
	printf("�ł�");
}
