//Hola
#include <iostream>
using namespace std;

int main (char *argv[])
{
int x;
int *apuntador = &x; //Creamos un apuntador a la memoria de x

cout << "Ingrese su edad: ";
cin >> *apuntador; //Almacenamos en la memoria el dato



if (*apuntador>= 18){
    cout << "Usted es mayor de edad \n";
    cout << "Su edad es: " << x << "\n";
    cout << "El espacio de la memoria: " << &apuntador << "\n";
}
else {
    cout << "Usted es menor de edad \n";
    cout << "Su edad es: " << x << "\n";
    cout << "El espacio de la memoria: " << &apuntador << "\n";
}
delete [] apuntador; //Despues de operar con punteros es necesario liberar memoria
apuntador = NULL;
    return 0;
}