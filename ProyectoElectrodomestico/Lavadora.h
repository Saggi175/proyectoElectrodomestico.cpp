#include<iostream>
#ifndef LAVADORA_H_
#define LAVADORA_H_
#include"Electrodomestico.h"

using namespace std;

class Lavadora : public Electrodomestico{
	private:
		string tipo_lavadora;
		int puerta;
		int ciclo_lavado;
	public:	
		Lavadora(string, int, int, int, int, string, string, int, string);
		string getTipo_lavadora();
		int getPuerta();
		int getCiclo_lavadora();
		
		void mostrar_Lavadora();
		void setTipo_lavadora(string);
		void setPuerta(int);
		void setCiclo_lavado(int);
};

#endif
