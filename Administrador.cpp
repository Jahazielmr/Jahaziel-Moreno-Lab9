#include "Administrador.h"
#include <string>
using namespace std;

Administrador::Administrador(string nombre,string contra,string cargo, int NumeroSeguro){
    this-> nombre=nombre;
    this-> contra=contra;
    this-> cargo=cargo;
    this-> NumeroSeguro=NumeroSeguro;
}

Administrador::Administrador(){

}

void Administrador::setCargo(string cargo){
   this-> cargo=cargo;
}

string Administrador::getCargo(){
   return cargo;
}

void Administrador::setNumeroSeguro(int NumeroSeguro){
   this-> NumeroSeguro=NumeroSeguro;
}

int Administrador::getNumeroSeguro(){
   return NumeroSeguro;
}