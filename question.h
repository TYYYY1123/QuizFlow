#ifndef QUESTION_H
#define QUESTION_H


#define MAX_QUESTIONS 100


typedef struct
{
    char question[200];

    char options[4][100];

    char answer;

}Question;



int loadQuestions(Question questions[]);


#endif