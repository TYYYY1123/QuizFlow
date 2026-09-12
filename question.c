#include <stdio.h>
#include "question.h"


int loadQuestions(Question questions[])
{
    FILE *fp;
    
    fp = fopen("data/questions.txt","r");


    if(fp == NULL)
    {
        printf("无法打开题库文件！\n");
        return 0;
    }


    int count = 0;


    while(!feof(fp))
    {

        fgets(questions[count].question,
              200,
              fp);


        fgets(questions[count].options[0],
              100,
              fp);


        fgets(questions[count].options[1],
              100,
              fp);


        fgets(questions[count].options[2],
              100,
              fp);


        fgets(questions[count].options[3],
              100,
              fp);


        fscanf(fp,
               "%c\n",
               &questions[count].answer);


        count++;

    }


    fclose(fp);


    return count;
}