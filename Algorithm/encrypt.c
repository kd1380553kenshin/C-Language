#include <stdio.h>
main()
{
	char moji, d[11];
	int i;
	printf("文字列を入力してください(10文字まで)");
	scanf("%s",&d[]);
	for (i = 0; d[i] != '\0'; i++)
	{
		d[i] += 1;
	}
	printf("暗号化文字列は%sです",d);
}


/*	d[i] = d[i] + 1;
	ex. hello
	h +1 e +1 l +1 l+1 o+1
*/
