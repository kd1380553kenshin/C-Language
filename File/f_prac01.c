#include <stdio.h>
main()
{
	int score = 0;
	FILE* fp;
	printf("プレイヤーの名前：");
	scanf("%s", name);
	while (1) {
		printf("現在のスコア：%d(eで終了)\n", score);
		ch = getch();
		if (ch == 'e')
		{
			break;
		}
		score++;
	}
	//ファイルの書き込み処理
	//�@ファイルのオープン
	fp = fopen("score.txt", "w");

	//�Aファイルへのnameとscoreの書き込み
	fprintf(fp, "%s\n%d\n", name, score);

	//�Bファイルのクローズ
	fclose(fp);
}