#include<iostream>
#ifndef LICUADORA_H_
#define LICUADORA_H_
#include"Electrodomestico.h"

using namespace std;

class Licuadora : public Electrodomestico{
	private:
		string tipo_licuadora;
		int velocidad;
		int capacidad_tazas;
	public:
		Licuadora(string, int, int, int, int, string, string, int, string);
		
		string getTipo_licuadora();
		int getVelocidad();
		int getCapacidad_tazas();
		
		void setTipo_licuadora(string);
		void setVelocidad(int);
		void setCapacidad_tazas(int);
		void mostrar_Licuadora();
		
	
};

#endif
