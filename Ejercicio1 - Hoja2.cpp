#include <iostream>
#include <math.h>

using namespace std;

void menu(int *opcion) {
	cout << "[1] Determinar el factorial de un número" << endl;
	cout << "[2] Calcular el valor de ea" << endl;
	cout << "[3] Imprime rombo" << endl;
	cout << "[4] Fin" << endl;
	cout << endl;
	cout << "Opcion : "; cin >> *opcion;
	cout << endl;
}

bool validadFactorial(int n) {
	return (n >= 1);
}

void factorial1(int n) {
	int fact=1;

	if (validadFactorial(n) == true)
	{
		for (int i = 1; i <= n; i++)
		{
			fact = fact *i;
		}
		cout << "Factorial de " << n << " = " << fact << endl;
	}
	else
	{
		cout << "Numero Invalido" << endl;
	}
}

int factorial(int &n) {
	int fact = 1;
	for (int i = 1; i <= n; i++)
	{
		fact = fact * i;
	}
	return (fact);
}

double exponencial(int &a, int &k) {
	double expo = 0, expoF;
	for (int i = 1; i <= k; i++)
	{
		expo = expo + (pow(a, i) / factorial(i));
	}
	expoF = expo = 1;
	return (expoF);
}

void dibuja(int &n) {
	for (int j = 1; j <= n; ++j) {
		for (int i = 1; i <= n - j; ++i)
			cout << "  ";
		for (int i = 1; i <= 2 * j - 1; ++i)
			cout << " " << i;
		cout << endl;
	}
	for (int j = n - 2; j >= 0; --j) {
		for (int i = 1; i <= n - j - 1; ++i)
			cout << "  ";
		for (int i = 1; i <= 2 * j + 1; ++i)
			cout << " " << i;
		cout << endl;
	}
}

int main() {
	
	int n, a, k;

	int *opcion = new int;
	do
	{
		menu(opcion);
		switch (*opcion)
		{
		case 1: 

			cout << "Ingrese Valor de n : "; cin >> n;
			factorial1(n); break;
	
 		case 2:
			do
			{
				cout << "Ingresa valor de a : "; cin >> a;
				if (a >= 0)
				{
					break;
				}
			} while (a < 0);
			do
			{
				cout << "Ingresa valor de k : "; cin >> k;
				if ((1 <= k) && (k <= 20))
				{
					break;
				}
			} while ((k < 1) || (20 < k));
			cout << "El valor exponencial de ea (k = " << k << "; a = " << a << " ) = " << exponencial(a, k); break;

		case 3: 
			cout << "Ingrese Valor de n : ";cin >> n;
			dibuja(n); break;

		case 4: 
			cout << "Salir" << endl; break;

		default:
			cout << "Opcion Incorrecta" << endl << endl; break;
		}
	} while (*opcion < 1 || *opcion > 4);

	delete opcion;

	cout << endl; system("pause"); return 0;
}