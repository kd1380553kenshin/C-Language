#include <stdio.h>
main()
{
	int score = 0;
	FILE* fp;
	printf("�v���C���[�̖��O�F");
	scanf("%s", name);
	while (1) {
		printf("���݂̃X�R�A�F%d(e�ŏI��)\n", score);
		ch = getch();
		if (ch == 'e')
		{
			break;
		}
		score++;
	}
	//�t�@�C���̏������ݏ���
	//�@�t�@�C���̃I�[�v��
	fp = fopen("score.txt", "w");

	//�A�t�@�C���ւ�name��score�̏�������
	fprintf(fp, "%s\n%d\n", name, score);

	//�B�t�@�C���̃N���[�Y
	fclose(fp);
}