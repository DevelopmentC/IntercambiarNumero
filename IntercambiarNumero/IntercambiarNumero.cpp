#include <iostream>
using namespace std; 
int main() {
	// Intercambiar dos numeros sin usar aux
	int a, b; 
	cout << "Valor de A: "; cin >> a; 
	cout << "Valor de B: "; cin >> b; cout << endl; 
	
	cout << "A: " << a << " B: " << b << endl << endl; 

	a = a + b; // A = 5 + 3  -> 8
	b = a - b; // B = 3
	a = a - b; // A = 5

	cout << "Nuevo Valor" << endl; 
	cout << "A: " << a << "\tB: " << b << endl; 
	return 0; 
}