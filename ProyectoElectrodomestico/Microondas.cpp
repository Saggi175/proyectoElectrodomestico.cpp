#include<iostream>
#include"Microondas.h"

using namespace std;

string Microondas::getTipo_microonda() { return tipo_microonda; }
void Microondas::setTipo_microonda(string tipo_microonda) { this->tipo_microonda=tipo_microonda; }

Microondas::Microondas(string tipo_microondas, int precio, int garantia, string marca, string modelo, int voltage, string color) : Electrodomestico(precio, garantia, marca, modelo, voltage, color){
	setTipo_microonda(tipo_microondas);
}

void Microondas::mostrar_microonda(){
	mostrar_Electrodomestico();
	cout << "Tipo de Microonda:" << tipo_microonda << endl;

}

