#include<iostream>
#ifndef Nevera_H_
#define Nevera_H_
#include"Electrodomestico.h"

using namespace std;

class Nevera : public Electrodomestico{
	private:
		string tipo_nevera;
		int puerta;
		int capacidad_congelar;
	public:
		Nevera(string, int, int, int, int, string, string, int, string);
		string getTipo_nevera();
		int getPuerta();
		int getCapacidad_congelar();
		
		void setTipo_nevera(string);
		void setPuerta(int);
		void setCapacidad_congelar(int);
		void mostrar_Nevera();
};

#endif
