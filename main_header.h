#pragma once

// ��� �ҽ��ڵ忡 �� ��������� ����մϴ�.
// ��� �ҽ��ڵ��� ù �ٿ� �� �ڵ带 �־�� �մϴ�. -> #include "main_header.h"
// �ش����ϵ��� include ���� �Լ� ������ ���� �ֽ��ϴ�. 

#ifndef __MAIN_HEADER_H_KGW__
#define __MAIN_HEADER_H_KGW__

#pragma comment(lib, "winmm.lib")
#include <cstdio>
#include <stdlib.h>
#include <time.h>
#include <cstdio>
#include <cmath>
#include <windows.h>
#include <mmsystem.h>
#include <conio.h>


#define ROUNDING(x, dig) ( floor((x) * pow(float(10), dig) + 0.5f) / pow(float(10), dig) )


void clear_lines(int y, int strlength); // y�ٿ��� stregth���� ��ŭ ���ڰ� �����˴ϴ�!
void print_start_screen(); // ù ȭ�� ��� ( ó���� ����� ��)
void main_print(int case_print); // ����ȭ���� ����ȭ�� ��¿� ���Ǵ� �Լ�
int select_main(); // ����ȭ���� ����ȭ�� ó��
int keyboard_input(); // ȭ��ǥ Ű������ �Է��� ó���մϴ�.
void error(); // �������� �޴���� �ڵ����Ḧ �����ϴ� �Լ��Դϴ�.
void word_practice(); // �ܾ� ����
void 
#endif
