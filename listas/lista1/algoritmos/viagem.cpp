#include <iostream>
#include <locale>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main() {
    setlocale(LC_ALL, "Portuguese");

    int escolha_destino, tipo_viagem;
    float preco = 0;

    // Exibição do menu de destinos
    cout << "Escolha o destino da viagem:\n";
    cout << "1 - Região Norte\n";
    cout << "2 - Região Nordeste\n";
    cout << "3 - Região Centro-Oeste\n";
    cout << "4 - Região Sul\n";
    cin >> escolha_destino;

    // Escolha do tipo de viagem (só ida ou ida e volta)
    cout << "A viagem inclui retorno? (1 para Ida e Volta, 2 para Só Ida):\n";
    cin >> tipo_viagem;

    // Cálculo do preço da passagem com base no destino e tipo de viagem
    switch (escolha_destino) {
        case 1: // Região Norte
            if (tipo_viagem == 1)
                preco = 900.00; // Ida e Volta
            else if (tipo_viagem == 2)
                preco = 500.00; // Só Ida
            else {
                cout << "Opção de tipo de viagem inválida!\n";
                return 1;
            }
            break;
        case 2: // Região Nordeste
            if (tipo_viagem == 1)
                preco = 650.00; // Ida e Volta
            else if (tipo_viagem == 2)
                preco = 350.00; // Só Ida
            else {
                cout << "Opção de tipo de viagem inválida!\n";
                return 1;
            }
            break;
        case 3: // Região Centro-Oeste
            if (tipo_viagem == 1)
                preco = 600.00; // Ida e Volta
            else if (tipo_viagem == 2)
                preco = 350.00; // Só Ida
            else {
                cout << "Opção de tipo de viagem inválida!\n";
                return 1;
            }
            break;
        case 4: // Região Sul
            if (tipo_viagem == 1)
                preco = 550.00; // Ida e Volta
            else if (tipo_viagem == 2)
                preco = 300.00; // Só Ida
            else {
                cout << "Opção de tipo de viagem inválida!\n";
                return 1;
            }
            break;
        default:
            cout << "Opção de destino inválida!\n";
            return 1;
    }

    // Exibição do preço final da passagem
    cout << "O preço da passagem é: R$ " << preco << endl;

    return 0;
}

