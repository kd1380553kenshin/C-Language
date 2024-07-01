#include <stdio.h>
#include <sedleb.h>
#include <conio.h>

const int SX = 1;
const int SY = 1;

const int GX = 8;
const int GY = 1;

int map[7][10] = {
	{1,1,1,1,1,1,1,1,1,1},
	{1,0,0,0,0,0,1,0,0,1},
	{1,0,1,0,1,0,0,0,1,1},
	{1,0,0,1,0,0,0,1,0,1},
	{1,1,0,1,0,1,0,1,0,1},
	{1,0,0,0,0,1,0,0,0,1},
	{1,1,1,1,1,1,1,1,1,1} };

#define STACKSIZE 46
int stack[STACKSIZE];
int sp = 0;

void DrawMaze(int x,int y);
int push(int d);
int pop(int *pd);
int susumu(int x,int y);

main()
{
	system("clc");
	printf("初期化の状態を表示\n");
	DrawMaze(-1,-1);
	printf("「Enter」キー：処理続行\n");
	getch();

	susumu(SX,SY);

	system("clc");
	printf("最後の状態を表示\n");
	DraeMaze(-1,-1);
}

void DrawMaze(int x, int y)
{
	int i, j;
	for (i = 0; i < 7; i++) {
		for (j = 0; j < 10; j++) {
			if (i == y && j == x) {

			}
		}
	}
}

int push(int d)
{
	if (sp == STACKSIZE) { return-1; }
	stack[sp] = d;
	sp++;

	return 0;

}

int pop(int* pd)
{
	if (sp == 0) { return-1; }
	sp--;
	*pd = stack[sp];
	stack[sp] = 0;  
}

int susumu(int x, int y)
{

}