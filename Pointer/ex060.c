#include <stdio.h>
main()
{
	int i;
	char data[] = "Language", * p_data, moji;
	int flg = 0;


	printf("data[] = %s\n",data);
	printf("検索文字は?");
	scanf("%c",&moji);
	
	printf("検索結果は、");
	for (p_data = data,i = 0; *(p_data + i) != '\0'; i++)
	{
		if (moji == *(p_data + i))
		{
			printf("%d ",i + 1);
		}
	}

	if (flg == 1)
	{
		printf("文字目です\n");
	}
	else
	{
		printf("error\n");
	}
}