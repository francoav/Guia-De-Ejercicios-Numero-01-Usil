#include<iostream>
using namespace std;

int main() {

	float  notapractica, notateorica, notaparticipacion, notaFinal;

	cout << "Ingrese nota de practica 30%: "; cin >> notapractica;	
	cout << "Ingrese nota teoria 60%: "; cin >> notateorica;	
	cout << "Ingrese nota de participacion 10%: "; cin >> notaparticipacion;
	

	notapractica = notapractica * 0.30;
	notateorica *= 0.60;
	notaparticipacion *= 0.10;

	notaFinal = notaparticipacion + notateorica + notapractica;

	cout << "La nota final es: " << notaFinal;


	return 0;


}