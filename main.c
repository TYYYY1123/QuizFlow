#include <stdio.h>
#include <windows.h>
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int choice;
    char answer;
    int score = 0;
    printf("welcome to quizflow\n");
    printf("学习辅助系统启动成功！\n");
    printf("1.开始答题\n");
    printf("2.退出系统\n");
    printf("请输入你的选择：\n");
    scanf(" %d", &choice);
    if (choice ==1)
    {
        printf("开始答题！\n");
        printf ("第1题:C语言中,用于存储整数的数据类型是?\n");
        printf ("A. int\n");
        printf ("B. float\n");
        printf ("C. char\n");
        printf ("D.double\n");
        printf ("请输入你的答案(A/B/C/D):\n");
        scanf(" %c", &answer);
        if (answer =='A' || answer =='a')
        {
            printf("回答正确！\n");
            score = score +1;
        }
        else
        {
            printf("回答错误!正确答案是A\n");
        }
        printf("\n第2题：C语言中，用于存储单个字符的数据类型是？\n");
printf("A. int\n");
printf("B. char\n");
printf("C. float\n");
printf("D. double\n");

printf("请输入答案：");
scanf(" %c", &answer);

if (answer == 'B' || answer == 'b')
{
    printf("回答正确！\n");
    score = score + 1;
}
else
{
    printf("回答错误！正确答案是B\n");
}
printf("\n第3题：scanf函数主要用于什么？\n");
printf("A. 输出数据\n");
printf("B. 判断条件\n");
printf("C. 输入数据\n");
printf("D. 定义变量\n");

printf("请输入答案：");
scanf(" %c", &answer);

if (answer == 'C' || answer == 'c')
{
    printf("回答正确！\n");
    score = score + 1;
}
else
{
    printf("回答错误！正确答案是C\n");
}
printf("\n答题结束！\n");
printf("答对：%d / 3\n", score);
printf("最终得分：%d 分\n", score * 100 / 3);
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