#include <stdio.h>
#include<string.h>
struct profile {
	char name[20];
	int birth[3];
	char blood[5];
};

main()
{
	struct profile pdat;

	printf("���O����́F");
	scanf("%s", &pdat.name);
	printf("���N�������󔒂ŋ�؂��ē��́F");
	scanf("%d%d%d", &pdat.birth[0]
		, &pdat.birth[1]
		, &pdat.birth[2]);
	printf("���t�^����́F");
	scanf("%s", &pdat.blood);

	printf("%s--",pdat.name);
	printf("%d�N%02d��%02d�����܂�"
				, pdat.birth[0]
				, pdat.birth[1]
				, pdat.birth[2]);
	printf("���t�^-%s�^\n",pdat.blood);
}