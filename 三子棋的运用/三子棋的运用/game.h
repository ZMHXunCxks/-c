#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//���ŵĶ���
#define ROW 3
#define COL 3//������ͷ�ļ�����˭�����԰��� Ҫ�õĻ���ʱ����



//����������     

//��ʼ������
void InitBoard(char board[ROW][COL], int row, int col);
//��ӡ���� �����Ǵ�ӡ���������
void DisplayBoard(char board[ROW][COL], int row, int col);
//�����
void Playermove(char board[ROW][COL], int row, int col);
//������
void Computermove(char board[ROW][COL], int row,int col);
//�ж���Ϸ�Ƿ�����Ӯ
char IsWin(char board[ROW][COL], int row, int col);

int IsFull(char board[ROW][COL], int row, int col);




