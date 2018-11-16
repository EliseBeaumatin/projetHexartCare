#ifndef ACTION_H_INCLUDED
#define ACTION_H_INCLUDED
#include "donnees.h"

void displayAllInOrder (Data data[]);
void increasingPulse(Data data[]);
void increasingTime(Data data[]);
void decreasingPulse(Data data[]);
void decreasingTime(Data data[]);
void displayIncreasingPulse(Data data []);
void displayIncreasingTime(Data data[]);
void displayDecreasingPulse (Data data[]);
void displayDecreasingTime (Data data[]);
void average (Data data[], int max, int min);
void displayForASpecificTime (Data data[], int time);
void displayNbLine();
void displayBiggest (Data data[]);
void displaySmallest (Data data[]);



#endif // ACTION_H_INCLUDED
