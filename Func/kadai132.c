#include <stdio.h>
main()
{
	int num, sum = 0, cnt = 0;
	printf("����?(Ctrl+z�œ��͏I��):");
	scanf("%d",&num);
	while (num != EOF)
	{
		cnt++;
		sum += num;
		printf("����?(Ctrl+z�œ��͏I��):");
		scanf("%d", &num);

	}
	printf("���v=%d ����=%.2f",sum,(float)sum/cnt);
}