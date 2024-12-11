#include <iostream>
#include <locale>

using namespace std;

// Função para exibir mensagem de boas-vindas.
void mensagem(string nome) {
    cout << "Olá " << nome << "Seja bem-vindo!!!\n" << endl;
}

// Soma.
float soma(float n1, float n2) {
    return n1 + n2;
}

// Subtração.
float sub(float n1, float n2) {
    return n1 - n2;
}

// Multiplicação.
float mult(float n1, float n2) {
    return n1 * n2;
}

// Divisão.
float divisao(float n1, float n2) {
    if (n2 != 0) {
        return n1 / n2;
    } else {
        cout << "Erro: não é possível dividir por 0.\n";
        return 0; // Retorna 0 como valor padrão.
    }
}

// Ordenação de vetor.
void ordenavetor(int vetA[], int tam) {
    int aux;
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam - 1; j++) {
            if (vetA[j] > vetA[j + 1]) {
                // Algoritmo de troca.
                aux = vetA[j];
                vetA[j] = vetA[j + 1];
                vetA[j + 1] = aux;
            }
        }
    }

    // Imprime o vetor ordenado.
    cout << "Vetor ordenado: ";
    for (int i = 0; i < tam; i++) {
        cout << vetA[i] << " ";
    }
    cout << endl;
}

// Menu para selecionar operações.
int menu() {
    int op;
    cout << "|========= Calculadora ============|\n";
    cout << "| - Selecione a operação!          |\n";
    cout << "| 1- Soma                          |\n";
    cout << "| 2- Subtração                     |\n";
    cout << "| 3- Multiplicação                 |\n";
    cout << "| 4- Divisão                       |\n";
    cout << "| 5- Ordenar Vetor                 |\n";
    cout << "|==================================|\n";
    cout << "Escolha uma opção: ";
    cin >> op;
    return op;
}

int main(int argc, char** argv) {
    setlocale(LC_ALL, "Portuguese");
    int op = 0, vetor[5] = {100, 12, 67, 45, 1};
    float n1 = 0, n2 = 0;

    mensagem("Lucas");

	do {
	
    op = menu();


    if (op >= 1 && op <= 4) {
        cout << "Informe o primeiro número: ";
        cin >> n1;
        cout << "Informe o segundo número: ";
        cin >> n2;
    }

    switch (op) {
        case 1:
            // Operação de soma.
            cout << "Soma: " << soma(n1, n2) << endl;
            break;
        case 2:
            // Operação de subtração.
            cout << "Subtração: " << sub(n1, n2) << endl;
            break;
        case 3:
            // Operação de multiplicação.
            cout << "Multiplicação: " << mult(n1, n2) << endl;
            break;
        case 4:
            // Operação de divisão.
            cout << "Divisão: " << divisao(n1, n2) << endl;
            break;
        case 5:
            // Ordenação de vetor.
            ordenavetor(vetor, 5);
            break;
        default:
            cout << "Opção inválida! Por favor, escolha uma opção de 1 a 5." << endl;
            break;
    }
}while(op !=5);
    return 0;
}

