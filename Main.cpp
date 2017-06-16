#include "Vehiculo.h"
#include "Usuario.h"
#include "Administrador.h"
#include "Cliente.h"
#include <sstream>
#include <fstream>
#include <string>
#include <iostream>

using namespace std;

int main(){
	char resp ='s';
        int option;
        while(resp=='s'||resp=='S'){
                cout <<"Menu"<<endl;
                cout <<"1-Ingresar"<<endl;
                cout <<"2-Crear Cuenta"<<endl;
                cin>> option;
                switch (option){
                        case 1:{
                              //log in si es el admin se le presenta un menu, si no se le presenta el menu de cliente



						break;
                        }

                        case 2:{
                        	//Crear clientes
                    

   			       		break;
                        }
                }
                cout<<"Desea continuar? S o N"<<endl;
                cin >> resp;
        }

        cout<<"Bye";

return 0;
}

