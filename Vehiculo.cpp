#include "Vehiculo.h"

Vehiculo::Vehiculo(int year,string marca,string modelo,string placa,double precio, string estado){
    this->year=year;
    this->marca=marca;
    this->modelo=modelo;
    this->placa=placa;
    this->precio=precio;
    this->estado=estado;
}

Vehiculo::Vehiculo(){

}

string Vehiculo::getEstado(){
   return estado;
}

void Vehiculo::setEstado(string estado){
   this-> estado=estado;
}


void Vehiculo::setYear(int year){
   this-> year=year;
}

int Vehiculo::getYear(){
   return year;
}

void Vehiculo::setMarca(string marca){
   this-> marca=marca;
}

string Vehiculo::getMarca(){
   return marca;
}

void Vehiculo::setModelo(string modelo){
   this-> modelo=modelo;
}

string Vehiculo::getModelo(){
   return modelo;
}

void Vehiculo::setPlaca(string placa){
   this-> placa=placa;
}

string Vehiculo::getPlaca(){
   return placa;
}

void Vehiculo::setPrecio(double precio){
   this-> precio=precio;
}

double Vehiculo::getPrecio(){
   return precio;
}
