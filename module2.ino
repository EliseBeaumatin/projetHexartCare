#include "heart.h"
#include "param.h"

void setup() {
  for(int i =pinMin; i<=pinMax;i++){
    pinMode(i, OUTPUT);
    digitalWrite(i,LOW);
  }
}

void loop() {
int menu = CHOICE;
int para = OTHER_NUMBER;
  switch (menu)  {
    case 1: 
    allLed ();
    break;
    case 2:
    oneOnTwo();
    break;
    case 3 :
    oneOnThree();
    break;
    case 4 : 
    choice (para);
    break;
    case 5 : 
    worm ();
    break;
    case 6 :
    oneOnX (para);
    break;
    case 7 :
    randomLeds ();
    break;
    default :
    break; 
  }
  
}
