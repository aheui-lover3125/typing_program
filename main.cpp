/* KOR - instruction // �ѱ��� ����
// ��� �ҽ��ڵ��� �߽��� �Ǵ� �ҽ��ڵ��Դϴ�.
// ���� ���� ��¥ : 2018.08.15  /// ������ : gunwoo7
// �� ���α׷��� Github�� ����Ͽ� �����˴ϴ�. (���� ������ ���ؼ�)
// main.cpp���� ���� �Ŵ����� �ֽ��ϴ� (���� �߰� �� �����Դϴ�)
*/

/* ENG - instruction // ���� ����
// It's the source code that is the center of all the source codes.
// Date of last modification: 2018.08.15 /// Developer : gunwoo7
// This program is managed using Github. (for version management)
// This is the only English manual (It will be added later)
*/

#include "main_header.h"

int main() {
	system("mode con: lines=31 cols=90");
	system("title Ÿ�� ���� ���α׷�");
	print_start_screen();
	system("cls");
	main_print(1);
}


/*
abcdefghijk
To open *.mp3:
mciSendString("open \"*.mp3\" type mpegvideo alias mp3", NULL, 0, NULL);

To play *.mp3:
mciSendString("play mp3", NULL, 0, NULL);

To play and wait until the *.mp3 has finished playing:
mciSendString("play mp3 wait", NULL, 0, NULL);

To replay (play again from start) the *.mp3:
mciSendString("play mp3 from 0", NULL, 0, NULL);

To replay and wait until the *.mp3 has finished playing:
mciSendString("play mp3 from 0 wait", NULL, 0, NULL);

To play the *.mp3 and replay it every time it ends like a loop:
mciSendString("play mp3 repeat", NULL, 0, NULL);
*/

