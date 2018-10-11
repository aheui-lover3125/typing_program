#include "main_headfile.h" //  ������� ���� ��� ����
#include "main_function.h" //  �Լ� ���� ��� ����

// ����ȭ�� ó���� ����ϴ� �Լ��� ���⿡ �ֽ��ϴ�.
int select_main() {
	int loc = 1;
	main_print(1);
	while (1) {
		int key_input = keyboard_input(); // Ű���� �Է� ���� �޴´�.

		if (key_input == 6) { // �޴��� ��ġ��  �����Ѵ�. -> ������ Ű�� ������ ��
			if (loc == 3) loc = 1;
			else loc++;
		}
		else if (key_input == 4) { // ���� Ű�� �������� 
			if (loc == 1) loc = 3;
			else loc--;
		}
		else if (key_input == 0) { // ���� Ű�� �������� ( �޴��� �������� ��)
			switch (loc) { // ���� ���� �޴� ����
			case 1:
				word_practice(); // �ܾ� ����
				break;
			case 2:
				short_sentence_practice(); // ���� ����
				break;
			case 3:
				Introduction_of_this_program(); // ���α׷� �Ұ�
				break;
			default:
				error(); //����
			}
		}
		main_print(loc); // ��� ���� ���� �� �Ŀ��� �ٽ� ���� ȭ�� ���
		Sleep(500); // ������ �ΰ����� ������
	}
}

void word_practice() { // �ܾ� ����
	system("cls");
	PlaySound(TEXT("data/song/main_bgm2.wav"), NULL, SND_ASYNC | SND_LOOP); // main_bgm2.wav �뷡 Ʋ��
	int wordn,randomn,correct = 0,i; // wordn = ������ �ܾ� ����, correct = ���� �� ���� ����, randomn = ������ ����, i = �ݺ����� i
	double accuracy = 0; // ��Ȯ��
	FILE *wordinput = fopen("data/file/word_practice.dat", "rt"); // �б� ���� ���� ����
	if (wordinput == NULL) error(); // ������ ���ٸ� ����!
	fscanf(wordinput, "%d", &wordn); // �ܾ� ���� ��ĵ �ް�
	char word[3005][12],now[12]; // word = ���Ͽ� ����� ��� �ܾ�, now = ���� �Է��ؾ� �� �ܾ�

	for(int i=0;i<wordn;i++){ // �ܾ��� ���� ��ŭ
		fscanf(wordinput, "%s", word[i]); // �ܾ� ���
	}

	fclose(wordinput); // ��Ʈ�� �ݱ�

	time_t time_now = time(NULL); //�ð� ����
		for (i = 1; i <= 20; i++) {
		randomn = random(wordn - 5); // ������ ������ ���Ѵ�.
		system("cls");
		printf("-------------------- ��Ȯ�� : %.1f%% ------------------- ����� : %d%% ------------------\n",accuracy,5 * (i-1)); // ��� ȭ��
		printf("\n\n                                      ���� ġ�� �ܾ� \n");
		printf("\n\n------------------------------[                           ]------------------------------\n");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		printf("                                    ���� �Է��Ͻ� �ܾ�\n");
		printf("\n\n------------------------------[                           ]------------------------------\n\n\n");
		gotoxy(40, 6);
		printf("%s",word[randomn]);
		gotoxy(40, 26);
		CursorView(1); // Ŀ�� ���̱�
		scanf("%s",now); // �ܾ� �Է�
		CursorView(0); // Ŀ�� �����
		if(!strcmp(now, word[randomn])) correct += 1; // ������ correct �� 1�߰�
		accuracy = (double)((double)correct / (double)i) * 100; // ��Ȯ�� ���
	}
	time_now = time(NULL) - time_now; //�ð� ����

	system("cls");
	gotoxy(0, 0);
	printf("                         ---   ���� ������ �Ϸ� �Ǿ����ϴ�.   ---\n");
	printf("                              ---   ������ ���� : %d��   ---\n", correct);
	printf("                                ---   ��Ȯ�� : %.1f%%   ---\n", accuracy);
	printf("                              ---   ���� �ð� : %lld��   ---\n", time_now);
	printf("                            6�� �� �޴� ����ȭ������ �̵��˴ϴ�.\n ");
	Sleep(6000);

	if (i != 21) error(); // �ݺ����� ���� 20�� �ݺ����� ������ ����!
	PlaySound(TEXT("data/song/main_bgm1.wav"), NULL, SND_ASYNC | SND_LOOP); //main_bgm1.wav Ʋ��
}

