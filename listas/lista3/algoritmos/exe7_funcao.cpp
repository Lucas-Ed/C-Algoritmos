//Lista 3-exercic�o 7, fun��es.
#include <iostream>
#include <cmath> // Para a fun��o pow e constante M_PI

using namespace std;

// Fun��o para calcular o volume da esfera
double calcularVolumeEsfera(double raio) {
    const double PI = M_PI; // Valor de PI definido na biblioteca <cmath>
    return (4.0 / 3.0) * PI * pow(raio, 3);
}

int main() {
    double raio;

    // Entrada do raio da esfera
    cout << "Digite o raio da esfera: ";
    cin >> raio;

    // Chamada da fun��o e exibi��o do resultado
    double volume = calcularVolumeEsfera(raio);
    cout << "O volume da esfera com raio " << raio << " �: " << volume << endl;

    return 0;
}
