#include <iostream>
#include <string>

using namespace std;

#ifndef VEHICULO_H
#define VEHICULO_H
class Vehiculo{
    protected:
        int year;
        string marca;
        string modelo;
        string placa;
        double precio;
    public:
        Vehiculo(int,string,string,string,double);
        Vehiculo();
        int getYear();
        void setYear(int);

        string getMarca();
        void setMarca(string);

        string getModelo();
        void setModelo(string);

        string getPlaca();
        void setPlaca(string);

        double getPrecio();
        void setPrecio(double);

};
#endif