void short_sentence_practice() {
	system("cls");
	PlaySound(TEXT("data/song/main_bgm2.wav"), NULL, SND_ASYNC | SND_LOOP); // main_bgm2.wav �뷡 Ʋ�� 
	int wordn = 1261, correct = 0, randomn,i; // wordn = ������ �ܾ� ����, correct = ���� �� ���� ����, randomn = ������ ����, i = �ݺ����� i
	double accuracy;
	char word[3005][100], now[100]; // word = ���Ͽ� ����� ��� ����, now = ���� �Է��ؾ� �� ����
	FILE *sentenceinput = fopen("data/file/sentence_practice.dat", "rt"); // �ϱ� ���� ���� ����
	
	if (sentenceinput == NULL) error(); // ������ ���ٸ� ���� �߻�

	for (int i = 0; i < wordn; i++) { // �Է� �ް�
		fgets(word[i], sizeof(word[i]), sentenceinput);
	}
	fclose(sentenceinput); // ���� �Է� �ݱ�


	accuracy = 0;
	time_t time_now = time(NULL); //�ð� ����
	for (i = 1; i <= 10; i++) {
		randomn = random(wordn - 5); // ���� ����
		system("cls");
		printf("-------------------- ��Ȯ�� : %.1f%% ------------------- ����� : %d%% ------------------\n", accuracy, 5 * (i - 1));
		printf("\n\n                               ����  �Է��ϼž� �Ͻ� ����\n");
		printf("\n\n-[                                                                                     ]-\n");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		printf("                                    ���� �Է��Ͻ� ����\n");
		printf("\n\n-[                                                                                     ]-\n\n\n");
		gotoxy(12, 6);
		printf("%s", word[randomn]);
		gotoxy(12, 26);
		CursorView(1); // Ŀ�� ���̱�
		fgets(now, sizeof(now), stdin); // �Է��� ������ ������ �޴´�. (fgets : �ѱ� - 50�ڸ� �޵��� ����)
		CursorView(0); // Ŀ�� �����
		if (!strcmp(now, word[randomn])) correct += 1; // �´ٸ� correct 1 �߰�
		accuracy = (double)((double)correct / (double)i) * 100; // ��Ȯ�� ���
	}
	time_now = time(NULL) - time_now; //�ð� ����
	system("cls");
	gotoxy(0, 0);
	printf("                         ---   ���� ������ �Ϸ� �Ǿ����ϴ�.   ---\n");
	printf("                              ---   ������ ���� : %d��   ---\n", correct);
	printf("                                ---   ��Ȯ�� : %.1f%%   ---\n", accuracy);
	printf("                              ---   ���� �ð� : %lld��   ---\n", time_now);
	printf("                            6�� �� �޴� ����ȭ������ �̵��˴ϴ�.\n ");
	Sleep(6000);
	if (i != 11) error(); // �ݺ��� 10�� ���� ������ ����!��
	PlaySound(TEXT("data/song/main_bgm1.wav"), NULL, SND_ASYNC | SND_LOOP); // main_bgm1.wav Ʋ��
}

void Introduction_of_this_program() { // ���α׷� ���� 
	PlaySound(TEXT("data/song/main_bgm2.wav"), NULL, SND_ASYNC | SND_LOOP); // main_bgm2.wav Ʋ��
	system("cls");
	printf("�ȳ��ϼ���. ������ ��ǿ��Դϴ�.\n");
	Sleep(700);
	printf("�� ���α׷��� ���� �������� �ʱ� �������� ��ǥ��ȸ�� ���α׷� �Դϴ�.\n");
	Sleep(700);
	printf("�� ���α׷��� GNU General Public License v3.0 ��� ���̼����� �ش�˴ϴ�.\n");
	Sleep(700);
	printf("�� ���α׷��� ������ ���� ���� �� �ڼ��� ������ �˰� �����ø� ������ ����Ʈ�� ���ʽÿ�\n");
	Sleep(700);
	printf("������ ����Ʈ : kgw2007.cf\n");
	Sleep(700);
	printf("�� ���� 15�� �Ŀ� �������� ����ȭ������ �̵��մϴ�.\n");
	Sleep(15000);
	PlaySound(TEXT("data/song/main_bgm1.wav"), NULL, SND_ASYNC | SND_LOOP); // ������ main_bgm1.wav Ʋ��
}