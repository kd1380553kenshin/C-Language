#include <stdio.h>
main()
{
	int i;
	char data[] = "Language", * p_data, moji;
	int flg = 0;


	printf("data[] = %s\n",data);
	printf("����������?");
	scanf("%c",&moji);
	
	printf("�������ʂ́A");
	for (p_data = data,i = 0; *(p_data + i) != '\0'; i++)
	{
		if (moji == *(p_data + i))
		{
			printf("%d ",i + 1);
		}
	}

	if (flg == 1)
	{
		printf("�����ڂł�\n");
	}
	else
	{
		printf("error\n");
	}
}