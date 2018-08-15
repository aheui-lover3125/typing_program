#pragma once

// windows api�� ����(�� ����, Ŀ�� ��ġ �̵� ��) �������

#ifndef __WINDOW_API_H_KGW__
#define __WINDOW_API_H_KGW__

#define ROUNDING(x, dig) ( floor((x) * pow(float(10), dig) + 0.5f) / pow(float(10), dig) )

namespace Con
{
	enum {
		BLACK, // 0 : ���� 
		DARK_BLUE, // 1 : ��ο� �Ķ� 
		DARK_GREEN, // 2 : ��ο� �ʷ� 
		DARK_SKY_BLUE, // 3 : ��ο� �ϴ� 
		DARK_RED, // 4 : ��ο� ���� 
		DARK_VOILET, // 5 : ��ο� ���� 
		DARK_YELLOW, // 6 : ��ο� ��� 
		GRAY, // 7 : ȸ�� 
		DARK_GRAY, // 8 : ��ο� ȸ�� 
		BLUE, // 9 : �Ķ� 
		GREEN, // 10 : �ʷ� 
		SKY_BLUE, // 11 : �ϴ� 
		RED, // 12 : ���� 
		VOILET, // 13 : ���� 
		YELLOW, // 14 : ��� 
		WHITE // 15
	};

	void SetColor(int color, int bgcolor)
	{
		color &= 0xf;
		bgcolor &= 0xf;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (bgcolor << 4) | color);
	}

	void gotoxy(short x, short y)
	{
		COORD Cur;
		Cur.X = x;
		Cur.Y = y;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
	}

	void CursorView(char show)//Ŀ�������
	{
		HANDLE hConsole;
		CONSOLE_CURSOR_INFO ConsoleCursor;
		hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		ConsoleCursor.bVisible = show;
		ConsoleCursor.dwSize = 1;
		SetConsoleCursorInfo(hConsole, &ConsoleCursor);
	}

}

#endif
