#include <stdio.h>

// a) 
int cuadrado(int n) 
{
    return n * n;
}

// b) 
void cuadradoVoid(int n) 
{
    printf("El cuadrado (desde void) es: %d\n", n * n);
}

// c) 
void mostrarDatos(int n) 
{
    printf("Direccion de la variable: %p\n", &n);
    printf("Contenido de la variable: %d\n", n);
}

// d) 
void invertir(int *a, int *b) 
{
    int aux = *a;
    *a = *b;
    *b = aux;
}

// e) 
void orden(int *a, int *b) 
{
    if (*a > *b) 
    {
        invertir(a, b); 
    }
}

int main() 
{
    int x, y;

    printf("Ingrese el valor 1: ");
    scanf("%d", &x);
    printf("Ingrese el valor 2: ");
    scanf("%d", &y);

    printf("El cuadrado de %d es %d\n", x, cuadrado(x));

    mostrarDatos(x);

    printf("Antes de invertir: valor 1= %d, valor 2= %d\n", x, y);
    invertir(&x, &y);
    printf("Despues de invertir: valor 1= %d, valor 2= %d\n", x, y);

    orden(&x, &y);
    printf("Ordenados de menor a mayor: menor= %d, mayor= %d\n", x, y);

    return 0;
}