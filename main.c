#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include "misFunciones.h"



int main()
{

    char nombre[20];
    char apellido[20];
    char nombreCompleto[40];

    printf("\nIngrese nombre: ");
    fflush(stdin);
    fgets(nombre, 20, stdin);
    removeNewLine(nombre);



    printf("\nIngrese apellido: ");
    fflush(stdin);
    fgets(apellido, 20, stdin);
    removeNewLine(apellido);


    strcpy(nombreCompleto, nombre);
    strcat(nombreCompleto, " ");
    strcat(nombreCompleto, apellido);
    strlwr(nombreCompleto);
    upInitialCharString(nombreCompleto);

    printf("\n\n%s", nombreCompleto);

    return 0;
}



