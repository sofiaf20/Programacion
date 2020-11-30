#ifndef HEADER1_H_INCLUDED
#define HEADER1_H_INCLUDED
#include <iostream>
#include <string.h>

using namespace std;

class Vehiculo{
    public:
    string color;
    string marca;
    Vehiculo();
    ~Vehiculo();
    virtual void arrancar() = 0;
    virtual void parar() = 0;
    virtual void repostar() = 0;
};
class Coche : public Vehiculo{
   public:
   int motor;
   Coche();
   ~Coche();
   void arrancar();
   void parar();
   void repostar();
};
class Moto : public Vehiculo{
    public:
    int cilindrada;
    Moto();
    ~Moto();
    void arrancar();
    void parar();
    void repostar();
};
class Taller{
    protected:
    int max_Vehiculos;
    int num_Vehiculos = 0;
    Vehiculo *v[];
    public:
    Taller(int);
    ~Taller();
    void meter();
    void arreglarVehiculos();
};


#endif // HEADER1_H_INCLUDED
