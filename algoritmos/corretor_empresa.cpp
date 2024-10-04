#include <iostream>
#include <string>

using namespace std;

int main() {
    // Variáveis para armazenar os dados dos corretores
    string nome[3];
    float vendas[3];
    float comissao[3];
    float total_vendas = 0;

    // Leitura dos dados dos corretores
    for (int i = 0; i < 3; i++) {
        cout << "Digite o nome do corretor " << i + 1 << ": ";
        cin >> nome[i];
        
        cout << "Digite o valor da venda do corretor " << i + 1 << ": R$ ";
        cin >> vendas[i];
        
        // Cálculo da comissão
        if (vendas[i] > 50000) {
            comissao[i] = vendas[i] * 0.12;
        } else if (vendas[i] >= 30000 && vendas[i] <= 50000) {
            comissao[i] = vendas[i] * 0.095;
        } else {
            comissao[i] = vendas[i] * 0.07;
        }
        
        // Acumulando o total de vendas da empresa
        total_vendas += vendas[i];
    }

    // Exibindo o resultado para cada corretor
    for (int i = 0; i < 3; i++) {
        cout << "\nCorretor: " << nome[i] << endl;
        cout << "Valor da venda: R$ " << vendas[i] << endl;
        cout << "Comissão: R$ " << comissao[i] << endl;
    }
    
    // Exibir o total de vendas da empresa
    cout << "\nTotal de vendas da empresa: R$ " << total_vendas << endl;

    return 0;
}
