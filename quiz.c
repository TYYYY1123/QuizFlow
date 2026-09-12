#include "quiz.h"
#include "question.h"
#include "score.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void shuffleQuestions(Question questions[], int count)
{
    srand(time(NULL));

    for(int i=count-1;i>0;i--)
    {
        int j=rand()%(i+1);

        Question temp=questions[i];

        questions[i]=questions[j];

        questions[j]=temp;
    }
}

void startQuiz()
{
    Question questions[MAX_QUESTIONS];

    int count = loadQuestions(questions);

    shuffleQuestions(questions,count);

    int score = 0;
    int mode;
    int practiceCount;

printf("\n请选择练习模式：\n");
printf("1. 快速练习（5题）\n");
printf("2. 标准练习（10题）\n");
printf("3. 全部题目\n");
printf("请输入选择：");

scanf("%d", &mode);

if(mode == 1)
{
    practiceCount = count < 5 ? count : 5;
}
else if(mode == 2)
{
    practiceCount = count < 10 ? count : 10;
}
else if(mode == 3)
{
    practiceCount = count;
}
else
{
    printf("输入错误！\n");
    return;
}



  for(int i = 0; i < practiceCount; i++)
    {

        printf("\n第%d题：\n",
               i+1);


        printf("%s",
               questions[i].question);


        printf("%s",
               questions[i].options[0]);

        printf("%s",
               questions[i].options[1]);

        printf("%s",
               questions[i].options[2]);

        printf("%s",
               questions[i].options[3]);



        char answer;


        printf("请输入答案(A/B/C/D):");

        scanf(" %c",&answer);



        // 将小写字母转换成大写
if(answer >= 'a' && answer <= 'z')
{
    answer = answer - 'a' + 'A';
}


if(answer == questions[i].answer)
{
    printf("回答正确！\n");
    score++;
}
else
{
    printf("回答错误！正确答案:%c\n",
           questions[i].answer);
}
    }
    printf("答题结束！\n");
    printf("你的得分：%d/%d\n", score, practiceCount);
   
    saveScore(score);

}