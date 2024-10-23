#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    cout << "Digite três números inteiros: ";
    cin >> num1 >> num2 >> num3;

    int iguais = 0;

    if (num1 == num2) iguais++;
    if (num1 == num3) iguais++;
    if (num2 == num3) iguais++;

    if (num1 == num2 && num2 == num3) {
        iguais = 3; // Se todos são iguais
    } else {
        iguais = (iguais == 1) ? 2 : iguais; // Ajuste para quando apenas dois são iguais
    }

    cout << "Quantidade de números iguais: " << iguais << endl;

    return 0;
}
