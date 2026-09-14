#include <stdio.h>
#include <stdlib.h>
#include "quiz.h"
#ifdef _WIN32
#include <windows.h>
#endif


int main()
{
    #ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
#endif

    int choice;


    printf("====================\n");
    printf(" Welcome to QuizFlow\n");
    printf("====================\n");


    printf("1.开始刷题\n");
    printf("2.导入题库\n");
    printf("3.退出系统\n");


    printf("请选择：");

    scanf("%d",&choice);



    if (choice == 1)
{
    startQuiz();
}
else if (choice == 2)
{
    printf("正在导入题库，请稍候……\n");
    system("python importer/import_questions.py");
}
else if (choice == 3)
{
    printf("退出系统\n");
}
else
{
    printf("输入有误，请输入1、2或3。\n");
}


    return 0;

}