#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//符号的定义
#define ROW 3
#define COL 3//定义在头文件里面谁都可以包含 要用的话随时包含



//函数的声明     

//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col);
//打印棋盘 本质是打印数组的内容
void DisplayBoard(char board[ROW][COL], int row, int col);
//玩家走
void Playermove(char board[ROW][COL], int row, int col);
//电脑走
void Computermove(char board[ROW][COL], int row,int col);
//判断游戏是否有输赢
char IsWin(char board[ROW][COL], int row, int col);

int IsFull(char board[ROW][COL], int row, int col);




