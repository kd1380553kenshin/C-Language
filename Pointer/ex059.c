#include<stdio.h>
main()
{
	char data[15] = "C Language";
	char data2[15];
	char* p_data, * p_data2;

	p_data = data;
	p_data2 = data2;

	printf("data[]=%s\n",p_data);
	printf("data2[]�ɂ͉��������Ă��Ȃ��̂ŕ�����R�[�h���R�s�[����\n");
	
	while (*p_data2++ = *p_data++);
	//*p_data��'\0'�ɂȂ�܂ŃR�s�[�𑱂��A'\0����������������U�ƂȂ��ă��[�v�I��'

	p_data2 = data2;
	printf("data2[]=%s\n",p_data2);
	while (*p_data2) {
		putchar(*p_data2++);
	}
	printf("\n");
}