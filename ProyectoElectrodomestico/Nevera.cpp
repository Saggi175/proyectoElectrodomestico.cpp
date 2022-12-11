#include<iostream>
#include"Nevera.h"

using namespace std;

string Nevera::getTipo_nevera() { return tipo_nevera; }
int Nevera::getPuerta() { return puerta; }
int Nevera::getCapacidad_congelar() { return capacidad_congelar; }

void Nevera::setTipo_nevera(string tipo_nevera){ this->tipo_nevera=tipo_nevera; }
void Nevera::setPuerta(int puerta) { this->puerta=puerta; }
void Nevera::setCapacidad_congelar(int capacidad_congelar) { this->capacidad_congelar=capacidad_congelar; }

Nevera::Nevera(string tipo_nevera, int puerta, int capacidad_congelar, int precio, int garantia, string marca, string modelo, int voltage, string color) : Electrodomestico(precio, garantia, marca, modelo, voltage, color){
	setTipo_nevera(tipo_nevera);
	setPuerta(puerta);
	setCapacidad_congelar(capacidad_congelar);	
}

void Nevera::mostrar_Nevera(){
	mostrar_Electrodomestico();
	cout << "Tipo de Nevera: " << tipo_nevera << endl;
	cout << "Cantidad de puertas: " << puerta << endl;
	cout << "Capacidad de congelar: " << capacidad_congelar << endl;
	
}
