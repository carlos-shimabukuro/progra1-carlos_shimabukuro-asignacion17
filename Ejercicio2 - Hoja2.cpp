#include <iostream>
using namespace std;

void menu(char *op) {
	cout << " [A] Sumar 2 Numeros Complejos " << endl;
	cout << " [B] Restar 2 Numeros Complejos " << endl;
	cout << " [X] Salir del Programa " << endl;
	cout << endl;
	do
	{
		cout << "Opcion : "; cin >> op;
		*op = toupper(*op);
		cout << endl;

		if ((*op == 'A') || (*op == 'B') || (*op == 'X'))
		{
			break;
		}
	} while (*op != 'A' || *op != 'B' || *op != 'X');
}

void suma(int r1, int r2, int i1, int i2) {
	if (i1 - i2 >= 0)
	{
		cout << "Suma = " << r1 + r2 << " + " << i1 + i2 << "i " << endl;
	}
	else
	{
		cout << "Suma = " << r1 + r2 << i1 + i2 << "i " << endl;
	}
}

void resta(int r1, int r2, int i1, int i2) {
	if (i1 - i2 >= 0)
	{
	cout << "Resta = " << r1 - r2 << " + " << i1 - i2 << "i " << endl;
	}
	else
	{
	cout << "Resta = " << r1 - r2 << i1 - i2 << "i " << endl;
	}
}

int main() {
	char *oP = new char;
	int	r1, r2, i1, i2;
	do
	{
		menu(oP);

		*oP = toupper(*oP);
		if ((*oP == 'A') || (*oP == 'B') || (*oP == 'X'))
		{
			switch (*oP)
			{
			case 'A': 
				cout << "--- Numero 1 ---" << endl;
				cout << "Parte Real : "; cin >> r1;
				cout << "Parte Imaginaria : "; cin >> i1;
				cout << endl;
				cout << "--- Numero 2 ---" << endl;
				cout << "Parte Real : "; cin >> r2;
				cout << "Parte Imaginaria : "; cin >> i2;

				suma(r1, r2, i1, i2); break;

			case 'B':
				cout << "--- Numero 1 ---" << endl;
				cout << "Parte Real : "; cin >> r1;
				cout << "Parte Imaginaria : "; cin >> i1;
				cout << endl;
				cout << "--- Numero 2 ---" << endl;
				cout << "Parte Real : "; cin >> r2;
				cout << "Parte Imaginaria : "; cin >> i2;
				resta(r1, r2, i1, i2); break;

			case 'X': cout << "Salir del Programa" << endl; break;
			}

			break;
		}
		else
		{
			cout << "Opcion Incorrecta" << endl;
		}
	} while (*oP != 'A' || *oP != 'B' || *oP != 'X');

	cout << endl; system("pause"); return (0);
}
