#include "Vehiculo.h"

Vehiculo(){}
~Vehiculo(){}
Vehiculo::setColor(){
    cout<<"Ingresar color de vehiculo: ";cin>>color;
}
Vehiculo::getColor(){
    return color;
}
Vehiculo::setMarca(){
    cout<<"Ingresar marca de vehiculo: ";cin>>marca;
}
Vehiculo::getMarca(){
    return marca;
}
Coche::Coche(){}
Coche::~Coche(){}
Coche::arrancar(){
    cout<<"Color: ";
    Vehiculo::getColor();
    cout<<"Marca: ";
    Vehiculo::getMarca();
    cout<<"El auto esta arrancando..."<<endl;
}
Coche::parar(){
    cout<<"Color: ";
    Vehiculo::getColor();
    cout<<"Marca: ";
    Vehiculo::getMarca();
    cout<<"El auto esta detenido..."<<endl;
}
Coche::repostar(){
    cout<<"Color: ";
    Vehiculo::getColor();
    cout<<"Marca: ";
    Vehiculo::getMarca();
    cout<<"El auto esta repostado..."<<endl;
}
Moto::Moto(){}
Moto::~Moto(){}
Moto::arrancar(){
    cout<<"Color: ";
    Vehiculo::getColor();
    cout<<"Marca: ";
    Vehiculo::getMarca();
    cout<<"La moto esta arrancando..."<<endl;
}
Moto::parar(){
    cout<<"Color: ";
    Vehiculo::getColor();
    cout<<"Marca: ";
    Vehiculo::getMarca();
    cout<<"La moto esta detenida..."<<endl;
}
Moto::repostar(){
    cout<<"Color: ";
    Vehiculo::getColor();
    cout<<"Marca: ";
    Vehiculo::getMarca();
    cout<<"La moto esta repostada..."<<endl;
}
