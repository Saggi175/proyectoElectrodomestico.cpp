#include<iostream>
#ifndef MICROONDAS_H_
#define MICROONDAS_H_
#include"Electrodomestico.h"

using namespace std;

class Microondas : public Electrodomestico{
	private:
		string tipo_microonda;
	public:
		Microondas(string, int, int, string, string, int, string);
		string getTipo_microonda();
		
		void setTipo_microonda(string);
		void mostrar_microonda();	
};

#endif
