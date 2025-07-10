#include <iostream>
using namespace std; 
void IntercambiarNumero() {
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
}

void MayorDeTresNumeros() {
	// Encontrar el mayor de 3 numeros
	int a, b, c; 
	cout << "---------------------------" << endl; 
	cout << "Ingrese A: "; cin >> a; 
	cout << "Ingrese B: "; cin >> b;
	cout << "Ingrese C: "; cin >> c; cout << endl; 
	cout << "---------------------------" << endl;
	int mayor = a; 
	if (b > mayor) mayor = b;
	if (c > mayor) mayor = c; 
	if (a == b || a == c || b == c) cout << "Todos los numeros son iguales" << endl << endl; 
	cout << "El numero mayor es: " << mayor << endl << endl; 
	cout << "---------------------------" << endl;
}

bool NumeroEsPrimo(int num) {
	int cont = 0; 
	if (num <= 1) { // Numeros menores a 1 no son Primos
		return false; 
	}
	for (int i = 1; i <= num; i++) {
		if (num % i == 0) cont++;
	}
	return cont == 2; 
}

void NumeroPrimo() {
	int A, B;
	cout << "-------------------" << endl;
	cout << "A: "; cin >> A;
	cout << "B: "; cin >> B;
	cout << "-------------------" << endl;

	for (int i = A; i <= B; i++) {
		if (NumeroEsPrimo(i)) {
			cout << i << " ";
		}
	}
	cout << endl;
}

int FactorialNumero(int num) {
	int fact = 1; 
	for (int i = 1; i <= num; i++) {
		fact *= i; 
	}
	return fact; 
}

void Factorial() {
	int num; 
	cout << "--------------------" << endl; 
	cout << "Ingrese un numero: "; cin >> num; 
	cout << "--------------------" << endl;
	if (num < 0) cout << "Numero negativo" << endl;
	else cout << "El factorial de " << num << " es: " << FactorialNumero(num) << endl << endl << endl; 

}

int main() {
	
	return 0; 
}