#include <stdio.h>
#include<string.h>
struct profile {
	char name[20];
	int birth[3];
	char blood[5];
};

main()
{
	struct profile pdat[5];
	struct profile* p;
	p = pdat;
	for (int i = 0; i < 5; i++)
	{
		printf("���O����́F");
		scanf("%s", &p->name);
		printf("���N�������󔒂ŋ�؂��ē��́F");
		scanf("%d%d%d"
			, &p->birth[0]
			, &p->birth[1]
			, &p->birth[2]);
		printf("���t�^����́F");
		scanf("%s", &p->blood);
		p++;
		printf("\n");
	}


	p = pdat;

	for (int i = 0; i < 5; i++)
	{
		if (strcmp( p->blood,"A") == 0)
		{
			printf("%s--", p->name);
			printf("%d�N%02d��%02d�����܂�"
				, p->birth[0]
				, p->birth[1]
				, p->birth[2]);
			printf("���t�^-%s�^\n", p->blood);
		}
		p++;
	}
}