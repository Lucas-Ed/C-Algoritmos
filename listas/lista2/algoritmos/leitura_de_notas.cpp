// Lista2- exercic�o 5, leitura de notas.

#include <iostream>
#include <locale>
using namespace std;

int main() {
    setlocale(LC_ALL, "Portuguese");
    const int numAlunos = 10; // Total de alunos
    float nota1, nota2, mediaAluno, somaMedias = 0;

    // Loop para ler as notas de cada aluno
    for (int i = 1; i <= numAlunos; i++) {
        cout << "Aluno " << i << endl;

        // Leitura e valida��o da primeira nota
        do {
            cout << "Digite a nota da 1a avaliacao (0 a 10): ";
            cin >> nota1;
            if (nota1 < 0 || nota1 > 10) {
                cout << "Nota invalida! Tente novamente." << endl;
            }
        } while (nota1 < 0 || nota1 > 10);

        // Leitura e valida��o da segunda nota
        do {
            cout << "Digite a nota da 2a avaliacao (0 a 10): ";
            cin >> nota2;
            if (nota2 < 0 || nota2 > 10) {
                cout << "Nota invalida! Tente novamente." << endl;
            }
        } while (nota2 < 0 || nota2 > 10);

        // Calcula a m�dia do aluno
        mediaAluno = (nota1 + nota2) / 2;
        cout << "Media do aluno " << i << ": " << mediaAluno << endl;

        // Acumula a m�dia do aluno na soma das m�dias
        somaMedias += mediaAluno;
    }

    // Calcula e exibe a m�dia geral da turma
    float mediaGeral = somaMedias / numAlunos;
    cout << "Media geral da turma: " << mediaGeral << endl;

    return 0;
}
