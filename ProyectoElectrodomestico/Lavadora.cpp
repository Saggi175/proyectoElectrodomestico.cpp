#include<iostream>
#include"Lavadora.h"

using namespace std;

string Lavadora::getTipo_lavadora() { return tipo_lavadora; }
int Lavadora::getCiclo_lavadora() { return ciclo_lavado; }
int Lavadora::getPuerta() { return puerta; }

void Lavadora::setTipo_lavadora(string tipo_lavadora) { this->tipo_lavadora=tipo_lavadora; }
void Lavadora::setCiclo_lavado(int ciclo_lavado) { this->ciclo_lavado=ciclo_lavado; }
void Lavadora::setPuerta(int puerta){ this->puerta=puerta; }

Lavadora::Lavadora(string tipo_lavadora, int puerta, int ciclo_lavado, int precio, int garantia, string marca, string modelo, int voltage, string color) : Electrodomestico(precio, garantia, marca, modelo, voltage, color){
	setTipo_lavadora(tipo_lavadora);
    setPuerta(puerta);
	setCiclo_lavado(ciclo_lavado);
}

void Lavadora::mostrar_Lavadora(){
	mostrar_Electrodomestico();
	cout << "Tipo de lavadora: " << tipo_lavadora << endl;
	cout << "tipo de puerta de la lavadora: " << puerta << endl;
	cout << "Cantidad de ciclos por lavado: " << ciclo_lavado << endl;
	
}
