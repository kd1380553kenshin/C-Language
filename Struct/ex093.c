//�|�C���^���g���ăv���O�������쐬

#include <stdio.h>
struct syohin_data {
	char name[20];
	int tanka;
	int kosuu;
};

main()
{
	struct syohin_data syohin[] = { {"�G���s�c",30,5,},
								  {"�����S��",50,2,},
								  {"�ӂł΂�",500,3,} };
	struct syohin_data* p;
	p = syohin; //�z�񖼂͐擪�A�h���X


	int i,kingaku;
	for (i = 0; i < 3; i++)
	{
		kingaku = p->tanka * p->kosuu;
		printf("���i��:%s ",p->name);
		printf("�P��:%4d ",p->tanka);
		printf("��:%4d ",p->kosuu);
		printf("���z:%d ",kingaku);
		p++;               //���̃f�[�^�֐i�߂�
		printf("\n");
	}

}