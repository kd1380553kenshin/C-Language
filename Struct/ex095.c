#include <stdio.h>

struct syohin_data {�@�@//�\���̃^�O��
	char name[20]; //�����o���X�g
	int tanka;�@�@//�����o���X�g
};
void display1(int a);�@�@�@�@�@�@�@�@�@�@�@�@//�v���g�^�C�v�錾
void display2(struct syohin_data syohin);�@�@//�v���g�^�C�v�錾

main()
{
	int a = 10;
	struct syohin_data/*int�Ɠ���*/syohin/*�ϐ����Bex)a*/ = {"�P�V�S��",50};
	display1(a);
	display2(syohin);
}

void display1(int a)
{
	printf("a=%d\n",a);
}

void display2(struct syohin_data syohin)
{
	printf("syohin.name=%s syohin.tanka=%d\n",syohin.name,syohin.tanka);
}