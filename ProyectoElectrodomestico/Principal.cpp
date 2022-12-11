#include <iostream>
#include"Electrodomestico.h"
#include"Lavadora.h"
#include"Licuadora.h"
#include"Nevera.h"
#include"Microondas.h"

void lavadora(){
	int precio, garantia, ciclo_lavado, voltaje, puerta;
	string marca, modelo, color, tipo_lavadora;
	
	cout << "Digite el precio de la lavadora: "<<endl;
	cin >> precio;
	fflush(stdin);
	cout << "Digite la garantia de la lavadora: "<<endl;
	cin >> garantia;
	fflush(stdin);
	cout << "Digite la marca de la lavadora: "<<endl;
	getline(cin, marca);
	fflush(stdin);
	cout << "Digite el modelo de la lavadora: "<<endl;
	getline(cin, modelo);
	fflush(stdin);
	cout << "Digite la capacidad de voltaje de la lavadora: "<<endl;
	cin >> voltaje;
	fflush(stdin);
	cout << "Digite el color de la lavadora: "<<endl;
	getline(cin, color);
	fflush(stdin);
	cout << "Digite el tipo de lavadora: "<<endl;
	getline(cin, tipo_lavadora);
	fflush(stdin);
	cout << "Digite la cantidad de puerta de la lavadora: "<<endl;
	cin >> puerta;
	fflush(stdin);
	cout << "Digite el ciclo de lavado de la lavadora: "<<endl;
	cin >> ciclo_lavado;
	
	Lavadora L(tipo_lavadora, puerta, ciclo_lavado, precio, garantia, marca, modelo, voltaje, color);
	
	system("cls");
	
	L.mostrar_Lavadora();
}

void licuadora(){
	int precio, garantia, velocidad, voltaje, capacidad_tazas;
	string marca, modelo, color, tipo_licuadora;
	
	cout << "Digite el precio de la licuadora: "<<endl;
	cin >> precio;
	fflush(stdin);
	cout << "Digite la garantia de la licuadora: "<<endl;
	cin >> garantia;
	fflush(stdin);
	cout << "Digite la marca de la licuadora: "<<endl;
	getline(cin, marca);
	fflush(stdin);
	cout << "Digite el modelo de la licuadora: "<<endl;
	getline(cin, modelo);
	fflush(stdin);
	cout << "Digite la capacidad de voltaje de la licuadora: "<<endl;
	cin >> voltaje;
	fflush(stdin);
	cout << "Digite el color de la licuadora: "<<endl;
	getline(cin, color);
	fflush(stdin);
	cout << "Digite el tipo de licuadora: "<<endl;
	getline(cin, tipo_licuadora);
	fflush(stdin);
	cout << "Digite la cantidad de tazas de la licuadora: "<<endl;
	cin >> capacidad_tazas;
	fflush(stdin);
	cout << "Digite la velocidad de la licuadora: "<<endl;
	cin >> velocidad;
	
	Licuadora L(tipo_licuadora, capacidad_tazas, velocidad, precio, garantia, marca, modelo, voltaje, color);
	
	system("cls");
	
	L.mostrar_Licuadora();
}

void nevera(){
	int precio, garantia, puerta, voltaje, capacidad_congelar;
	string marca, modelo, color, tipo_nevera;
	
	cout << "Digite el precio de la nevera: "<<endl;
	cin >> precio;
	fflush(stdin);
	cout << "Digite la garantia de la nevera: "<<endl;
	cin >> garantia;
	fflush(stdin);
	cout << "Digite la marca de la nevera: "<<endl;
	getline(cin, marca);
	fflush(stdin);
	cout << "Digite el modelo de la nevera: "<<endl;
	getline(cin, modelo);
	fflush(stdin);
	cout << "Digite la capacidad de voltaje de la nevera: "<<endl;
	cin >> voltaje;
	fflush(stdin);
	cout << "Digite el color de la nevera: "<<endl;
	getline(cin, color);
	fflush(stdin);
	cout << "Digite el tipo de neveraa: "<<endl;
	getline(cin, tipo_nevera);
	fflush(stdin);
	cout << "Digite la cantidad de puertas de la nevera: "<<endl;
	cin >> puerta;
	fflush(stdin);
	cout << "Digite la capacidad de congelar de la nevera: "<<endl;
	cin >> capacidad_congelar;
	
	Nevera N(tipo_nevera, puerta, capacidad_congelar, precio, garantia, marca, modelo, voltaje, color);
	
	system("cls");
	
	N.mostrar_Nevera();
}

void microondas(){
	int precio, garantia, voltage;
	string tipo_microondas, marca, modelo, color;
	
	cout << "Digite el precio de la nevera: "<<endl;
	cin >> precio;
	fflush(stdin);
	cout << "Digite la garantia de la nevera: "<<endl;
	cin >> garantia;
	fflush(stdin);
	cout << "Digite la marca de la nevera: "<<endl;
	getline(cin, marca);
	fflush(stdin);
	cout << "Digite el modelo de la nevera: "<<endl;
	getline(cin, modelo);
	fflush(stdin);
	cout << "Digite la capacidad de voltaje de la nevera: "<<endl;
	cin >> voltage;
	fflush(stdin);
	cout << "Digite el color de la nevera: "<<endl;
	getline(cin, color);
	fflush(stdin);
	cout << "Digite el tipo de neveraa: "<<endl;
	getline(cin, tipo_microondas);
	
	Microondas M(tipo_microondas, precio, garantia, marca, modelo, voltage, color);
	
	system("cls");
	
	M.mostrar_microonda();
}

int main(int argc, char** argv){
	int eleccion;
	
	do{
		system("cls");
		
		cout << "Elija un Electrodomestico:\n \n1-Digitar una lavadora \n2-Digitar una licuadora \n3-Digitar una nevera \n4-Digitar un microondas \n5-Salir"<<endl;
		cin >> eleccion;
		
		system("cls");
		
		switch(eleccion){
			case 1: 
				lavadora();
				system("pause");
			break;
			case 2: 
				licuadora();
				system("pause");
			break;
			case 3: 
				nevera();
				system("pause");
			break;
			case 4: 
				microondas();
				system("pause");
			break;
			default: 
				cout << "Eleccion Incorrecta" << endl;
				system("pause");
		}
	}while(eleccion != 5);
	return 0;
}

