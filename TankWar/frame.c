#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>

#include "frame.h"
#include "operation.h"
#include "symbol.h"

void setFrame() {
	system("mode con cols=112 lines=42");

	printf("  �x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x�x  ");
	printf(" |�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T |\n");
	for (int i = 0; i < 14; i++) {
		printf("��                                                                              ��");
		printf(" |                          |\n");
	}
	printf("��                                                                              ��");
	printf(" |�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T |\n");
	for (int i = 0; i < 24; i++) {
		printf("��                                                                              ��");
		printf(" |                          |\n");
	}
	printf("  ������������������������������������������������������������������������������  ");
	printf(" |�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T�T |\n");

	sideScreen();
}

void sideScreen() {
	goToxy(93, 2);
	printf("��     ��");
	goToxy(92, 5);
	printf("��  ����");
	goToxy(92, 7);
	printf("��  ����");
	goToxy(86, 9);
	printf("ʣ��з�̹�ˣ�");
	goToxy(86, 13);
	printf("��ǰ��Ϸ״̬��");
	goToxy(94, 19);
	goToxy(94, 24);
	printf("��  ��");
	goToxy(86, 27);
	printf("�����  ��������  �ƶ�");
	goToxy(93, 29);
	printf("x �� ���");
	goToxy(90, 37);
	printf("Esc��  ��ͣ��Ϸ");
}

void showMenu() {
	Bool isStart = True;

	goToxy(37, 10);
	printf("MENU");

	goToxy(BEGIN_POS_X, BEGIN_POS_Y);
	printf("*** START GAME ***");

	goToxy(END_POS_X, END_POS_Y);
	printf("*** QUIT  GAME ***");

	goToxy(25, 20);
	printf("--->");
}
