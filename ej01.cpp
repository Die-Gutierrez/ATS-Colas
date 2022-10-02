/*Ejercicio 1: Hacer un programa en C++, utilizando Colas que contenga el siguiente menú: 
1. Insertar un caracter a una cola
2. Mostrar todos los elementos de la cola
3. Salir*/
#include <iostream>
#include <string.h>
#include <cstdlib>

struct Nodo
{
    char dato[2];
    Nodo *siguiente;
};

void agregarCola(Nodo *&, Nodo *&, char []);
void quitarCola(Nodo *&, Nodo *&, char []);
bool cola_vacia(Nodo *);

using namespace std;

int main()
{
    Nodo *frente = NULL;
    Nodo *fin = NULL;
    
    int op;
    char dato[2];

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
            cout<<"Digite UN SOLO caracter: ";
            fflush(stdin); cin.getline(dato,2,'\n');
            agregarCola(frente, fin, dato);
            system("pause");
            break;
        case 2:
            
            break;
        case 3:
            
            break;
        default:
            system("cls");
            break;
        }
    } while (op != 3);
    
    return 0;
}
void agregarCola(Nodo *&frente, Nodo *&fin, char n[])
{
    Nodo *nuevo_nodo = new Nodo ();
    strcpy(nuevo_nodo->dato, n);
    nuevo_nodo->siguiente = NULL;
    if(cola_vacia(frente))
    {
        frente = nuevo_nodo;
    }
    else
    {
        fin->siguiente = nuevo_nodo;
    }
    fin = nuevo_nodo;
    cout<<"Elemento '"<<n<<"' agregado exitosamente . . ."<<endl;
}
void quitarCola(Nodo *&frente, Nodo *&fin, int &n)
{

}
bool cola_vacia(Nodo *frente)
{
    return (frente == NULL)? true:false;
}