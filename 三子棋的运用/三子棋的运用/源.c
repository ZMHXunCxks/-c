#include<stdio.h>
#include"game.h"
void menu()
{
	printf("********************");
	printf("******** 1������Ϸ ********");
	printf("********* 0���˳���Ϸ *******");
	printf("********************");
}

void game()
{
	//�洢����  ��ά����                                                      |  |  
	                                                                     // -- -- --
	char board[ROW][COL];                                                //   |  |
	                                                                     // -- -- --
	//��ʼ������   ��Ϊ�ǿհ���������Ҫ��ʼ���ո�                        //   |  |
	InitBoard(board,ROW,COL);//����ʼ���Ļ���ӡ����δ֪��
	//��ӡ���̺���
	DisplayBoard(board, ROW, COL);
	char ret = 0;//������Ϸ״̬  
	
	while (1)
	{
		//�����
		Playermove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж�����Ƿ�Ӯ����Ϸ
		//������
		ret = IsWin(board, ROW, COL);//���Ӯ* ����Ӯ# ƽ��Q ��Ϸ����C
		if(ret != 'C')
			break;
		Computermove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
		//�жϵ����Ƿ�Ӯ����Ϸ
	}
	if (ret == '*')
	{   
		printf("\n");
		DisplayBoard(board, ROW, COL);
		printf("���ʤ��\n");
	}
	else if (ret == '#')
	{
		printf("\n");
		DisplayBoard(board, ROW, COL);
		printf("����ʤ��\n");
		
	}
	else 
	{	
		printf("\n");
		DisplayBoard(board, ROW, COL);
		printf("ƽ��\n");
		
	}
	

}


int main()
{
	
	int input = 0;
	srand((unsigned)time(NULL));//srand ����������  time����ʱ�������NULL���� rand�����������ɵ������
	do
	{
		menu();
		printf("\n��ѡ��:");
		scanf_s("%d",&input);
		switch (input)
		{
		case 1:
			printf("��������Ϸ��ʼ\n");
			game();
			break;
		case 0:
			printf("�˳�\n");
			break;
		default:
			printf("������ѡ��\n");
			break;
		}
	} while (input);//���ѡ����0 ����Ϊ��������

	return 0;
}