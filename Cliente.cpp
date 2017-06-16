#include "Cliente.h"

Cliente::Cliente(string nombre,string contra,string membresia){
    this->nombre=nombre;
    this->contra=contra;
    this->membresia=membresia;
}

Cliente::Cliente(){

}

void Cliente::setMembresia(string membresia){
   this-> membresia=membresia;
}

string Cliente::getMembresia(){
   return membresia;
}
