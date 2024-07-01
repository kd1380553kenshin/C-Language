#include<stdio.h>
main()
{
	FILE* fp;
	int lv, hp;
	fp = fopen("file02.txt","w");
	fscanf(fp,"%s",str);
	fprintf("‘•”õ:%s\n",str);

	fscanf(fp,"%d%d%s",&lv,&hp,equip);
	printf("lv:%d hp:%d ‘•”õ:%s\n",lv,hp,equip);

	c = fgetc(fp);
	fget(str, sizeof(str), fp);
	printf("%s\n",str);
	fclose(fp);
}