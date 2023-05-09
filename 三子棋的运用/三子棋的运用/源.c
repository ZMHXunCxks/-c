#include<stdio.h>
#include"game.h"
void menu()
{
	printf("********************");
	printf("******** 1、玩游戏 ********");
	printf("********* 0、退出游戏 *******");
	printf("********************");
}

void game()
{
	//存储数据  二维数组                                                      |  |  
	                                                                     // -- -- --
	char board[ROW][COL];                                                //   |  |
	                                                                     // -- -- --
	//初始化棋盘   因为是空白棋盘所以要初始化空格                        //   |  |
	InitBoard(board,ROW,COL);//不初始化的话打印的是未知数
	//打印棋盘函数
	DisplayBoard(board, ROW, COL);
	char ret = 0;//接收游戏状态  
	
	while (1)
	{
		//玩家走
		Playermove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断玩家是否赢得游戏
		//电脑走
		ret = IsWin(board, ROW, COL);//玩家赢* 电脑赢# 平局Q 游戏继续C
		if(ret != 'C')
			break;
		Computermove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
		//判断电脑是否赢得游戏
	}
	if (ret == '*')
	{   
		printf("\n");
		DisplayBoard(board, ROW, COL);
		printf("玩家胜利\n");
	}
	else if (ret == '#')
	{
		printf("\n");
		DisplayBoard(board, ROW, COL);
		printf("电脑胜利\n");
		
	}
	else 
	{	
		printf("\n");
		DisplayBoard(board, ROW, COL);
		printf("平局\n");
		
	}
	

}


int main()
{
	
	int input = 0;
	srand((unsigned)time(NULL));//srand 设计随机种子  time根据时间来随机NULL接收 rand（）代表升成的随机数
	do
	{
		menu();
		printf("\n请选择:");
		scanf_s("%d",&input);
		switch (input)
		{
		case 1:
			printf("三子棋游戏开始\n");
			game();
			break;
		case 0:
			printf("退出\n");
			break;
		default:
			printf("请重新选择\n");
			break;
		}
	} while (input);//如果选的是0 条件为假则跳出

	return 0;
}