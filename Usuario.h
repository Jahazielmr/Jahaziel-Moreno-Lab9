#include <iostream>
#include <string>

using namespace std;

#ifndef USUARIO_H
#define USUARIO_H
class Usuario{
    protected:
        string nombre;
        string contra;
    public:
        Usuario(string,string);
        Usuario();
        string getNombre();
        void setNombre(string);

        string getContra();
        void setContra(string);

};
#endif