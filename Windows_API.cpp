#include "main_headfile.h" //  ������� ���� ��� ����
#include "main_function.h" //  �Լ� ���� ��� ����

// Windows api�� ����(�� ����, Ŀ�� ��ġ �̵� ��) �ҽ����� 
// Windows (Microsoft�� OS) ������ ��밡���մϴ�. �ƴ� ��쿡�� �� �κ��� ����ñ� �ٶ��ϴ�.
// Windows �ü���� �ƴϸ� ��ǻ� ����� �����Ͻô� ���� �����е��� �ǰ��� �����ǰ� �Դϴ�?






void SetColor(int color, int bgcolor) // ���� ����
{
	color &= 0xf;
	bgcolor &= 0xf;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (bgcolor << 4) | color);
}

void gotoxy(short x, short y) { // Ŀ�� ��ġ �̵�
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




