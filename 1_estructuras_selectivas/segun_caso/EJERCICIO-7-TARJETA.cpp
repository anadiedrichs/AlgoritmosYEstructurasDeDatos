#include <iostream>
using namespace std;

// DECLARACION DE CONSTANTES
#define MASTERCARD (1.10)
#define AMEX (1.08)
#define VISA  (1.04)
#define DESCUENTO (0.05)

int main(int argc, char *argv[]) {
	// DECLARACION DE VARIABLES REALES
	float ventas;
	// DECLARACION DE VARIABLES ENTERAS
	int cliente, metodoPago, dia;
	
	cout<<"Ingrese el metodo de pago" << endl;
	cout<<"0: Master Card" << endl;
	cout<<"1: American Express" << endl;
	cout<<"2: VISA" << endl;
	cout<<"3: Debito, Efectivo u otro"<< endl;	
	cin>>metodoPago;
	
	cout<<"Cantidad de comensales"<<endl;
	cin>>cliente;
	
	cout<<"Dia de la semana:"<<endl;
	cout<<"0: Lunes\n1: Martes\n2: Miercoles"<<endl;
	cout<<"3: Jueves\n4: Viernes\n5: Sabado\n6: Domingo"<< endl;
	cin>>dia;
	
	std::cout<<"Cual es el precio de la venta?"<<std::endl;
	std::cin>>ventas;
	
	// segun el método de pago
	switch(metodoPago){
	case 0:
		ventas= ventas*MASTERCARD;
		std::cout<<"El metodo de pago es:\nMaster Card"<< std::endl;
		break;
	case 1:
		ventas= ventas*AMEX;
		std::cout<<"El metodo de pago es:\nAmerican Express"<< std::endl;
		break;
	case 2:
		ventas= ventas*VISA;
		std::cout<<"El metodo de pago es:\nVISA"<< std::endl;
		break;
	case 3:
		std::cout<<"El metodo de pago es:\nDebito, Efectivo u otro"<< std::endl;
		break;
	default: 
		std::cout<<"El metodo de pago es incorrecto \n"<< std::endl;
		return 0;
		break;
	}
	
	if(cliente >= 2){
		
		switch(dia){
		case 0:
			ventas = ventas - ventas*DESCUENTO;
			std::cout<<"dia Lunes\n"<<"Alquilo para "<<cliente<<" persona/s"<<std::endl;
			break;
		case 2:
			std::cout<<"dia Miercoles\n"<<"Alquilo para "<<cliente<<" persona/s"<<std::endl;
			break;
		}
	}
	std::cout<<"El total a pagar es de: $"<< ventas<< std::endl;
	
	return 0;
}
