#include <iostream>
#include <cstdlib>

using namespace std;

struct Nodo
{
    int dato;
    Nodo *siguiente;
};

void insertarCola(Nodo *&frente, Nodo *&fin, int n);
bool cola_vacia(Nodo *);

int main()
{
    Nodo *frente = NULL;
    Nodo *fin = NULL;

    int dato;

    for(int i=0;i<3;i++)
    {
        cout<<"Digite un numero: ";
        cin>>dato;
        insertarCola(frente, fin, dato);
    }


    return 0;
}
//Funcion para insertar elementos a una cola
void insertarCola(Nodo *&frente, Nodo *&fin, int n)
{
    Nodo *nuevo_nodo = new Nodo ();

    nuevo_nodo->dato = n;
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
    cout<<"Elemento "<<n<<" insertado correctamente . . ."<<endl;
}
// Funcion para determinar si la cola esta vacia o no.
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