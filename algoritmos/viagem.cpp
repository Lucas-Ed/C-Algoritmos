#include <iostream>
#include <locale>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main() {
    setlocale(LC_ALL, "Portuguese");

    int escolha_destino, tipo_viagem;
    float preco = 0;

    // Exibi��o do menu de destinos
    cout << "Escolha o destino da viagem:\n";
    cout << "1 - Regi�o Norte\n";
    cout << "2 - Regi�o Nordeste\n";
    cout << "3 - Regi�o Centro-Oeste\n";
    cout << "4 - Regi�o Sul\n";
    cin >> escolha_destino;

    // Escolha do tipo de viagem (s� ida ou ida e volta)
    cout << "A viagem inclui retorno? (1 para Ida e Volta, 2 para S� Ida):\n";
    cin >> tipo_viagem;

    // C�lculo do pre�o da passagem com base no destino e tipo de viagem
    switch (escolha_destino) {
        case 1: // Regi�o Norte
            if (tipo_viagem == 1)
                preco = 900.00; // Ida e Volta
            else if (tipo_viagem == 2)
                preco = 500.00; // S� Ida
            else {
                cout << "Op��o de tipo de viagem inv�lida!\n";
                return 1;
            }
            break;
        case 2: // Regi�o Nordeste
            if (tipo_viagem == 1)
                preco = 650.00; // Ida e Volta
            else if (tipo_viagem == 2)
                preco = 350.00; // S� Ida
            else {
                cout << "Op��o de tipo de viagem inv�lida!\n";
                return 1;
            }
            break;
        case 3: // Regi�o Centro-Oeste
            if (tipo_viagem == 1)
                preco = 600.00; // Ida e Volta
            else if (tipo_viagem == 2)
                preco = 350.00; // S� Ida
            else {
                cout << "Op��o de tipo de viagem inv�lida!\n";
                return 1;
            }
            break;
        case 4: // Regi�o Sul
            if (tipo_viagem == 1)
                preco = 550.00; // Ida e Volta
            else if (tipo_viagem == 2)
                preco = 300.00; // S� Ida
            else {
                cout << "Op��o de tipo de viagem inv�lida!\n";
                return 1;
            }
            break;
        default:
            cout << "Op��o de destino inv�lida!\n";
            return 1;
    }

    // Exibi��o do pre�o final da passagem
    cout << "O pre�o da passagem �: R$ " << preco << endl;

    return 0;
}

