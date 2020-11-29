#ifndef TALLER_H_INCLUDED
#define TALLER_H_INCLUDED
#include <iostream>
#include <string.h>

using namespace std;

class Taller{
    protected:
    int max_Vehiculos;
    int num_Vehiculos = 0;
    public:
    Taller(int);
    ~Taller();
    void meter(Vehiculo *v[]);
    void arreglarVehiculos();
};


#endif // TALLER_H_INCLUDED
