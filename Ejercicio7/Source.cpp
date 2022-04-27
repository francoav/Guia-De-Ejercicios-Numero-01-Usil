#include <iostream>

using namespace std;


int main()
{

    float result, n1, n2, n3;



    cout << "Ingrese Nota 1: "; cin >> n1;
    cout << "Ingrese Nota 2: "; cin >> n2;
    cout << "Ingrese Nota 3: "; cin >> n3;


    result = (n1 + n2 + n3) / 3;


   

    cout << "\n El promedio es: " << result;

    return 0;
}