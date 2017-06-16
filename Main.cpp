#include "Vehiculo.h"
#include "Usuario.h"
#include "Administrador.h"
#include "Cliente.h"
#include <sstream>
#include <fstream>
#include <string>
#include <iostream>
#include <vector>

using namespace std;

vector<Usuario*> cargarTXTCliente(vector<Usuario*>);
vector<Vehiculo*> cargarTXTFactura(vector<Vehiculo*>);//Mandamos vehiculos comprados
vector<Vehiculo*> cargarTXTVehiculo(vector<Vehiculo*>);//Mandamos vehiculos comprados

void guardarTXTFactura(vector<Vehiculo*>, Usuario*, int);
void guardarTXTVehiculo(Vehiculo*);
void guardarTXTCliente(Usuario*);

int main(){

	                        	
		vector <Usuario*> clientes;
		vector <Vehiculo*> vehiculos;
		vector <Vehiculo*> vehiculosComprados;
		Administrador* admin = new Administrador("Anakin", "123", 123456, "Presidente");
        clientes.push_back(admin);

        vector<Usuario*> aux;
        vector<Vehiculo*> aux2;

        ifstream file("Cliente.txt");
		if(file.is_open()){
			clientes =cargarTXTCliente(aux);
		}

		ifstream file2("Vehiculo.txt");
		if(file2.is_open()){
			vehiculos =cargarTXTVehiculo(aux2);
		}

		char resp ='s';
        int option;
        while(resp=='s'||resp=='S'){
                cout <<"Menu"<<endl;
                cout <<"1-Ingresar"<<endl;
                cout <<"2-Crear Cuenta"<<endl;
                cout <<"3-Listar Cuentas"<<endl;
                cout <<"4-salir"<<endl;
                cin>> option;
                switch (option){
                        case 1:{
                              //log in si es el admin se le presenta un menu, si no se le presenta el menu de cliente
                        	string usuario, contra;
                        	cout<<"Ingrese Usuario: "<<endl;
                        	cin>>usuario;
                        	cout<<"Ingrese Contraseña: "<<endl;
                        	cin>>contra;

                        	for (int i = 0; i < clientes.size(); ++i){
                        	
                        	
                        		if(usuario==admin->getNombre()&&contra==admin->getContra()){
                        			//menu si entra como admin;
                        			int op;
                        			cout<<"Bienvenido Administrador, este es su Menu"<<endl;
                        			cout<<"------------------------------------------"<<endl;
                        			cout<<"1-Agregar Auto"<<endl;
                        			cout<<"2-Modificar Auto"<<endl;
                        			cout<<"3-Eliminar auto"<<endl;
                        			cout<<"4-listar"<<endl;
                        			cout<<"5-salir"<<endl;
                        			cin>>op;

                        			switch(op){
                        				case 1:{
                        					//Agregar
                        					string marca, contra, modelo, placa;
											int year;
											double precio;
											cout<<"Ingrese Año del vehiculo: "<<endl;
											cin>>year;
											cout<<"Ingrese Marca: "<<endl;
											cin>>marca;
											cout<<"Ingrese Modelo: "<<endl;
											cin>>modelo;
											cout<<"Ingrese placa: "<<endl;
											cin>>placa;
											cout<<"Ingrese el precio del auto"<<endl;
											cin>>precio;

											Vehiculo* vehiculo = new Vehiculo(year,marca, modelo, placa, precio, "Disponible");
											vehiculos.push_back(vehiculo);
											cout<<"Se agrego un auto exitosamente!"<<endl;

											guardarTXTVehiculo(vehiculo);

                        				break;
                        				}

                        				case 2:{
                        					//Modificar
                        					int pos;
                        					cout<<"Ingrese la posicion del auto que desea modificar"<<endl;
                        					cin>>pos;

                        					string marca, contra, modelo, placa;
											int year;
											double precio;
											cout<<"Ingrese nuevo Año del vehiculo: "<<endl;
											cin>>year;
											cout<<"Ingrese nueva Marca: "<<endl;
											cin>>marca;
											cout<<"Ingrese nuevo Modelo: "<<endl;
											cin>>modelo;
											cout<<"Ingrese nueva placa: "<<endl;
											cin>>placa;
											cout<<"Ingrese el nuevo precio del auto"<<endl;
											cin>>precio;

											vehiculos[pos]->setYear(year);
											vehiculos[pos]->setMarca(marca);
											vehiculos[pos]->setModelo(modelo);
											vehiculos[pos]->setPrecio(precio);
											vehiculos[pos]->setPlaca(placa);

											cout<<"Se Modifico un auto exitosamente!"<<endl;

                        				break;	
                        				}	

                        				case 3:{
                        					//Eliminar
                        					int pos;
                        					cout<<"Ingrese la posicion del vehiculo que desea eliminar"<<endl;
                        					cin>>pos;
                        					vehiculos.erase(vehiculos.begin()+pos);

                        				break;
                        				

                        				case 4:{
                        					cout<<"Estos son los autos disponibles"<<endl;
                    							cout<<"--------------------------------"<<endl;
                    							for (int i = 0; i < vehiculos.size(); ++i){

                    								cout<<"Vehiculo numero: "<<i<<endl;
                    								cout<<" ";								
                    								cout<<"Año: "<<vehiculos[i]->getYear()<<endl;
                    								cout<<"Marca: "<<vehiculos[i]->getMarca()<<endl;
                    								cout<<"Modelo: "<<vehiculos[i]->getModelo()<<endl;
                    								cout<<"Placa: "<<vehiculos[i]->getPlaca()<<endl;
													cout<<"Precio: "<<vehiculos[i]->getPrecio()<<endl;
													cout<<"Estado: "<<vehiculos[i]->getEstado()<<endl;
													cout<<"----------------------------------------"<<endl;

                    							}
                    					}
                        				}

                        			}
                    			
                    			} else if(usuario==clientes[i]->getNombre()&&contra==clientes[i]->getContra()){
                        			//menu si entra como usuario
                        			int op2;
                    				cout<<"Bienvenido Cliente este es su Menu"<<endl;
                    				cout<<"------------------------------------"<<endl;
                    				cout<<"1-Alquilar un auto"<<endl;
                    				cout<<"2-Salir"<<endl;
                    				cin>>op2;
                    				switch(op2){

                    						case 1:{
                    							//Alquiler 
                    							cout<<"Estos son los autos disponibles"<<endl;
                    							cout<<"--------------------------------"<<endl;
                    							for (int i = 0; i < vehiculos.size(); ++i){

                    								cout<<"Vehiculo numero: "<<i<<endl;
                    								cout<<" ";								
                    								cout<<"Año: "<<vehiculos[i]->getYear()<<endl;
                    								cout<<"Marca: "<<vehiculos[i]->getMarca()<<endl;
                    								cout<<"Modelo: "<<vehiculos[i]->getModelo()<<endl;
                    								cout<<"Placa: "<<vehiculos[i]->getPlaca()<<endl;
													cout<<"Precio: "<<vehiculos[i]->getPrecio()<<endl;
													cout<<"Estado: "<<vehiculos[i]->getEstado()<<endl;
													cout<<"----------------------------------------"<<endl;

                    							}

                    							char r='s';
                    							int option;
                    							int total;
                    							while(r=='s'||r=='S'){
                    								cout<<"Seleccione el auto que desea comprar: "<<endl;
                    								cin>>option;
                    								vehiculos[option]->setEstado("Alquilado");
                    								vehiculosComprados.push_back(vehiculos[option]);
                    								cout<<"Desea comprar otro? s/n"<<endl;
                    								cin >> r;
                    								total+= vehiculos[option]->getPrecio();

                    							}	

                    							guardarTXTFactura(vehiculosComprados, clientes[i], total);


                    						break;
                    						}


                    				}


                        		} else{
                        			//no existe la cuenta
                        			cout <<"La cuenta no existe"<<endl;
                        		}

                        	}


						break;
                        }

                        case 2:{
                        	//Crear clientes
                        	string nombre, contra, membresia;
							int op;
							cout<<"Ingrese nombre de Usuario: "<<endl;;
							cin>>nombre;
							cout<<"Ingrese contraseña: "<<endl;
							cin>>contra;
							cout<<"Seleccione tipo de membresia"<<endl;
							cout<<"1-Gold"<<endl;
							cout<<"2-Normal"<<endl;
							cout<<"3-Platinum"<<endl;
							cin >>op;
							if(op==1){
								membresia="Gold";
							}
							if(op==2){
								membresia="Normal";
							}
							if(op==3){
								membresia="Platinum";
							}

							Cliente* cliente = new Cliente(nombre,contra, membresia);
							clientes.push_back(cliente);
							cout<<"Se agrego Cuenta exitosamente!"<<endl;
							guardarTXTCliente(cliente);

   			       		break;
                        }

                        case 3:{
                        	//Listar cuentas

                        	cout<<"Estos son las cuentas"<<endl;
                    		cout<<"--------------------------------"<<endl;
                    		for (int i = 0; i < clientes.size(); ++i){

                    			cout<<"Cuenta numero: "<<i<<endl;
                    			cout<<" ";								
                    			cout<<"Nombre: "<<clientes[i]->getNombre()<<endl;
                    			cout<<"Contraseña: "<<clientes[i]->getContra()<<endl;
                    			Cliente* c = static_cast<Cliente*>(clientes[i]);
                    			cout<<"membresia: "<<c->getMembresia()<<endl;
								cout<<"----------------------------------------"<<endl;

                    			}


                        break;
                        }

                        case 4:{
                        	//salir

                        break;
                        }
                }
                cout<<"Desea continuar? S o N"<<endl;
                cin >> resp;
        }

        cout<<"Bye";

return 0;
}

