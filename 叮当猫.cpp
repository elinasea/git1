#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#define width 800
#define height 600
#define pi 3.1415926
void drawhead();
void body();
int main()
{
	initgraph(width,height);
	//���ñ�����ɫ
	setbkcolor(WHITE);
	//�����Ļ֮ǰ����ɫ��������ɫ����
	cleardevice();
	drawhead();
	body();
	_getch();
	return 0;
}

void drawhead()
{
	//����ԭ��
	setorigin(400,300);
	//ͷ��������ʹ����Բ�ľ��ο�����
	setfillcolor(LIGHTBLUE);
	setcolor(BLACK);
	fillroundrect(-100,-150,100,50,400,400);
	//�����Բ,ʵ�����Ĳ���
	setfillcolor(WHITE);
	fillellipse(-85,-103,85,46);
	//����������
	setcolor(BLACK);
	setfillcolor(WHITE);
	fillroundrect(-50,-123,0,-70,88,88);
	fillroundrect(0,-123,50,-70,88,88);
    //��������
	setfillcolor(BLACK);
	fillcircle(-20,-90,10);
	fillcircle(20,-90,10);
	//����
    setfillcolor(RED);
	fillcircle(0,-70,10);
	//����
	line(0,-60,0,10);
	//��
	arc(-100,-190,108,11,pi*5/4,pi*7/4);
	//����
    line(-42,-43,-70,-71);
	line(42,-43,70,-71);
	line(-41,-35,-72,-40);
	line(41,-35,72,-40);
	line(-42,-27,-70,-9);
	line(42,-27,70,-9);   
}

void body()
{
	//������
	//�ֱ�
	line(-75,26,-132,66);
	line(75,26,132,66);
	line(-90,90,-110,104);
	line(90,90,110,104);
	//����
	line(-90,79,-90,172);
	line(90,79,90,172);
	//����
	arc(-10,162,10,182,0,pi);
	//��
    setfillcolor(WHITE);
    fillcircle(-130,85,-27);
	fillcircle(130,85,27);
	//��
	fillroundrect(4,172,-118,199,24,24);
	fillroundrect(4,172,118,199,24,24);
	//�����ɫ
	setfillcolor(LIGHTBLUE);
    floodfill(0,100,BLACK);
	//����
	setfillcolor(WHITE);
	fillcircle(6,90,60);
	solidrectangle(-50,10,45,9);
	//�ڴ�
	pie(-40,17,56,140,pi,0);
    //����
	setfillcolor(RED);
	fillroundrect(-98,17,106,45,12,12);
	//����
	setfillcolor(YELLOW);
	fillcircle(5,50,20);
    //������ʽ
	setfillcolor(BLACK);
    solidellipse(0,51,5,50);
	setlinestyle(PS_SOLID,3);
    //������
	setlinestyle(PS_SOLID,1);
	line(-12,40,21,40);
	line(-14,44,22,44);
}


