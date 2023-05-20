#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menu();
void startGame();

int main()
{
    int m;
    bool isExit = false;

    while (!isExit) {
        menu();
        scanf("%d", &m);
        if (m == 1) {
            startGame();
        }
        else if (m == 2) {
            isExit = true;
        }
        else {
            printf("������1��2������������\n");
        }
    }
    return 0;
}

void menu() {
    printf("\t\t\t\t��ӭ������������Ϸ\n\n");
    printf("\t\t\t\t���������в˵��ı��\n");
    printf("\t\t\t\t1 ��ʼ��Ϸ\n");
    printf("\t\t\t\t2 �˳���Ϸ\n");
}

void startGame() {
    system("CLS");

    srand(time(NULL));
    int number = rand() % 10 + 1;
    int guessNum = 0;
    int userNumber = -1;
    bool isOver = false;

    while (!isOver) {

        printf("%d\n", number);
        printf("������һ�����֣�");
        scanf("%d", &userNumber);

        if (number == userNumber) {
            printf("��ϲ��������ˣ�\n");
            isOver = true;
        }
        if (guessNum++ >= 2) {
            printf("�������%d�Σ��˾���Ϸ������\n", guessNum);
            isOver = true;
        }
        else {
            printf("����%s��\n", userNumber < number ? "С" : "��");
        }
        
    }
    


}