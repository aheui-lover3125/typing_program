#include "main_headfile.h" //  ������� ���� ��� ����
#include "main_function.h" //  �Լ� ���� ��� ����

// ���������� ���ǰų� ���� �з��� �� ���� �Լ��� ��Ƶ� ���Դϴ�.

int random(int range) {
	srand(time(NULL) * time(NULL) * time(NULL));
	return rand() % range;
}
int keyboard_input() { // Ű���� ó�� �ޱ�
	int key = getch();
	if (key == 13) return 0;
	else if (key == 224) { // ȭ��ǥ�� 2����Ʈ Ȯ�� �ڵ��̴�.
		key = getch();

		switch (key) { 
		case 72:  // ���� ȭ��ǥ // 4
			return 8;
			break;
		case 75: // �Ʒ��� ȭ��ǥ // 2
			return 4;
			break; 
		case 77: //  ���� ȭ��ǥ // 8
			return 6;
			break;
		case 80: // ������ ȭ��ǥ // 6
			return 2;
			break;
		}
	}
	else return -1;
}

void error() {
	system("cls");
	printf("������ �߻��Ͽ����ϴ�. (error �Լ� ����) \n");
	Sleep(700);
	printf("�ҽ��ڵ� �Ǵ� �Է��Ͻ� ����� ������ �ֽ��ϴ�.\n");
	Sleep(700);
	printf("�ٽ� �ѹ� �Է� ����� Ȯ�� �� �ֽð�\n");
	Sleep(700);
	printf("�ƴ� ��� �����ڿ��� ������ �� �ֽʽÿ�.\n");
	Sleep(700);
	printf("������ �̸��� : ---- \n"); // --- �κ��� �̸����� �Է��ϴ� ��
	Sleep(700);
	printf("�Է��� �͵� ���� �˷��ֽø� �ذ��ϱ� �����ϴ�.\n");
	Sleep(700);
	printf("4�� �� �ƹ�Ű�� �Է��Ͻø� ����˴ϴ�.\n");
	Sleep(4000);
	system("PAUSE");
	_Exit (EXIT_FAILURE);
	
}
