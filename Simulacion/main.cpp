#include <iostream>
#include <string.h>
#include "Vehiculo.h"
#include "Taller.h"

using namespace std;

int main()
{
    int maximo;
    int opcion;

    cout<<"Taller:"<<endl;
    cout<<"Indicar la capacidad maxima de vehiculos en el taller: ";cin>>maximo;
    cout<<endl;

    Taller *t = new Taller(maximo);
    Vehiculo *Arreglo[maximo];
    do{

        cout<<"1.Meter vehiculo al taller."<<endl;
        cout<<"2.Arreglar vehiculos en el taller."<<endl;
        cout<<"0.Finalizar programa."<<endl;
        cout<<endl;
        cout<<"Elegir opcion: ";cin>>opcion;
        cout<<endl;
        switch(opcion){
        case 1:
               t->meter(Arreglo);
        break;
        case 2:

        break;
        case 0:
                cout<<"El programa a finalizado correctamente..."<<endl;
        break;
        default:
                cout<<"Error del programa..."<<endl;
        break;
        }
    }while( opcion != 0);

    return 0;
}
