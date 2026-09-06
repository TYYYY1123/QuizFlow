#include <stdio.h>
#include <windows.h>
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int choice;
    printf("welcome to quizflow\n");
    printf("学习辅助系统启动成功！\n");
    printf("1.开始答题\n");
    printf("2.退出系统\n");
    printf("请输入你的选择：\n");
    scanf(" %d", &choice);
    if (choice ==1)
    {
        printf("开始答题！\n");
    }
    else if (choice ==2)
    {
        printf("退出系统！\n");
    }
    else
    {
        printf("输入错误！\n");
    }
    return 0;
}