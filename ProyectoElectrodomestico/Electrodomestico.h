#include <iostream>
#ifndef ELECTRODOMESTICO_H_
#define ELECTRODOMESTICO_H_

using namespace std;

class Electrodomestico{
	private:
		int precio;
		int garantia;
		string marca;
		string modelo;
		int voltage;
		string color;
	
	public:
		Electrodomestico(int, int, string, string, int, string);
		string getMarca();
		string getModelo();
		int getVoltage();
		string getColor();
		int getPrecio();
		int getGarantia();
		
		void setMarca(string);
		void setModelo(string);
		void setVoltage(int);
		void setColor(string);
		void setPrecio(int);
		void setGarantia(int);
		
		void mostrar_Electrodomestico();	
};

#endif
