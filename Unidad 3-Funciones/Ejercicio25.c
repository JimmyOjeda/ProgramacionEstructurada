#include <stdio.h>
#include <stdlib.h>

/*
Autor: Alejandro Torre Reyes
Entradas: una letra, minuscula o mayuscula
Salidas: El codigo ASCII para esa letra
Proceso: Escribir un programa para mostrar los c�digos ASCII de las letras
may�sculas y min�sculas.
*/
int main()
{
    //Entradas
    char letra;
    int cod;
    printf("Ingresa una letra \n");
    scanf("%c",&letra);

    //Proceso
    cod=("%d",letra);

    //Salida
    printf("El codigo ASCII para %c es %d",letra,cod);
    return 0;
}
