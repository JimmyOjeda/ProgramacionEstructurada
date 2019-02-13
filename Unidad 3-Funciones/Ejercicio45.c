#include <stdio.h>
#include <stdlib.h>

/*
Autor: Alejandro Torre Reyes
Entrada: un numero n entero positivo
Salida: Comprueba si el numero ingresado es primo o no
Proceso: Se desea saber si un n�mero dado es primo o no. Escribir el programa. (Un
n�mero es primo si s�lo se puede dividir entre el mismo y la unidad, si el
n�mero es divisible por otros n�meros entonces no es primo).
*/
int read();
int validacion();
int main()
{
    int n, primo;
    n = read();
    primo = validacion(n);

    if(primo == 2){
        printf("%d Es un numero primo", n);
    } else{
        printf("%d No es un numero primo", n);
    }
    return 0;
}

int read(){
    int w;
    printf("Ingrese n \n");
    scanf("%d", &w);
    return w;
}

int validacion(int x){
    int i;
    int cont = 0;
    for(i=1; i<=x; i++){
        if(x%i==0){
            cont += 1;
        }
    }
    return cont;
}
