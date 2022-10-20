// ����������
#include <math.h>
#include <locale.h>
#include <stdio.h>
#include <string.h>

// ���������� �������� ����������
#include <windows.h>
#include <conio.h>

#define MENU_SIZE 3

// �������� �����, ������� ����� ����������

#define KEY_EXIT 27
#define KEY_ENTER 13
#define ARROW_KEY 224
#define KEY_SPACE 0
#define KEY_BACKSPACE 8

#define KEY_ARROW_RIGHT 77
#define KEY_ARROW_LEFT 75
#define KEY_ARROW_UP 72
#define KEY_ARROW_DOWN 80

// ���������� ������� �������
int main() {
    // ���������

    // ����� �������� ����������� ����
    system("title Application");

    // ������������� �������������� � �������� �������
    SetConsoleCP(1251);         // ��������� ������� �������� win-cp 1251 � ����� �����
    SetConsoleOutputCP(1251);   // ��������� ������� �������� win-cp 1251 � ����� ������

    // �������� ���������� ���� �� �������� � �������
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);

    // ���������� ������ ������� � ������� (� ����� ���� ������ ������)
    CONSOLE_CURSOR_INFO structCursorInfo;
    GetConsoleCursorInfo(hStdOut, &structCursorInfo);
    structCursorInfo.bVisible = FALSE;
    SetConsoleCursorInfo(hStdOut, &structCursorInfo);

    // ����� ����� ��� �� ���� �������
    SetConsoleTextAttribute(hStdOut, BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE);
    // ������� �����, ����� ��������� ����� �����������
    system("cls");

    // ���������� ����������
    int choose_pos;                    // ��������� �� ������� ���������� ������ ����
    int iKey;                          // ��������� �� �������� ������� �������
    int exit_flag;                     // ���� �� ���������� ���������
    COORD cursorPos;                   // ���������� ���������� �������, ����� ����� ��������� �����

    char* menu[MENU_SIZE] = { "Start", "Settings", "Exit" };

    // ������������ (���������� ���������) ����������
    exit_flag = 0;
    choose_pos = 0;

    while (!exit_flag) {
        /* 1. ����� ���� � ������������� */

        // ����� ������� � ��������� ���������
        system("cls");
        iKey = 67;
        cursorPos = (COORD){ 0, 0 };
        SetConsoleCursorPosition(hStdOut, cursorPos);

        // �������� ������ ������
        while (iKey != KEY_EXIT && iKey != KEY_ENTER) {
            switch (iKey) {
            case KEY_ARROW_UP:
                choose_pos--;
                break;
            case KEY_ARROW_DOWN:
                choose_pos++;
                break;
            }

            system("cls");

            // ������������ ������������� ����
            if (choose_pos < 0) { choose_pos = MENU_SIZE - 1; }
            if (choose_pos > MENU_SIZE - 1) { choose_pos = 0; }

            for (int i = 0; i < MENU_SIZE; i++) {
                cursorPos = (COORD){ 3, i };
                SetConsoleCursorPosition(hStdOut, cursorPos);
                printf("%s \n", menu[i]);
            }

            // ����������� ��������� �������
            cursorPos = (COORD){ 0, choose_pos };
            SetConsoleCursorPosition(hStdOut, cursorPos);
            printf("<<", iKey);
            cursorPos = (COORD){ strlen(menu[choose_pos]) + 3 + 1, choose_pos };
            SetConsoleCursorPosition(hStdOut, cursorPos);
            printf(">>");

            // �������� ������ ������ �������
            iKey = _getch();
        }

        /* 2. ������� ����� ��������� */
        switch (choose_pos) {
        case 0:
            system("cls");
            printf("Game part in development\n");
            system("pause");
            break;
        case 1:
            system("cls");
            printf("Settings part in development\n");
            system("pause");
            break;
        case 2:
            exit_flag = 1;
            break;
        }
    }

    // ����� ����������
    system("cls");
    printf("Goodbay!\n");

    // ���������� ���������
    system("pause");
    return 0;
}