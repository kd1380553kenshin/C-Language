#include<stdio.h>
struct syohin_data {
	char name[20];
	int tanka;
	int kosuu;
};

main()
{
	struct syohin_data syohin[3] = { {"�G���s�c",30,5},
								  {"�P�V�S��",50,2},
								  {"�ӂł΂�",500,3} };
	int i;
	for (i = 0; i < 3; i++) {
		printf("���i���F%s ",syohin[i].name);
		printf("�P���@�F%4d  ",syohin[i].tanka);
		printf("���F%4d ",syohin[i].kosuu);
		printf("\n");
	}
}