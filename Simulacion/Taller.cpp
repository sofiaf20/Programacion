#include "Taller.h"
#include "Vehiculo.h"

Taller::Taller(int _max){
    max_Vehiculos = _max;
}
~Taller(){}
Taller::meter(Vehiculo *v[]){

    if( num_Vehiculos < max_Vehiculos){
        int opcion;
        cout<<"Ingresar coche(1) o moto(2): ";cin>> opcion;
        if(opcion == 1){
            v[num_Vehiculos] = new Coche();
            cout<<"Ingrese marca de vehiculo: ";
            cin>>v[num_Vehiculos]->marca;
            cout<<"Ingrese color de vehiculo: ";
            cin>>v[num_Vehiculos]->color;
            cout<<"Ingrese numero de motor: ";
            cin>>v[num_Vehiculos]->motor;
            num_Vehiculos++;
            cout<<endl;
            cout<<"Metiendo vehiculo..."<<endl;
            cout<<endl;
        }else{
        cout<<"Supero la maxima capacidad de vehiculos("<<max_Vehiculos<<")..."<<endl;
        }
        if(opcion == 2){
            v[num_Vehiculos] = new Moto();
            cout<<"Ingrese marca de vehiculo: ";
            cin>>v[num_Vehiculos]->marca;
            cout<<"Ingrese color de vehiculo: ";
            cin>>v[num_Vehiculos]->color;
            cout<<"Ingrese numero de cilindrada: ";
            cin>>v[num_Vehiculos]->motor;
            num_Vehiculos++;
            cout<<endl;
            cout<<"Metiendo vehiculo..."<<endl;
            cout<<endl;
        }else{
        cout<<"Supero la maxima capacidad de vehiculos("<<max_Vehiculos<<")..."<<endl;
        }
    }
}
Taller::arreglarVehiculos(){
    cout<<"Arreglar vehiculo..."<<endl;
}
