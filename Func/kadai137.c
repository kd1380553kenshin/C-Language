#include <stdio.h>
void getmoji(char moji, int *atai, int *p_moji);
main()
{
	int atai;
	int p_moji;
	char moji;
	printf("アルファベット1文字?:");
	scanf("%c",&moji);
	switch (atai)
	{
	case 0:
			printf("戻り値は、%dなので入力した文字は、小文字です", atai); break;
	case 1:
			printf("戻り値は、%dなので入力した文字は、大文字です", atai); break;

	}

}

void getmoji(char moji, int* atai, int* p_moji)
{
	if (moji > 'a' && moji < 'z') {
		*atai = 0;
	}
	else {
		if (moji > 'A' && moji < 'Z') {
			*atai = 1;
		}
		else {
			printf("ERROR");
		}
	}
}
