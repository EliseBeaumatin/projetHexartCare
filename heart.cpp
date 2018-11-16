#include "heart.h" 
#include <Arduino.h>

int wait()
{
  int a = 60000/80;
  int b = 60000/55;
  int c = random(a,b);
  return c;
}

void allLed (){
  for (int i=pinMin; i<=pinMax; i++){
    digitalWrite (i,HIGH);
  }
  delay (200);
  for (int i=pinMin; i<=pinMax; i++){
    digitalWrite (i,LOW);
  }
  delay (wait());
}


 void oneOnTwo(){
   int i = 2;
    while (i<=pinMax){
    digitalWrite (i,HIGH);
    delay (200);
    digitalWrite (i,LOW);
    delay (wait ());
    i = i+2;
}
}
 
void oneOnThree (){
  int i = 2;
    while (i<=pinMax){
    digitalWrite (i,HIGH);
    delay (200);
    digitalWrite (i,LOW);
    delay (wait());
    i = i+3;
}
}

void choice (int x) {
  digitalWrite (x,HIGH);
  delay(200);
  digitalWrite(x,LOW);
  delay (wait());
}

void worm (){
  for (int i=pinMin; i<=pinMax; i++){
   digitalWrite (i,HIGH);
   delay (200);
   digitalWrite (i,LOW);
   delay (wait());
  }
}

void oneOnX (int x){
   int i = 2;
    while (i<=pinMax){
    digitalWrite (i,HIGH);
    delay (200);
    digitalWrite (i,LOW);
    delay (wait());
    i = i+x;
  } 
}

void randomLeds (){
  int randNb;
  randNb = random(2,11);
  digitalWrite(randNb, HIGH);
  delay(wait());
  digitalWrite(randNb, LOW);
}
