// Exercício 1, da lista de 4 exercicios em aula, algoritimo de soma de vetores.

#include <iostream>
#include <locale>

using namespace std;

int main(int argc, char** argv) {
    setlocale(LC_ALL, "Portuguese");
    
    // Declarando o vetor de 4 posições
    int vetor[4];
    
    // Declarando a variável soma
    int soma = 0;

    // Preenchendo o vetor com dados do usuário
    cout << "Informe o primeiro número: ";
    cin >> vetor[0];
    
    cout << "Informe o segundo número: ";
    cin >> vetor[1];
    
    cout << "Informe o terceiro número: ";
    cin >> vetor[2];
    
    cout << "Informe o quarto número: ";
    cin >> vetor[3];
    
    // Calculando a soma dos elementos do vetor
    soma = vetor[0] + vetor[1] + vetor[2] + vetor[3];
    
    // Mostrando o resultado
    cout << "A soma dos números informados é: " << soma << endl;
    
    return 0;
}

