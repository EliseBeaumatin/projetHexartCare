#include <stdio.h>
#include <stdlib.h>
#include "menu.h"

void menu()
{
  printf("------------Menu------------\n\n");
  printf("1 -> All leds at the same time\n");
  printf("2 -> 1 led on 2 \n");
  printf("3 -> 1 led on 3 \n");
  printf("4 -> Choose your LED\n");
  printf("5 -> Worm lightening\n");
  printf("6 -> 1 led on ... \n");
  printf("7 -> 1 led random\n");
  //printf("8 -> ");
  printf("0 -> Exit\n\n");
}
/*
void parameter(int *choice, int *param)
{
    if (choice == 4){
        printf("Which LED do you want to turn on?");
        scanf("%d", &param);
    } else if (choice == 6){
        printf("One led on ... Choose a number between 2 and 9");
        scanf("%d", &param);
    } else {
        *param = 0;
    }
}
*/
