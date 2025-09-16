#include <iostream>
using namespace std;
#define MAXIMO 5
int main(int argc, char *argv[]) {
	int i;	
	char F[MAXIMO] = "HOLA";
	for (i=0; i<MAXIMO; i++)
	{
		std::cout << "posicin  " << i << " contenido " << F[i] << endl;
	}	
	std::cout << "F contenido " << F << endl;
	std::cout << "el segundo elemento de F: " << F[1] << endl;
	char G[] = "Este es un texto muy largo";
	std::cout << "G  contenido " << G << endl;
	char H[] = {'@','4',64,'\0'}; //'\0' TERMINADOR DE CADENA 
	cout << "------------------"  << endl;
	std::cout << "H  contenido " << H << endl;
}



