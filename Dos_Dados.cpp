/*4) Diseñe el programa que simula el lanzamiento de 2 dados. Un usuario gana cuando ambos dados sacan el mismo número, 
o cuando la sumatoria de las mismas es 11. Debe utilizar números aleatorios.*/
#include <iostream>
#include <cstdlib>  
#include <ctime>   

using namespace std; 

int main() {
    srand(static_cast<unsigned>(time(0)));

    int dado1 = rand() % 6 + 1;
    int dado2 = rand() % 6 + 1;

    cout << "Dado 1: " << dado1 << endl;
    cout << "Dado 2: " << dado2 << endl;

    if (dado1 == dado2) {
        cout << "Has Ganado. Ambos dados tienen el mismo número" << endl;
    } else if (dado1 + dado2 == 11) {
        cout << "Has Ganado. La suma de los dados es 11" << endl;
    } else {
        cout << "Intentalo de nuevo." << endl;
    }

    return 0;
}
