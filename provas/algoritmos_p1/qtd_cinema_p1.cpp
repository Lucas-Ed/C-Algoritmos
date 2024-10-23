#include <iostream>
using namespace std;

int main() {
    int sessoes, numPessoas, idade, totalAte18 = 0, totalMais18 = 0;
    int totalMasculino = 0, totalFeminino = 0;
    char sexo;

    cout << "Digite o número de sessões: ";
    cin >> sessoes;

    for (int i = 0; i < sessoes; i++) {
        cout << "Digite a quantidade de pessoas na sessão " << (i + 1) << ": ";
        cin >> numPessoas;

        for (int j = 0; j < numPessoas; j++) {
            cout << "Digite a idade da pessoa " << (j + 1) << ": ";
            cin >> idade;

            cout << "Digite o sexo da pessoa " << (j + 1) << " (M/F): ";
            cin >> sexo;

            if (idade <= 18) {
                totalAte18++;
            } else {
                totalMais18++;
            }

            if (sexo == 'M' || sexo == 'm') {
                totalMasculino++;
            } else if (sexo == 'F' || sexo == 'f') {
                totalFeminino++;
            }
        }
    }

    cout << "Total de pessoas com até 18 anos: " << totalAte18 << endl;
    cout << "Total de pessoas com mais de 18 anos: " << totalMais18 << endl;
    cout << "Total de pessoas do sexo masculino: " << totalMasculino << endl;
    cout << "Total de pessoas do sexo feminino: " << totalFeminino << endl;

    return 0;
}
