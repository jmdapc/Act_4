#include<stdio.h>
#include<stdlib.h>
#include "personaje.h"

void c_enteros(){
    int enteros[5];
    float prom;
    int sum;
    //Para capturar enteros
    for (size_t i=0;i<5;i++){
        scanf("%i",&enteros[i]);
    }
    for (size_t i=0;i<5;i++){
        printf("%i\n",enteros[i]);
    }
    //La suma
    for (size_t i=0;i<5;i++){
       sum= sum+enteros[i];
    }
    printf("La suma es: %i\n",sum);
    //El promedio
    printf("El promedio es: %f",sum/5.0);
}

void mostrar(int n, char cadena[]){
    for(size_t i=0;i<n;i++){
        printf("%s",cadena);
    }
}

int main(){
    char op;
    char cadena[20];
    int n;

    do{
        printf("1.- Capturar enteros\n");
        printf("2.- Mostrar cadena n veces\n");
        printf("3.- Agregar personaje\n");
        printf("4.- Mostrar personajes\n");
        printf("0.- Salir\n");
        scanf("%c",&op);

        switch (op)
        {
        case '1':
            c_enteros();
            break;
        case '2':
            printf("Escribe una cadena de 20 o menos caracteres\n");
            fflush(stdin);
            fgets(cadena,sizeof(cadena),stdin);
            printf("n: ");
            scanf("%i",&n);
            mostrar(n,cadena);
            break;   
        case '3':
            c_persona();
            break;
        case '4':
            m_personajes();
            break;
        default:
            break;
        }
        fflush(stdin);
    }while (op !=0);
    return 0;
}

