#pragma once

// ��� �ҽ��ڵ忡 �� ��������� ����մϴ�.
// ��� �ҽ��ڵ��� ù �ٿ� �� �ڵ带 �־�� �մϴ�. -> #include "main_headfile.h"
// ��� �ҽ��ڵ��� �ι�° �ٿ� ���ڵ带 �־�� �մϴ�. -> #include "main_function.h"
// ��� �Լ��� ������ ���⿡ �ֽ��ϴ�. 

#ifndef __MAIN_FUNCTION_H_KGW__
#define __MAIN_FUNCTION_H_KGW__

#define ROUNDING(x, dig) ( floor((x) * pow(float(10), dig) + 0.5f) / pow(float(10), dig) )

void SetColor(int color, int bgcolor);
void gotoxy(short x, short y);
void CursorView(char show);
void clear_lines(int y, int strlength); // y�ٿ��� stregth���� ��ŭ ���ڰ� �����˴ϴ�!
void print_start_screen(); // ù ȭ�� ��� ( ó���� ����� ��)
void main_print(int case_print); // ����ȭ���� ����ȭ�� ��¿� ���Ǵ� �Լ�
int select_main(); // ����ȭ���� ����ȭ�� ó��
int keyboard_input(); // ȭ��ǥ Ű������ �Է��� ó���մϴ�.
void error(); // �������� �޴���� �ڵ����Ḧ �����ϴ� �Լ��Դϴ�.
void word_practice(); // �ܾ� ����
void short_sentence_practice();
void Introduction_of_this_program();
int random(int range);
#endif
