#include <stdio.h>
main()
{
	char moji, d[11];
	int i;
	printf("文字列を入力してください(10文字まで)");
	scanf("%s", &d[0]);
	for (i = 0; d[i] != '\0'; i++)
	{
		d[i]--;
		i++;
	}
	printf("暗号化文字列は%sです", d);
}

