#include <stdio.h>

int cuadrado(int num); // a)
void cuad(int num); // b)
void mostrar(int num); // c)
void invertir(int a, int b); // d)
void orden(int a, int b); // e)

int main() {
    int numero = 3, resultado, a, b;

    // a)
    resultado = cuadrado(numero);
    printf("El cuadrado del numero 3 es: %d\n",resultado);

    // b)
    cuad(numero);

    // c)
    mostrar(numero);

    /////////////////

    printf("Ingrese el valor de la variable entera a: ");
    scanf("%d",&a);
    printf("Ingrese el valor de la variable entera b: ");
    scanf("%d",&b);

    // d)
    invertir(a, b);

    // e)
    orden(a, b);

    return 0;
}

// a)
int cuadrado(int num) {
    int cuadrado;
    cuadrado = num * num;
    return cuadrado;
}

// b)
void cuad(int num) {
    printf("El cuadrado del numero 3 es: %d\n",num*num);
}

// c)
void mostrar(int num) {
    printf("La direccion de memoria de la variable numero es: %p\n",&num);
    printf("El contenido de la variable numero es: %d\n",num);
}

// d)
void invertir(int a, int b) {
    int c;
    c = a;
    a = b;
    b = c;
    printf("Valor de a en la variable b: %d\n",b);
    printf("Valor de b en la variable a: %d\n",a);
}

// e)
void orden(int a, int b) {
    int aux;
    if (a > b)
    {
        aux = a;
        a = b;
        b = aux;
    }
    printf("Valor mas chico en la variable a: %d\n",a);
    printf("Valor mas grande en la variable b: %d\n",b);
}