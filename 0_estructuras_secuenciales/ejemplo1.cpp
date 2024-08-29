#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int num1, num2, suma, resta, multi, div;
	
	cout << "Ingrese el primer número: " ;
	cin >> num1 ;
	cout << "Ingrese el segundo número: " ;
	cin >> num2 ;
	
	suma = num1 + num2 ;
	resta = num1 - num2 ;
	multi = num1 * num2 ;
	div = num1 / num2 ;
	
	cout << "La suma es: " << suma << endl;	
	cout << "La resta es: " << resta << endl;	
	cout << "La multiplicación es: " << multi << endl;
	cout << "La división es: " << div << endl;
	
	return 0;
}

