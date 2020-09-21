#include<stdio.h>
#include<stdlib.h>

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
            break;   
        case '3':
            break;
        case '4':
        default:
            break;
        }
        fflush(stdin);
    }while (op !=0);
    return 0;
}

