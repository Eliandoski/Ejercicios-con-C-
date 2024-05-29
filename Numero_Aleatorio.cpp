/*2) Diseñe el programa que genera un número aleatorio entre 1 y 6. Si el número es impar se muestra "Felicidades, ganaste", 
de lo contrario "Perdiste, sigue intentando"*/
#include <iostream>
#include <cstdlib>  
#include <ctime>    

using namespace std;

int main() {
    srand((unsigned)time(NULL)); 
    int n = rand() % 6 + 1; 

    cout << endl << "El número aleatorio es " << n;

    if (n % 2 != 0) {
        cout << endl << "Felicidades Ganaste";
    } else {
        cout << endl << "Perdiste, sigue intentando";
    }

    return 0;
}
