#include<stdio.h>
main()
{
	int h, m, s;
	printf("�b������́F");
	scanf("%d", &s);
		if (s >= 0) {
			if (s <= 5000) {
				h = s / 3600;
				s = s % 3600;
				m = s / 60;
				s = s % 60;
				printf("%d����%d��%d�b�ł�\n", h, m, s);
			}
			else {
				printf("�G���[�F���͂͂T�O�O�O�܂łɂ��Ă�������\n");
			}
		}
		else {
			printf("�}�C�i�X�̓G���[�ł�\n");
		}
	else {
		printf("�}�C�i�X�̓G���[�ł�\n");
	}
}