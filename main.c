#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>

int main()
{

    char nombre[20];// = {"Mariana Ines"};
    char apellido[20];// = {"PEREz"};
    char nombreCompleto[40];
    int cant;
    int i;

    printf("\nIngrese nombre: ");
    fflush(stdin);
    fgets(nombre, 20, stdin);


    printf("\nIngrese apellido: ");
    fflush(stdin);
    fgets(apellido, 20, stdin);


    strcpy(nombreCompleto, nombre);
    strcat(nombreCompleto, " ");
    strcat(nombreCompleto, apellido);
    strlwr(nombreCompleto);
    nombreCompleto[0] = toupper(nombreCompleto[0]);

    cant = strlen(nombreCompleto);

    for(i=0; i<cant; i++)
    {
        if(nombreCompleto[i] == ' ')
        {
            nombreCompleto[i+1] = toupper(nombreCompleto[i+1]);
        }
    }

    printf("\n%s ", nombreCompleto);
    return 0;
}