void guardarTXTFactura(vector <Vehiculo*> vehiculos, Usuario* p, int total){
	ofstream archivo;
	string n= "FacturaDe"+p->getNombre()+".txt";
	string ruta="Nombre.txt";
	stringstream ss;
	ss<<n;		

	ruta=ss.str();
	archivo.open(ruta.c_str(),ios::app);
	cout << "size " << vehiculos.size() << endl;
	for (int i = 0; i < vehiculos.size(); ++i){
		archivo<<"Vehiculo numero: "<<i<<endl;
        archivo<<" ";								
        archivo<<"Año: "<<vehiculos[i]->getYear()<<endl;
        archivo<<"Marca: "<<vehiculos[i]->getMarca()<<endl;
        archivo<<"Modelo: "<<vehiculos[i]->getModelo()<<endl;
        archivo<<"Placa: "<<vehiculos[i]->getPlaca()<<endl;
		archivo<<"Precio: "<<vehiculos[i]->getPrecio()<<endl;
		cout<<"Estado: "<<vehiculos[i]->getEstado()<<endl;
		archivo<<"----------------------------------------"<<endl;

	}
	archivo<<"Total: "<<total;
		
	archivo.close();
		
}

void guardarTXTCliente(Usuario* p){
	ofstream archivo;
	string ruta="Nombres.txt";
	stringstream ss;
	ss<<"Cliente.txt";		

	ruta=ss.str();
	archivo.open(ruta.c_str(),ios::app);
	
	Cliente* c = static_cast<Cliente*>(p);
	archivo<<p->getNombre()<<" "<<p->getContra()<<" "<< c->getMembresia()<<endl;;

	archivo.close();
		
}


