#include <stdio.h>

#include "quiz.h"


int main()
{

    int choice;


    printf("====================\n");
    printf(" Welcome to QuizFlow\n");
    printf("====================\n");


    printf("1.开始刷题\n");
    printf("2.退出系统\n");


    printf("请选择：");

    scanf("%d",&choice);



    if(choice==1)
    {

        startQuiz();

    }
    else
    {

        printf("退出系统\n");

    }


    return 0;

}