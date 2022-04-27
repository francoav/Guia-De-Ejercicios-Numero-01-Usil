#include<iostream>
#include<math.h>
using namespace std;

int main() {
	float x, y, res;

	cout << "Ingrese valor de x: "; cin >> x;
	cout << "Ingresevalor de y: "; cin >> y;

	res = (sqrt(x)) / (pow(y, 2) - 1);
	cout << "El resultado de la funcion es: " << res ;

	return 0;
}