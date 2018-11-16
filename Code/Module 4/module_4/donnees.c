#include <stdio.h>
#include <stdlib.h>
#include "donnees.h"
#define NUMBER_OF_LINES 7

void openFile(Data data){
    FILE *file = NULL;
    file = fopen("file.csv", "r");
    if(file != NULL){
        stockFile(file, &data);
    }else{
        printf("Error can't read csv file");
    }
    fclose(file);
}
void stockFile(FILE* file, Data *data){
    int numberLine = NUMBER_OF_LINES;
    char tab[10];
    data = malloc(sizeof(Data)*numberLine);
    if(data != NULL){
       for(int i = 0;  i < numberLine; i++){
        fgets(tab, 10, file);
        automate(tab, *data, i);
    }
    }else{
         printf("ERROR !");
        exit(0);
    }
}

void automate(char tab[10],Data data, int u){
    char tabPulse[10];
    char tabTime[10];
    int n = 0;
    int i = 0;
    while(tab[i] != ';'){
        tabPulse[i] = tab[i];
        i++;
    }
    i++;
    while((tab[i] != '\n')||(tab[i] != EOF)){
        tabTime[n] = tab[i];
        i++;
        n++;
    }
    (datas[u]).pulse = atoi(tabPulse);
    (datas[u]).time = atoi(tabTime);
}
