#include <stdio.h>
void kansu(int num, char moji);
main()
{
	int num;
	char moji;
	printf("文字?：");
	scanf("%c",&moji);
	printf("整数?：");
	scanf("%d",&num);

	kansu(moji, num);
}

void kansu(char moji, int num)
{
	printf("%c\n%d\n",moji,num);
	int i;
	for (i = 0; i < num; i++)
	{
		printf("%d",moji);
	}
}