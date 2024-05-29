/*5) Diseñe un programa que lea un número comprendido entre 1 y 9.999.999. El programa debe imprimir de cuentas cifras se compone el número.
Por ejemplo el número es 345, se compone de 3 cifras
Por ejemplo el número es 999, se compone de 3 cifras
Por ejemplo el número es 1345, se compone de 4 cifras
Por ejemplo el número es 78, se compone de 2 cifras*/
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int Numero;

    cout << "Ingrese un número entre 1 y 9,999,999: ";
    cin >> Numero;

    if (Numero < 1 || Numero > 9999999) {
        cout << "El número ingresado está fuera del rango permitido" << endl;
    }
    else{

    int Cifras = log10(Numero) + 1;

    cout << "El número es " << Numero << ", se compone de " << Cifras << " cifras" << endl;
    }
    return 0;
}
