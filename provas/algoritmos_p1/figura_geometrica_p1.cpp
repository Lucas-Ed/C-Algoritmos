#include <iostream>
#include <cmath> // Para usar M_PI (valor de pi)

using namespace std;

int main() {
    int opcao;
    do {
        // Exibindo o menu para o usuário
        cout << "Menu:\n";
        cout << "1 - Calcular a area de um Circulo\n";
        cout << "2 - Calcular a area de um Quadrado\n";
        cout << "3 - Calcular a area de um Triangulo\n";
        cout << "4 - Sair\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch (opcao) {
            case 1: {
                // Calcular área de um círculo
                double raio;
                cout << "Digite o raio do circulo: ";
                cin >> raio;
                double areaCirculo = M_PI * raio * raio;
                cout << "A area do circulo e: " << areaCirculo << endl;
                break;
            }
            case 2: {
                // Calcular área de um quadrado
                double lado;
                cout << "Digite o lado do quadrado: ";
                cin >> lado;
                double areaQuadrado = lado * lado;
                cout << "A area do quadrado e: " << areaQuadrado << endl;
                break;
            }
            case 3: {
                // Calcular área de um triângulo
                double base, altura;
                cout << "Digite a base do triangulo: ";
                cin >> base;
                cout << "Digite a altura do triangulo: ";
                cin >> altura;
                double areaTriangulo = (base * altura) / 2;
                cout << "A area do triangulo e: " << areaTriangulo << endl;
                break;
            }
            case 4:
                // Sair do programa
                cout << "Saindo...\n";
                break;
            default:
                // Opção inválida
                cout << "Opcao invalida, tente novamente.\n";
        }

        cout << endl;

    } while (opcao != 4);

    return 0;
}
