#include <iostream>
#include <string>
//Exercici Pràctic: Escriu un programa que determini si un dígit (0-9) és parell o senar amb les següents
//condicions:
//1. Utilitza la classe std::string per definir dos textos : "parell" i "senar".
//2. En iniciar el programa, crea un vector dinàmic de booleans amb bool* elMeuVector = new bool[10]; i
//calcula si els números de 0 a 9 són parells o senars.
//3. Demana un número a l'usuari per comprovar dins d'un bucle infinit while (true).
using namespace std;

bool esParell(int n) {
	return n % 2 == 0;
}

int main() {

	int numero;
	string textParell = "parell";
	string textSenar = "senar";

	bool* elMeuVector = new bool[10];


	for (int i = 0; i <10 ; i++) {

		elMeuVector[i] = esParell(i);

	}

	while (true) {
		cout << "Introdueix un numero del 0-9: ";
		cin >> numero; 
		if (numero >= 0 && numero <= 9) {
			// Consultem el valor directament al vector dinàmic
			string resultat = elMeuVector[numero] ? textParell : textSenar;
			cout << "El numero " << numero << " es " << resultat << "." << endl << endl;
		}
		else {
			cout << "Numero fora de rang (0-9). Surtint del programa..." << endl;
			break;
		}
	}
	delete[] elMeuVector;
	return 0;
}


