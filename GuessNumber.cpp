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
            printf("请输入1或2，请重新输入\n");
        }
    }
    return 0;
}

void menu() {
    printf("\t\t\t\t欢迎来到猜数字游戏\n\n");
    printf("\t\t\t\t请输入下列菜单的编号\n");
    printf("\t\t\t\t1 开始游戏\n");
    printf("\t\t\t\t2 退出游戏\n");
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
        printf("请输入一个数字：");
        scanf("%d", &userNumber);

        if (number == userNumber) {
            printf("恭喜您，答对了！\n");
            isOver = true;
        }
        if (guessNum++ >= 2) {
            printf("您答错超过%d次，此局游戏结束！\n", guessNum);
            isOver = true;
        }
        else {
            printf("您猜%s了\n", userNumber < number ? "小" : "大");
        }
        
    }
    


}