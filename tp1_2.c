#include <stdio.h>

int cuadrado(int num); // a)
void cuad(int num); // b)
void mostrar(int num); // c)
void invertir(int *a, int *b); // d)
void orden(int *a, int *b); // e)

int main() {
    int numero = 3, resultado;

    // a)
    resultado = cuadrado(numero);
    printf("El cuadrado del numero 3 es: %d\n",resultado);

    // b)
    cuad(numero);

    // c)
    mostrar(numero);

    /////////////////

    // d)
    int x, y;
    printf("Ingrese los valores a invertir. Primer valor x: ");
    scanf("%d",&x);
    printf("Segundo valor y: ");
    scanf("%d",&y);

    invertir(&x, &y);

    printf("Valor de x en la variable y: %d\n",y);
    printf("Valor de y en la variable x: %d\n",x);

    ///////////////

    // e)
    int r, s;
    printf("Ingrese los valores a ordenar. Primer valor r: ");
    scanf("%d",&r);
    printf("Segundo valor s: ");
    scanf("%d",&s);

    invertir(&r, &s);

    printf("Valor mas chico en la variable r: %d\n",r);
    printf("Valor mas grande en la variable s: %d\n",s);

    //getchar(); solo poner en caso que se cierre la consola CMD al debugear

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
void invertir(int *a, int *b) {
    int c;
    c = *a;
    *a= *b;
    *b = c;
}

// e)
void orden(int *a, int *b) {
    if (*a > *b)
    {
        int aux;
        aux = *a;
        *a = *b;
        *b = aux;
    }
}