#include <iostream>
#include <string>
#include "Usuario.h"

using namespace std;

#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H

class Administrador: public Usuario{
    
    protected:
        string cargo;
        int NumeroSeguro;

    public:
        Administrador(string,string,int, string);
        Administrador();

        string getCargo();
        void setCargo(string);

        int getNumeroSeguro();
        void setNumeroSeguro(int);

};
#endif