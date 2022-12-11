#include<iostream>
#include"Electrodomestico.h"
using namespace std;

int Electrodomestico::getPrecio() { return precio; }
int Electrodomestico::getGarantia() { return garantia; }
string Electrodomestico::getMarca() { return marca; }
string Electrodomestico::getModelo() { return modelo; }
int Electrodomestico::getVoltage() { return voltage; }
string Electrodomestico::getColor() { return color; }

void Electrodomestico::setMarca(string marca) { this->marca=marca; }
void Electrodomestico::setModelo(string modelo) { this->modelo=modelo; }
void Electrodomestico::setVoltage(int voltage) { this->voltage=voltage; }
void Electrodomestico::setColor(string color) { this->color=color; }
void Electrodomestico::setPrecio(int precio) { this->precio=precio; }
void Electrodomestico::setGarantia(int garantia) { this->garantia=garantia; }

Electrodomestico::Electrodomestico(int precio, int garantia, string marca, string modelo, int voltaje, string color){
	setMarca(marca);
	setModelo(modelo);
	setVoltage(voltage);
	setColor(color);
	setPrecio(precio);
	setGarantia(garantia);
}

void Electrodomestico::mostrar_Electrodomestico(){
	cout << "Precio: " << precio << endl;
	cout << "Marca: " << marca << endl;
	cout << "Modelo: " << modelo << endl;
	cout << "Voltage: " << voltage << endl;
	cout << "Color: " << color << endl;
	cout << "Garantia: " << garantia << endl;
}
