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
bool cola_vacia(Nodo *);
void mostrarCola(Nodo *&, Nodo *&, string &, int &);

int main()
{
    Nodo *frente = NULL;
    Nodo *fin = NULL;

    string nombre;
    int nElementos, edad, i=0;

    cout<<"Digite el total de clientes a ingresar: ";
    cin>>nElementos;
    // Agregando los datos a la cola.
    for(int i=0;i<nElementos;i++)
    {
        cout<<i+1<<". Introduzca su nombre: ";
        fflush(stdin); getline(cin,nombre);
        cout<<i+1<<". Introduzca su edad: ";
        cin>>edad;
        agregarCola(frente, fin, nombre, edad);
    }
    cout<<"Mostrando elementos de la pila: "<<endl;
    while(frente != NULL)
    {
        mostrarCola(frente, fin, nombre, edad);
        if(frente != NULL)
        {
            cout<<i+1<<". Datos del cliente: "<<endl;
            cout<<"Nombre: "<<nombre<<endl;
            cout<<"Edad: "<<edad<<endl;
        }
        else
        {
            cout<<i+1<<". Datos del cliente: "<<endl;
            cout<<"Nombre: "<<nombre<<endl;
            cout<<"Edad: "<<edad<<endl;
        }
        i += 1;
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
    cout<<"Elemento '"<<nombre<<"' y '"<<edad<<"', agregado exitosamente . . ."<<endl;
}
bool cola_vacia(Nodo *frente)
{
    return (frente == NULL )? true:false;
}
void mostrarCola(Nodo *&frente, Nodo *&fin, string &nombre, int &edad)
{
    nombre = frente->nombre;
    edad = frente->edad;
    Nodo *aux = frente;
    if(frente == fin)
    {
        frente = NULL;
        fin = NULL;
    }
    else
    {
        frente = aux->siguiente;
    }
    delete aux;
}