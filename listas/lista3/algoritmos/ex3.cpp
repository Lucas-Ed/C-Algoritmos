//Lista 3-exercic�o 3, N's a � f.
#include <iostream>
#include <locale>

using namespace std;

int main(int argc, char** argv) {
    setlocale(LC_ALL, "Portuguese");

    // Declarando os vetores de 2 posi��es
    int vetorA[2];
    int vetorB[2];
    int soma, somaB, somaA, somaC, produtoEscalar;

    // Preenchendo o vetor com dados do usu�rio
    cout << "A) Vetor-A Informe o primeiro n�mero: ";
    cin >> vetorA[0];
    
    cout << "A)-A Informe o segundo n�mero: ";
    cin >> vetorA[1];
    
    cout << "A) Vetor-B Informe o primeiro n�mero: ";
    cin >> vetorB[0];
    
    cout << "A)-B Informe o segundo n�mero: ";
    cin >> vetorB[1];

    // Calculando as opera��es
    soma = vetorA[0] + vetorA[1] + vetorB[0] + vetorB[1];
    somaA = vetorA[0] + vetorA[1];
    somaB = vetorB[0] + vetorB[1];
    somaC = (vetorB[0] + vetorB[1]) - (vetorA[0] + vetorA[1]);

    // C�lculo do produto escalar
    produtoEscalar = vetorA[0] * vetorB[0] + vetorA[1] * vetorB[1];

    // Mostrando os resultados
    cout << "B) A soma do vetorA: " << somaA << endl;
    cout << "C) A soma do vetorB: " << somaB << endl;
    cout << "D) Soma dos n�meros informados: " << soma << endl;
    cout << "E) Subtra��o B de A: " << somaC << endl;
    cout << "F) Produto escalar de A por B: " << produtoEscalar << endl;

    return 0;
}
