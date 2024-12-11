//Lista 3-exercicío 7, funções.
#include <iostream>
#include <cmath> // Para a função pow e constante M_PI

using namespace std;

// Função para calcular o volume da esfera
double calcularVolumeEsfera(double raio) {
    const double PI = M_PI; // Valor de PI definido na biblioteca <cmath>
    return (4.0 / 3.0) * PI * pow(raio, 3);
}

int main() {
    double raio;

    // Entrada do raio da esfera
    cout << "Digite o raio da esfera: ";
    cin >> raio;

    // Chamada da função e exibição do resultado
    double volume = calcularVolumeEsfera(raio);
    cout << "O volume da esfera com raio " << raio << " é: " << volume << endl;

    return 0;
}
