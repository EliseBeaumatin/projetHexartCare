#include <stdio.h>
#include <stdlib.h>
#include "generationCode.h"

void generationCode(int choice, int param){
    FILE* fichier = NULL;
    fichier = fopen("param.h", "w+");

    fprintf(fichier,"#define CHOICE %d\n#define OTHER_NUMBER %d\n", choice, param );
    fclose(fichier);
}
