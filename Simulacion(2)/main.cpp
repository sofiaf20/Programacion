#include <iostream>
#include <string.h>
#include "header1.h"

using namespace std;

int main()
{
    int opcion;
    int maximo;
    cout<<"Indicar la capacidad maxima de vehiculos en el taller: ";cin>>maximo;
    cout<<endl;

    Taller *taller = new Taller(maximo);
    do{

        cout<<"1.Meter vehiculo al taller."<<endl;
        cout<<"2.Arreglar vehiculos en el taller."<<endl;
        cout<<"0.Finalizar programa."<<endl;
        cout<<endl;
        cout<<"Elegir opcion: ";cin>>opcion;
        cout<<endl;
        switch(opcion){
        case 1:
               taller->meter();
        break;
        case 2:
               taller->arreglarVehiculos();
        break;
        case 0:
                cout<<"El programa a finalizado correctamente..."<<endl;
                taller->~Taller();
        break;
        default:
                cout<<"Error del programa..."<<endl;
        break;
        }
    }while( opcion != 0);

    return 0;
}
