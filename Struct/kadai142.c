#include <stdio.h>
#include<string.h>
struct kamoku_data {
	char name[30];
	char subject[20];
	int tani;
};

main()
{
	struct kamoku_data kamoku;
	struct kamoku * p;
	p = &kamoku_data;
	strcpy(kamoku->name, "�Q�[���\�t�gI�R�[�X");
	strcpy(kamoku->subject, "C����");
	kamoku->tani = 8;

	printf("�R�[�X���F%s\n", kamoku->name);
	printf("���Ȗ��F%s\n", kamoku->subject);
	printf("�P�ʐ��F%d\n", kamoku->tani);
}