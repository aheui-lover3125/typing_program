/* KOR - instruction // �ѱ��� ����
// ��� �ҽ��ڵ��� �߽��� �Ǵ� �ҽ��ڵ��Դϴ�.
// ���� ���� ��¥ : 2018.09.23  /// ������ : gunwoo7
// �� ���α׷��� Github�� ����Ͽ� �����˴ϴ�. (���� ������ ���ؼ�)
// main.cpp���� ���� �Ŵ����� �ֽ��ϴ� (���� �߰� �� �����Դϴ�)
*/

/* ENG - instruction // ���� ����
// It's the source code that is the center of all the source codes.
// Date of last modification: 2018.09.23 /// Developer : gunwoo7
// This program is managed using Github. (for version management)
// This is the only English manual (It will be added later)
*/

#include "main_headfile.h" //  ������� ���� ��� ����
#include "main_function.h" //  �Լ� ���� ��� ����

int main() {
	// ó�� �����̶��ϴ�.
	system("mode con: lines=31 cols=90"); // �ܼ� ������ ���߱�
	system("title typing_program"); // �ܼ��� �̸� ���ϱ�
	CursorView(0); // Ŀ���� �����.
	PlaySound(TEXT("data/song/main_bgm1.wav"), NULL, SND_ASYNC | SND_LOOP);// �������
	print_start_screen(); // �ʱ� ȭ�� ���
	system("cls");
	select_main(); // ���� ȭ�� �̵�
	return -1; // �� ������ ����(���� �ݺ��� Ż�� ��Ȳ)
}
