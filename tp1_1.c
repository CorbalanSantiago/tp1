#include <stdio.h>

int main()
{
    printf("hola mundo\n\n");

    int num = 10;
    int *pNum = &num;

    printf("1) Contenido del puntero: %p\n", pNum);
    printf("2) Direccion almacenada por el puntero: %p\n", pNum);
    printf("3) Direccion de memoria de la variable: %p\n", &num);
    printf("4) Direccion de memoria del puntero: %p\n", &pNum);
    printf("5) Tamanio de memoria de la variable: %llu bytes\n", sizeof(num));
    
    return 0;
}