#include <stdio.h>
main()
{
	int num, cnt = 0,sum = 0;
	printf("���������(Ctrl+z�ŏI��):");
	while (scanf("%d", &num) != EOF)
	{
		cnt++;
		sum += num;
		printf("���������(Ctrl+z�ŏI��):");
	}
	printf("���v= %d  ����= %.2f",sum,(float)sum/cnt);
}