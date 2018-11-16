#include <stdio.h>
#include <stdlib.h>
#include "action.h"
#include "donnees.h"
#define NUMBER_OF_LINES 7



void displayAllInOrder (Data data[])
{
    for (int i = 0; i< NUMBER_OF_LINES; i++){
        printf("%d ; %d\n", (data[i]).pulse, (data[i]).time);
    }
}


void increasingPulse(Data datas[])
{
    int stop;
    Data Data;
    int a = NUMBER_OF_LINES;
    do{
        int i;
        stop = 0;
        for(i = 0;i<a-1;i++){
            if((datas[i]).pulse > (datas[i+1]).pulse){
                Data = (datas[i]);
                (datas[i]) = (datas[i+1]);
                (datas[i+1]) = Data;
                stop = 1;
            }
        }
    }while(stop == 1);
}

void increasingTime(Data datas[])
{
    int stop;
    Data Data;
    int a = NUMBER_OF_LINES;
    do{
        int i;
        stop = 0;
        for(i = 0;i<a-1;i++){
            if((datas[i]).time > (datas[i+1]).time){
                Data = (datas[i]);
                (datas[i]) = (datas[i+1]);
                (datas[i+1]) = Data;
                stop = 1;
            }
        }
    }while(stop == 1);
}

void decreasingPulse(Data datas[])
{
    int stop;
    Data Data;
    int a = NUMBER_OF_LINES;
    do{
        int i;
        stop = 0;
        for(i = 0;i<a-1;i++){
            if((datas[i]).pulse < (datas[i+1]).pulse){
                Data = (datas[i]);
                (datas[i]) = (datas[i+1]);
                (datas[i+1]) = Data;
                stop = 1;
            }
        }
    }while(stop == 1);
}

void decreasingTime(Data datas[])
{
    int stop;
    Data Data;
    int a = NUMBER_OF_LINES;
    do{
        int i;
        stop = 0;
        for(i = 0;i<a-1;i++){
            if((datas[i]).time < (datas[i+1]).time){
                Data = (datas[i]);
                (datas[i]) = (datas[i+1]);
                (datas[i+1]) = Data;
                stop = 1;
            }
        }
    }while(stop == 1);
}

void displayIncreasingPulse(Data datas [])
{
    increasingPulse(datas);
    for (int i = 0; i< NUMBER_OF_LINES; i++){
        printf("%d ; %d\n", (datas[i]).pulse, (datas[i]).time);
    }
}

void displayIncreasingTime(Data datas[])
{
    increasingTime(datas);
    for (int i= 0; i< NUMBER_OF_LINES; i++){
        printf("%d ; %d\n", (datas[i]).pulse, (datas[i]).time);
    }
}

void displayDecreasingPulse (Data datas[])
{
    decreasingPulse(datas);
    for (int i= 0; i< NUMBER_OF_LINES; i++){
        printf("%d ; %d\n", (datas[i]).pulse, (datas[i]).time);
    }
}

void displayDecreasingTime (Data datas[])
{
    decreasingTime (datas);
    for (int i= 0; i< NUMBER_OF_LINES; i++){
        printf("%d ; %d\n", (datas[i]).pulse, (datas[i]).time);
    }
}

void average (Data datas[], int max, int min)
{
    increasingTime(datas);
    int i = 0;
    int j = 0;
    int s = 0;
    int a = 0;
    int b = 0;
    do {
        a = (datas[i]).time;
        i++;
    } while (a<min);
    do {
        b = (datas[j]).time;
        j++;
    } while (b<max);
    for (int n = i; n<=j; n++){
        s = s + (datas[n]).pulse;
    }
    int m  = (s/(j-i));
    printf("The average pulse between %d and %d is %d\n", min, max, m);
}

void displayForASpecificTime (Data datas[], int time)
{
    int i = 0;
    int a =0;
    do {
        a = (datas[i]).time;
        i++;
    } while ((a != time)||(i != NUMBER_OF_LINES+1));
    if (a == time){
        printf("The pulse corresponding to this time is %d", (datas[i]).pulse);
    } else {
        printf("There is no data corresponding to this data");
    }

}

void displayNbLine()
{
    int a = NUMBER_OF_LINES;
    printf("There are %d lines", a);
}

void displayBiggest (Data datas[])
{
    int a = (datas[0]).pulse;
    for (int i = 1; i<NUMBER_OF_LINES; i++){
        if (a<(datas[i]).pulse){
            a = (datas[i]).pulse;
        }
    }
    printf("The biggest pulse is %d\n", a);
}

void displaySmallest (Data datas[])
{
    for (int i = 1; i<NUMBER_OF_LINES; i++){
        int a = (datas[0]).pulse;
        if (a>(datas[i]).pulse){
            a = (datas[i]).pulse;
        }
    }
}
