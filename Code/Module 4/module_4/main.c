#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "donnees.h"
#include "action.h"

int main()
{
    Data data;
    FILE* file = NULL;
    int n = 0;
    firstMenu();
    scanf("%d", &n);
    //stockFile(&file, &data);
    secondMenu(n,&data);
    free(&data);
    return 0;
}
