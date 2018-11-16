#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "generationCode.h"

int main()
{
  menu();
  int choice = 0;
  int param = 0;

  do{
  scanf("%d", &choice);
  //parameter(&choice, &param);
  if (choice == 4){
        printf("Which LED do you want to turn on?\n");
        scanf("%d", &param);
    } else if (choice == 6){
        printf("One led on ... Choose a number between 2 and 9\n");
        scanf("%d", &param);
    } else {
        param = 0;
    }
  generationCode(choice, param);
  }
  while(choice >0 || choice <7);

}
