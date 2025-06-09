#include <iostream>
using namespace std;

int main() {
    float n1, n2, n3, P;
    cout << "Ingrese sus tres notas separadas por espacio: ";
    cin >> n1 >> n2 >> n3;

    P = (n1 + n2 + n3) / 3;

    if (P >= 70) {
        cout << "Promedio: " << P << " - Aprobado" << endl;
    } else {
        cout << "Promedio: " << P << " - Desaprobado" << endl;
    }

    cout << "Fin del programa." << endl;
    return 0;
}