#include <iostream>

using namespace std;


int main()
{

    int aux, a, b;

   

    cout << "Digite la variable a:"; cin >> a;
    cout << "Digite la variable b:"; cin >> b;
    

    aux = a;
    a = b;
    b = aux;

    cout << "\nAhora, el valor de a es: " << a ;
    cout << "\nAhora, el valor de b es: " << b ;

    return 0;
}