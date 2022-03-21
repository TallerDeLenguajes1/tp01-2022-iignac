#include <stdio.h>

int main() {
    int a = 5, *punt;

    punt = &a;

    printf("hola mundo\n");
    printf("Contenido del puntero: %d\n",*punt);
    printf("Direccion de memoria almacenada por el puntero: %p\n",punt);
    printf("Direccion de memoria de la variable a: %p\n",&a);
    printf("Direccion de memoria del puntero: %p\n",&punt);
    printf("Tamanio de memoria utilizado por la variable a: %d\n",sizeof(a));//sizeof(): función que recibe como único parámetro o el nombre de una variable, o el nombre de un tipo de datos, y devuelve su tamaño en bytes

}