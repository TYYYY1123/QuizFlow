#include "score.h"
#include <stdio.h>
#include <time.h>


void saveScore(int score)
{

    FILE *fp = fopen("score.txt","a");


    if(fp == NULL)
    {
        printf("成绩保存失败！\n");
        return;
    }


    time_t now;

    time(&now);


    fprintf(fp,
            "时间:%s 得分:%d\n",
            ctime(&now),
            score);


    fclose(fp);


    printf("成绩保存成功！\n");

}