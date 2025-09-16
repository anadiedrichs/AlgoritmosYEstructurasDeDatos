/*
Dado un número entero positivo, implementa una función recursiva que muestra una secuencia de números en la consola siguiendo estas reglas:

* Si el número ingresado es impar, el programa debe mostrar todos los números enteros desde 0 hasta el número ingresado, inclusive.

* Si el número ingresado es par, el programa debe mostrar únicamente los números pares desde 0 hasta el número ingresado, inclusive.

Requisitos
El programa debe validar que el número ingresado por el usuario no sea negativo. Si lo es, debe volver a solicitarlo.

La lógica principal para generar y mostrar la secuencia de números debe implementarse obligatoriamente en una función recursiva.
*/

#include <iostream>
#include <string>
using namespace std;


void Mostrar (int original, int nro) {
	if (nro	==0){
		cout<<nro<<" ";
	}else{
		if (original%2!=0){
			Mostrar(original, nro-1);
			cout<<nro<<" ";
		}else {
			Mostrar(original, nro-2);
			cout<<nro<<" ";
		}
	}
}

int main(int argc, char *argv[]) {
	int original;
	int nro;
	do {
		cout<<"Ingrese un numero entero positivo:"<<endl;
		cin>>original;
	} while(original<0);
	nro = original;
	cout<<"El/Los valor/es es/son: ";
	Mostrar (original, nro);
}

