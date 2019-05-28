#include <iostream>
#include <math.h>

using namespace std;

void menu(int *opcion) {
	cout << "--- Menu de opciones ---" << endl;
	cout << " [1] Calcular el seno " << endl;
	cout << " [2] Hallar el enesimo digito " << endl;
	cout << " [3] Fin " << endl;
	cout << endl;
	cout << "Opcion : "; cin >> *opcion;
	cout << endl;
}

int factorial(int n) {
	int fact = 1;
	for (int i = 1; i <= n; i++)
	{
		fact *= i;
	}
	return fact;
}

double senX(int n, int x) {
	double sen = 0;
	for (int i = 1; i <= n; i++)
	{
		sen += (pow(-1, i)) * ((pow(x, 2 * i + 1)) / factorial(2 * i + 1));
	}
	return sen;
}
short digit(int n, int num) {
	short dig;
	dig = num / pow(10, n);
	if (dig < 1) dig = -1;
	else if (dig > 1) dig = dig % 10;
	return dig;
}

int main() {

	int n, x, num;

	int *opcion = new int;
	do
	{
		menu(opcion);
		switch (*opcion)
		{
		case 1:
			do
			{
				cout << "Ingrese Valor de n : "; cin >> n;
			} while (n < 0);
			cout << "Ingrese Valor de X : "; cin >> x;
			cout << endl;
			cout << "El seno del angulo X = " << senX(n, x) << endl; break;

		case 2:
			do
			{
				cout << "Ingresa valor de N : "; cin >> n;
			} while (n < 0);
				cout << "Ingresa valor de NUM : "; cin >> num;
				cout << endl;
			cout << "El N - esimo digito es = " << digit(n, num); break;

		case 3:
			cout << "Fin" << endl; break;

		default:
			cout << "Opcion Incorrecta" << endl << endl; break;
		}
	} while (*opcion < 1 || *opcion > 3);

	delete opcion;

	cout << endl; system("pause"); return 0;
}