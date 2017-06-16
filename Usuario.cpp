#include "Usuario.h"

Usuario::Usuario(string nombre,string contra){
    this->nombre=nombre;
    this->contra=contra;
}

Usuario::Usuario(){

}
void Usuario::setNombre(string nombre){
   this-> nombre=nombre;
}

string Usuario::getNombre(){
   return nombre;
}

void Usuario::setContra(string contra){
   this-> contra=contra;
}

string Usuario::getContra(){
   return contra;
}
