#ifndef VEHICULO_H_INCLUDED
#define VEHICULO_H_INCLUDED
#include <iostream>
#include <string.h>

using namespace std;

class Vehiculo{
    protected:
    string color;
    string marca;
    public:
    Vehiculo();
    ~Vehiculo();
    virtual void arrancar() = 0;
    virtual void parar() = 0;
    virtual void repostar() = 0;
};
class Coche : public Vehiculo{
   protected:
   int motor;
   public:
   Coche();
   ~Coche();
   void arrancar();
   void parar();
   void repostar();
};
class Moto : public Vehiculo{
    protected:
    int cilindrada;
    public:
    Moto();
    ~Moto();
    void arrancar();
    void parar();
    void repostar();
};

#endif // VEHICULO_H_INCLUDED
