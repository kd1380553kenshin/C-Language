#include <stdio.h>
void getmoji(char moji, int *atai, int *p_moji);
main()
{
	int atai;
	int p_moji;
	char moji;
	printf("�A���t�@�x�b�g1����?:");
	scanf("%c",&moji);
	switch (atai)
	{
	case 0:
			printf("�߂�l�́A%d�Ȃ̂œ��͂��������́A�������ł�", atai); break;
	case 1:
			printf("�߂�l�́A%d�Ȃ̂œ��͂��������́A�啶���ł�", atai); break;

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
