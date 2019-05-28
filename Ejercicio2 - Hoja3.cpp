#include <iostream>
#include <cstdlib> 
#include <ctime> 

using namespace std;

int generarN(int &a, int &b, int &c, int &d) {
	srand(time(NULL));
	a = (rand() % 40) + 1;
	b = (rand() % 40) + 1;
	c = (rand() % 40) + 1;
	d = (rand() % 40) + 1;
	return a, b, c ,d;
}
void mayor() {
	int a, b, c, d;
	generarN(a, b, c, d);
	if (a > b && a > c && a > d) {
		cout << "El numero mayor es = " << a << endl;
	}
	if (b > a && b > c && b > d) {
		cout << "El numero mayor es = " << b << endl;
	}
	if (c > a && c > b && c > d) {
		cout << "El numero mayor es = " << c << endl;
	}
	if (d > a && d > b && d > c) {
		cout << "El numero mayor es = " << d << endl;
	}
}

void menor() {
	int a, b, c, d;
	generarN(a, b, c, d);

	if (a < b && a < c && a < d) {
		cout << "El numero menor es = " << a << endl;
	}
	if (b < a && b < c && b < d) {
		cout << "El numero menor es = " << b << endl;
	}
	if (c < a && c < b && c < d) {
		cout << "El numero menor es = " << c << endl;
	}
	if (d < a && d < b && d < c) {
		cout << "El numero menor es = " << d << endl;
	}
}

void mayorA() {
	int a, b, c, d;
	generarN(a, b, c, d);

	if ((b > a && a > c && a > d) || (c > a && a > b && a > d) || (d > a && a > b && a > c)) 
	{
		cout << "El segundo numero mayor es " << a << endl;
	}

	if ((c > b && b > a && b > d || (a > b && b > c && b > d) || d > b && b > a && b > c))
	{
		cout << "El segundo numero mayor es " << b << endl;
	}

	if ((a > c && c > b && c > d) || (b > c && c > a && c > d) || (d > c && c > a && c > b)) 
	{
		cout << "El segundo numero mayor es " << c << endl;
	}

	if ((a > d && d > b && d > c) || (b > d && d > a && d > c) || (c > d && d > a && d > b)) 
	{
		cout << "El segundo numero mayor es " << d << endl;
	}
}

int main() {
	int a, b, c, d;
	generarN(a, b, c, d);
	cout << "a =" << a << endl;
	cout << "b =" << b << endl;
	cout << "c =" << c << endl;
	cout << "a =" << d << endl;
	cout << endl;
	mayor();
	cout << endl;
	menor();
	cout << endl;
	mayorA();
	cout << endl;

	cout << endl; system("pause"); return 0;
}