#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "action.h"
#include "donnees.h"

void firstMenu()
{
    int n =0;
    printf("MENU:\n");
    printf("Which action do you want to make?\n ");
    printf("1 - Display all data in order\n");
    printf("2 - Display all data in ascending order\n");
    printf("3 - Display all data in descending order\n");
    printf("4 - Display data for a specific time\n");
    printf("5 - Display the average of pulse for a specific time range\n");
    printf("6 - Display the number of lines in memory\n");
    printf("7 - Display the biggest pulse\n");
    printf("8 - Display the smallest pulse\n");
    printf("0 - EXIT\n");

}

void secondMenu (int n, Data *data[]){
    switch (n)
    {
    case 1 :
        displayAllInOrder(data);
        break;
    case 2 :
        {int a = 0;
        printf("Do you want this order for pulse or time?\nFor pulse, press 1, for time press 2\n");
        scanf("%d", &a);
        if (a == 1){
            displayIncreasingPulse(data);
        } else if (a == 2){
            displayIncreasingTime(data);
        } else {
            printf("ERROR\n");
        }
        }
        break;
    case 3 :
        {int a;
        printf("Do you want this order for pulse or time?\nFor pulse, press 1, for time press 2\n");
        scanf("%d", &a);
        if (a == 1){
            displayDecreasingPulse(data);
        } else if (a == 2){
            displayDecreasingTime(data);
        } else {
            printf("ERROR\n");
        }
        }
        break;

    case 4 :
        {int a = 0;
        printf("What is the time which you want to know the pulse?\n");
        scanf("%d", &a);
        displayForASpecificTime(data, a);
        }
        break;

    case 5 :
        {int min = 0;
        int max = 0;
        printf("What period do you want to know the average?\nWhat is the minimum?\n");
        scanf("%d", &min);
        printf("What is the maximum?\n");
        scanf("%d", &max);
        average(data, max, min);
        break;
        }

    case 6 :
        displayNbLine();
        break;

    case 7 :
        displayBiggest(data);
        break;

    case 8 :
        displaySmallest(data);
        break;

    case 0 :
        printf("Bye !!");
        break;
    }
}
