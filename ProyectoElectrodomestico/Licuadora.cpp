#include<iostream>
#include"Licuadora.h"

using namespace std;

string Licuadora::getTipo_licuadora() { return tipo_licuadora; }
int Licuadora::getVelocidad() { return velocidad; }
int Licuadora::getCapacidad_tazas() { return capacidad_tazas; }

void Licuadora::setTipo_licuadora(string tipo_licuadora) { this->tipo_licuadora = tipo_licuadora; }
void Licuadora::setVelocidad(int velocidad) { this->velocidad = velocidad; }
void Licuadora::setCapacidad_tazas(int capacidad_tazas) { this->capacidad_tazas=capacidad_tazas; }

Licuadora::Licuadora(string tipo_licuadora, int velocidad, int capacidad_tazas, int precio, int garantia, string marca, string modelo, int voltage, string color) : Electrodomestico(precio, garantia, marca, modelo, voltage, color){
	setTipo_licuadora(tipo_licuadora);
	setVelocidad(velocidad);
	setCapacidad_tazas(capacidad_tazas);	
}

void Licuadora::mostrar_Licuadora(){
	mostrar_Electrodomestico();
	cout << "Tipo de licuadora: " << tipo_licuadora << endl;
	cout << "Cantidad de Velocidad de la licuadora: " << velocidad << endl;
	cout << "Cantidad de ciclos por licuadora: " << capacidad_tazas << endl;
	
}
