#include "main_headfile.h" //  ������� ���� ��� ����
#include "main_function.h" //  �Լ� ���� ��� ����

// ����ȭ���� ����� ����ϰ� �ֽ��ϴ�.(��� ���� ó������ ����Ѵٰ� �н��ϴ�.)

void clear_lines(int y, int strlength) { // y��° ���� strlength ���̸� ����
	int i;

	gotoxy(0, y);
	for (i = 0; i < strlength; i++) {
		printf(" ");
	}
}

void print_start_screen() { // ���� ȭ�� ���

	int i;
	int space_x, space_y; // ���� ����
	space_x = 7;
	space_y = 1;

	while (1)
	{
		system("cls");
		for (i = 0; i < space_y; i++) printf("\n");
		gotoxy(space_x * 2, space_y + 1); printf("������������������������������\n");
		gotoxy(space_x * 2, space_y + 2); printf("  �ߡߡߡߡߡ�  ��              �ߡߡߡߡߡ�  ��\n");
		gotoxy(space_x * 2, space_y + 3); printf("  ��            ��                  �ܡ�      ��\n");
		gotoxy(space_x * 2, space_y + 4); printf("  ��            ��                  �ܡ�      ��\n");
		gotoxy(space_x * 2, space_y + 5); printf("  �ڡڡڡڡڡ�  �ڡڡڡڡ�        ��    ��    �ڡڡڡڡ�\n");
		gotoxy(space_x * 2, space_y + 6); printf("  ��            ��                ��    ��    ��\n");
		gotoxy(space_x * 2, space_y + 7); printf("  ��            ��              ��        ��  ��\n");
		gotoxy(space_x * 2, space_y + 8); printf("  �ܡܡܡܡܡ�  ��              ��        ��  ��\n");
		gotoxy(space_x * 2, space_y + 9); printf("�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�\n");
		gotoxy(space_x * 2, space_y + 10); printf("�١١١١١١١١١١١١١١١١١١١١١١١١١١١١�\n");
		gotoxy(space_x * 2, space_y + 11); printf("������������������������������\n");
		gotoxy(space_x * 2, space_y + 12); printf("     �ߡ�          ��                �ߡߡ�\n");
		gotoxy(space_x * 2, space_y + 13); printf("    ��   ��    �ܡܡ�                ��  ��\n");
		gotoxy(space_x * 2, space_y + 14); printf("  ��       ��      ��              ��      ��\n");
		gotoxy(space_x * 2, space_y + 15); printf("  ��       ��      ��            ��          ��\n");
		gotoxy(space_x * 2, space_y + 16); printf("    ��   ��    ����          ��              ��\n");
		gotoxy(space_x * 2, space_y + 17); printf("     �ߡ�          ��        �ܡܡܡܡܡܡܡܡܡܡ�\n");
		gotoxy(space_x * 2, space_y + 18); printf("                               ��              ��\n");
		gotoxy(space_x * 2, space_y + 19); printf("    ��                         ��              ��\n");
		gotoxy(space_x * 2, space_y + 20); printf("    ��                         ����������\n");
		gotoxy(space_x * 2, space_y + 21); printf("    ��                         ��              ��\n");
		gotoxy(space_x * 2, space_y + 22); printf("    �ߡߡߡߡߡߡߡ�           �ܡܡܡܡܡܡܡܡ�\n");
		gotoxy(space_x * 2, space_y + 23); printf("�ݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡݡ�\n");
		gotoxy(space_x * 2, space_y + 24); printf("�ۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡۡ�\n");
		gotoxy(space_x * 2, space_y + 25); printf("              press any key to start program!\n");

		for (i = 0; i < 24; i++) {
			int time_now = time(NULL);
			while (time(NULL) - time_now == 0 && !kbhit()); // 1�ʰ� �������� �ʰų� Ű���尡 ������ �ʾ��� �� ����
			if (time(NULL) - time_now == 0) return;
			clear_lines(i + space_y, 58 + space_x * 2);
		}
	}
	system("cls");
}

