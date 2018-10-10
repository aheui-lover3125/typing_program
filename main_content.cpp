#include "main_headfile.h" //  ������� ���� ��� ����
#include "main_function.h" //  �Լ� ���� ��� ����

// ����ȭ�� ó���� ����ϴ� �Լ��� ���⿡ �ֽ��ϴ�.
int select_main() {
	int loc = 1;
	main_print(1);
	while (1) {
		int key_input = keyboard_input(); // Ű���� �Է� ���� �޴´�.
		 
		if (key_input == 6) { // �޴��� ��ġ��  �����Ѵ�..
			if (loc == 3) loc = 1;
			else loc++;
		}
		else if (key_input == 4) {
			if (loc == 1) loc = 3;
			else loc--;
		}
		else if (key_input == 0) {
			switch (loc) {
				case 1:
					word_practice();
					break;
				case 2:
					short_sentence_practice();
					break;
				case 3:
					Introduction_of_this_program();
					break;
				default:
					error();
			}
		}
		main_print(loc);
		Sleep(500);
	}
	
}

void word_practice() {
	system("cls");
	PlaySound(TEXT("main_bgm2.wav"), NULL, SND_ASYNC | SND_LOOP);
	int wordn,correct = 0;
	double accuracy;
	FILE *wordinput = fopen("word_practice.dat", "rt");
	fscanf(wordinput, "%d", &wordn);
	char word[3005][12],now[12];

	for(int i=0;i<wordn;i++){
		fscanf(wordinput, "%s", word[i]);
	}

	fclose(wordinput);
	int randomn = random(wordn - 5);
	int length_word;
	int length_total = 0;
	double time_total = 0;
	int i;

	accuracy = 0;
	time_t time_now = time(NULL); //�ð� ����
	CursorView(1);
		for (i = 1; i <= 20; i++) {
		randomn = random(wordn - 5);
		length_word = strlen(word[randomn]) / 2;
		length_total += length_word;
		system("cls");
		printf("-------------------- ��Ȯ�� : %.1f%% ------------------- ����� : %d%% ------------------\n",accuracy,5 * (i-1));
		printf("\n\n                                      ���� ġ�� �ܾ� \n");
		printf("\n\n------------------------------[                           ]------------------------------\n");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		printf("                                    ���� �Է��Ͻ� �ܾ�\n");
		printf("\n\n------------------------------[                           ]------------------------------\n\n\n");
		gotoxy(40, 6);
		printf("%s",word[randomn]);
		gotoxy(40, 26);
		CursorView(1);
		scanf("%s",now);
		CursorView(0);
		if(!strcmp(now, word[randomn])) correct += 1;
		accuracy = (double)((double)correct / (double)i) * 100;
	}
	CursorView(0);
	time_now = time(NULL) - time_now; //�ð� ����
	system("cls");
	gotoxy(0, 0);
	printf("                         ---   ���� ������ �Ϸ� �Ǿ����ϴ�.   ---\n");
	printf("                              ---   ������ ���� : %d��   ---\n", correct);
	printf("                                ---   ��Ȯ�� : %.1f%%   ---\n", accuracy);
	printf("                              ---   ���� �ð� : %lld��   ---\n", time_now);
	printf("                            6�� �� �޴� ����ȭ������ �̵��˴ϴ�.\n ");
	Sleep(6000);
	if (i != 21) error();
	PlaySound(TEXT("main_bgm1.wav"), NULL, SND_ASYNC | SND_LOOP);
}

void short_sentence_practice() {
	system("cls");
	PlaySound(TEXT("main_bgm2.wav"), NULL, SND_ASYNC | SND_LOOP);
	int wordn = 1261, correct = 0;
	double accuracy;
	char word[3005][100], now[100];
	FILE *sentenceinput = fopen("sentence_practice.dat", "rt");
	for (int i = 0; i < wordn; i++) {
		fgets(word[i], sizeof(word[i]), sentenceinput);
	}
	fclose(sentenceinput);

	int randomn = random(wordn - 5);
	double time_total = 0;
	int i;

	accuracy = 0;
	time_t time_now = time(NULL); //�ð� ����
	CursorView(1);
	for (i = 1; i <= 20; i++) {
		randomn = random(wordn - 5);
		system("cls");
		printf("-------------------- ��Ȯ�� : %.1f%% ------------------- ����� : %d%% ------------------\n", accuracy, 5 * (i - 1));
		printf("\n                               ����  �Է��ϼž� �Ͻ� ����\n");
		printf("-[                                                                                     ]-\n");
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		printf("\n                                    ���� �Է��Ͻ� ����\n");
		printf("-[                                                                                     ]-\n");
		gotoxy(12, 3);
		printf("%s", word[randomn]);
		gotoxy(12, 29);
		CursorView(1);
		fgets(now, sizeof(now), stdin);
		CursorView(0);
		if (!strcmp(now, word[randomn])) correct += 1;
		accuracy = (double)((double)correct / (double)i) * 100;
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
	if (i != 21) error();
	PlaySound(TEXT("main_bgm1.wav"), NULL, SND_ASYNC | SND_LOOP);
}

void Introduction_of_this_program() {
	PlaySound(TEXT("main_bgm2.wav"), NULL, SND_ASYNC | SND_LOOP);
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
	PlaySound(TEXT("main_bgm1.wav"), NULL, SND_ASYNC | SND_LOOP);
}