void guardarTXTVehiculo(Vehiculo* v){
	ofstream archivo;
	string ruta="Nombres.txt";
	stringstream ss;
	ss<<"Vehiculo.txt";		

	ruta=ss.str();
	archivo.open(ruta.c_str(),ios::app);
	
	archivo<<v->getYear()<<" "<<v->getModelo()<<" "<< v->getMarca()<<" " <<v->getPrecio()<<" "<<v->getPlaca()<<" "<<v->getEstado()<<endl;

	archivo.close();
		
}

vector<Usuario*> cargarTXTCliente(vector<Usuario*> personas){
		
	ifstream archivo("Cliente.txt"); //
   		
   	while(!archivo.eof()){

   		
   		string nombre, contra, membresia;
 
   		archivo >> nombre;
   		archivo >> contra;
   		archivo >> membresia;
 	
 		Cliente* persona = new Cliente(nombre,contra, membresia);

		personas.push_back(persona);

		archivo >> nombre;
   		archivo >> contra;
   		archivo >> membresia;
	}	

	return personas;		
}

vector<Vehiculo*> cargarTXTVehiculo(vector<Vehiculo*> personas){
		
	ifstream archivo("Vehiculo.txt"); //
   		
   	while(!archivo.eof()){

   		int year;
   		double precio;
   		string modelo, marca, placa, estado;
 
   		archivo >> year;
   		archivo >> modelo;
   		archivo >> marca;
   		archivo >> precio;
   		archivo >> placa;
   		archivo >>estado;

 		Vehiculo* vehiculo = new Vehiculo(year,modelo, marca,placa,precio, estado);

		personas.push_back(vehiculo);

		archivo >> year;
   		archivo >> modelo;
   		archivo >> marca;
   		archivo >> precio;
   		archivo >> placa;
   		archivo >>estado;

	}	

	return personas;		
}