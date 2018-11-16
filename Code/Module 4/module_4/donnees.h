#ifndef DONNEES_H_INCLUDED
#define DONNEES_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

typedef struct Data{
    int pulse;
    int time;
} Data;

Data datas[1000];


void openFile(Data data);
void stockFile(FILE* file, Data *data);
void automate(char tab[10],Data data, int u);

#endif // DONNEES_H_INCLUDED
