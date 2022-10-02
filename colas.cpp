#include <iostream>
#include <cstdlib>

using namespace std;

struct Nodo
{
    int dato;
    Nodo *siguiente;
};

//Prototipo de la funcion.
void insertarCola(Nodo *&frente, Nodo *&fin, int n);
void quitarCola(Nodo *&frente, Nodo *&fin, int &n);
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
    cout<<"Sacando elementos de la cola: ";
    while( frente != NULL)
    {
        quitarCola(frente, fin, dato);
        if(frente != NULL)
        {
            cout<<dato<<", ";
        }
        else
        {
            cout<<dato<<".";
        }
    }
    cout<<endl;


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
void quitarCola(Nodo *&frente, Nodo *&fin, int &n)
{   
    n = frente->dato; // Rescatando el valor del nodo que esta al "frente".
    Nodo *aux = frente; // Creando una variable para mantener momentaniamente el nodo de al "frente".
    // Estructura para ver si es 1 solo nodo, o varios y asi . . . 
    if(frente == fin)
    {
        frente = NULL;
        fin = NULL;
    }
    else
    {
        frente = frente->siguiente;
    }
    delete aux;
}
// Funcion para determinar si la cola esta vacia o no.
bool cola_vacia(Nodo *frente)
{
    return (frente == NULL)? true:false;
}