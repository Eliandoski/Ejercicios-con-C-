/*3) Diseñe el programa que simula el lanzamiento de un dado de 6 caras. Utilice números aleatorios para generar en número entre 1 y 6.
Si el dado sale 1 se muestra    *
Si el dado sale 2 se muestra    - -
Si el dado sale 3 se muestra    + + +
Si el dado sale 4 se muestra    @ @ @ @
Si el dado sale 5 se muestra    |   |   |   |   |
Si el dado sale 6 se muestra    :-)    :-)     :-)     :-)    :-)     :-)
Cuando aparece un 6, el usuario ha ganado.*/
#include <iostream>
#include <cstdlib> 
#include <ctime>   

using namespace std;

int main() {
    srand(time(0));
    int resultado = rand() % 6 + 1;
    cout << "Número del Dado: " << resultado << endl;
    if (resultado == 1) {
        cout << " * " << endl;
    } else if (resultado == 2) {
        cout << " - - " << endl;
    } else if (resultado == 3) {
        cout << " + + + " << endl;
    } else if (resultado == 4) {
        cout << " @ @ @ @ " << endl;
    } else if (resultado == 5) {
        cout << " |   |   |   |   | " << endl;
    } else if (resultado == 6) {
        cout << " :-)    :-)    :-)    :-)    :-)    :-) " << endl;
        cout << "Has Ganado" << endl;
    }

    return 0;
}
