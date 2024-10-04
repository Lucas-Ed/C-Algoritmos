#include <iostream>
#include <locale>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main() {
    setlocale(LC_ALL, "Portuguese");

    int calorias_prato = 0, calorias_sobremesa = 0, calorias_bebida = 0;
    int escolha_prato, escolha_sobremesa, escolha_bebida;

    // Exibi��o do menu para o usu�rio
    cout << "Escolha um prato:\n";
    cout << "1 - Vegetariano (180 cal)\n";
    cout << "2 - Peixe (230 cal)\n";
    cout << "3 - Frango (250 cal)\n";
    cout << "4 - Carne (350 cal)\n";
    cin >> escolha_prato;

    // Exibi��o do menu de sobremesas
    cout << "Escolha uma sobremesa:\n";
    cout << "1 - Abacaxi (75 cal)\n";
    cout << "2 - Sorvete Diet (110 cal)\n";
    cout << "3 - Mousse Diet (170 cal)\n";
    cout << "4 - Mousse de Chocolate (200 cal)\n";
    cin >> escolha_sobremesa;

    // Exibi��o do menu de bebidas
    cout << "Escolha uma bebida:\n";
    cout << "1 - Ch� (20 cal)\n";
    cout << "2 - Suco de Laranja (70 cal)\n";
    cout << "3 - Suco de Mel�o (100 cal)\n";
    cout << "4 - Refrigerante Diet (65 cal)\n";
    cin >> escolha_bebida;

    // Calorias do prato
    switch (escolha_prato) {
        case 1:
            calorias_prato = 180;
            break;
        case 2:
            calorias_prato = 230;
            break;
        case 3:
            calorias_prato = 250;
            break;
        case 4:
            calorias_prato = 350;
            break;
        default:
            cout << "Op��o de prato inv�lida!\n";
            return 1;
    }

    // Calorias da sobremesa
    switch (escolha_sobremesa) {
        case 1:
            calorias_sobremesa = 75;
            break;
        case 2:
            calorias_sobremesa = 110;
            break;
        case 3:
            calorias_sobremesa = 170;
            break;
        case 4:
            calorias_sobremesa = 200;
            break;
        default:
            cout << "Op��o de sobremesa inv�lida!\n";
            return 1;
    }

    // Calorias da bebida
    switch (escolha_bebida) {
        case 1:
            calorias_bebida = 20;
            break;
        case 2:
            calorias_bebida = 70;
            break;
        case 3:
            calorias_bebida = 100;
            break;
        case 4:
            calorias_bebida = 65;
            break;
        default:
            cout << "Op��o de bebida inv�lida!\n";
            return 1;
    }

    // C�lculo das calorias totais
    int calorias_totais = calorias_prato + calorias_sobremesa + calorias_bebida;

    // Exibi��o do resultado
    cout << "A quantidade total de calorias da sua refei��o �: " << calorias_totais << " cal\n";

    return 0;
}

