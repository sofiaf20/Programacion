#include "header1.h"

Taller::Taller(int _max){
    max_Vehiculos = _max;
}
Taller::~Taller(){}
void Taller::meter(){

    if(num_Vehiculos < max_Vehiculos){

    int opcion;
    cout<<"Ingresar coche(1) o moto(2): ";cin>> opcion;
    if(opcion == 1){
            v[num_Vehiculos] = new Coche();
            cout<<"Ingrese marca de vehiculo: ";
            cin>>v[num_Vehiculos]->marca;
            cout<<"Ingrese color de vehiculo: ";
            cin>>v[num_Vehiculos]->color;
            cout<<endl;
            cout<<"Metiendo vehiculo..."<<endl;
            cout<<endl;
    }else{
        if(opcion == 2){
            v[num_Vehiculos] = new Moto();
            cout<<"Ingrese marca de vehiculo: ";
            cin>>v[num_Vehiculos]->marca;
            cout<<"Ingrese color de vehiculo: ";
            cin>>v[num_Vehiculos]->color;
            cout<<endl;
            cout<<"Metiendo vehiculo..."<<endl;
            cout<<endl;
        }
	}
	num_Vehiculos++;
    }else{
		cout << "Se alcanzo la maxima capacidad de vehiculos permitida..." << endl;
	}
}
void Taller::arreglarVehiculos(){

    cout<<"Arreglar vehiculo..."<<endl;
    cout<<endl;
    for(int i = 0 ; i < num_Vehiculos ; i++)
	{
		cout << "Marca: " << v[i]->marca << endl;
		cout << "Color: " << v[i]->color << endl;
		v[i]->arrancar();
		cout << endl;
	}
}
Vehiculo::Vehiculo(){}
Vehiculo::~Vehiculo(){}
Coche::Coche(){}
Coche::~Coche(){}
void Coche::arrancar(){
    cout<<"El auto arranco..."<<endl;
}
void Coche::parar(){
    cout<<"El auto esta detenido..."<<endl;
}
void Coche::repostar(){
    cout<<"El auto esta repostado..."<<endl;
}
Moto::Moto(){}
Moto::~Moto(){}
void Moto::arrancar(){
    cout<<"La moto arranco..."<<endl;
}
void Moto::parar(){
    cout<<"La moto esta detenida..."<<endl;
}
void Moto::repostar(){
    cout<<"La moto esta repostada..."<<endl;
}
