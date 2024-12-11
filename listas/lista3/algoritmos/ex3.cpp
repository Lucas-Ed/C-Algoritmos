//Lista 3-exercicío 3, N's a á f.
#include <iostream>
#include <locale>

using namespace std;

int main(int argc, char** argv) {
    setlocale(LC_ALL, "Portuguese");

    // Declarando os vetores de 2 posições
    int vetorA[2];
    int vetorB[2];
    int soma, somaB, somaA, somaC, produtoEscalar;

    // Preenchendo o vetor com dados do usuário
    cout << "A) Vetor-A Informe o primeiro número: ";
    cin >> vetorA[0];
    
    cout << "A)-A Informe o segundo número: ";
    cin >> vetorA[1];
    
    cout << "A) Vetor-B Informe o primeiro número: ";
    cin >> vetorB[0];
    
    cout << "A)-B Informe o segundo número: ";
    cin >> vetorB[1];

    // Calculando as operações
    soma = vetorA[0] + vetorA[1] + vetorB[0] + vetorB[1];
    somaA = vetorA[0] + vetorA[1];
    somaB = vetorB[0] + vetorB[1];
    somaC = (vetorB[0] + vetorB[1]) - (vetorA[0] + vetorA[1]);

    // Cálculo do produto escalar
    produtoEscalar = vetorA[0] * vetorB[0] + vetorA[1] * vetorB[1];

    // Mostrando os resultados
    cout << "B) A soma do vetorA: " << somaA << endl;
    cout << "C) A soma do vetorB: " << somaB << endl;
    cout << "D) Soma dos números informados: " << soma << endl;
    cout << "E) Subtração B de A: " << somaC << endl;
    cout << "F) Produto escalar de A por B: " << produtoEscalar << endl;

    return 0;
}
