/*Ejercicio 2: Hacer un programa que guarde datos de clientes de un banco, los almacene en cola, y por ultimo muestre los clientes 
en el orden correcto.*/
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

struct Nodo
{
    string nombre;
    int edad;
    Nodo *siguiente;
};

void agregarCola(Nodo *&, Nodo *&, string, int);
bool cola_vacia();
void mostrarCola();

int main()
{
    Nodo *frente = NULL;
    Nodo *fin = NULL;

    string nombre;
    int nElementos, edad;

    cout<<"Digite el total de clientes a ingresar: ";
    cin>>nElementos;
    for(int i=0;i<nElementos;i++)
    {
        cout<<i+1<<". Introduzca su nombre: ";
        fflush(stdin); getline(cin,nombre);
        cout<<i+1<<". Introduzca su edad: ";
        cin>>edad;
        agregarCola(frente, fin, nombre, edad);
    }
    



    return 0;
}
void agregarCola(Nodo *&frente, Nodo *&fin, string nombre, int edad)
{
    Nodo *nuevo_nodo = new Nodo ();
    nuevo_nodo->nombre = nombre;
    nuevo_nodo->edad = edad;
    if(cola_vacia(frente))
    {
        frente = nuevo_nodo;
    }
    else
    {
        fin->siguiente= nuevo_nodo;
    }
    fin = nuevo_nodo;
}
bool cola_vacia(Nodo *frente)
{
    if(frente == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}