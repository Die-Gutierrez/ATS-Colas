/*Ejercicio 1: Hacer un programa en C++, utilizando Colas que contenga el siguiente menú: 
1. Insertar un caracter a una cola
2. Mostrar todos los elementos de la cola
3. Salir*/
#include <iostream>

struct Nodo
{
    char dato;
    Nodo *siguiente;
};

void agregarCola(Nodo *&, Nodo *&, int);
void quitarCola(Nodo *&, Nodo *&, int &);
bool cola_vacia(Nodo *);

using namespace std;

int main()
{
    int op;

    do
    {
        cout<<"M-E-N-U"<<endl;
        cout<<"***********************"<<endl;
        cout<<"1. Insertar un caracter a una cola"<<endl;
        cout<<"2. Mostrar todos los elementos de la cola"<<endl;
        cout<<"3. Salir"<<endl;
        cout<<"Elija una opcion: ";
        cin>>op;
        cout<<"***********************"<<endl;
        switch (op)
        {
        case 1:
            
            break;
        case 2:
            
            break;
        case 3:
            
            break;
        default:

            break;
        }
    } while (op != 3);
    
    return 0;
}
void agregarCola(Nodo *&frente, Nodo *&fin, int n)
{

}
void quitarCola(Nodo *&frente, Nodo *&fin, int &n)
{

}
bool cola_vacia(Nodo *frente)
{

}