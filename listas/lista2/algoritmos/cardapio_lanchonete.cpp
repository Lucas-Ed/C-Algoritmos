// Lista 2-exercicío 4, cardápio lanchonete.

#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

// Estrutura para representar um item
struct Item {
    int codigo;
    double preco;
};

void adicionarItem(vector<Item>& pedidos, int codigo, double preco) {
    pedidos.push_back({codigo, preco});
}

int main() {
    vector<Item> pedidos;
    vector<double> precos = {1.20, 1.30, 1.50, 1.20, 1.30, 1.00};
    bool finalizarPedido = false;
    char escolha;

    do {
        cout << "Escolha os itens:\n";
        cout << "1 - Cachorro quente\n";
        cout << "2 - Bauru simples\n";
        cout << "3 - Bauru com ovo\n";
        cout << "4 - Hambúrguer\n";
        cout << "5 - Cheeseburguer\n";
        cout << "6 - Refrigerante\n";
        cout << "f - Enviar pedido\n";
        cin >> escolha;

    while (escolha != 'f' && (escolha < '1' || escolha > '6')) {
        cout << "Opção inválida. Por favor, escolha uma opção de 1 a 6, ou f para fazer pedido." << endl;
        cin >> escolha;
    }

    if (escolha == 'f') {
        finalizarPedido = true;
    } else {
        int codigo = escolha - '1';
        cout << "Você escolheu o item " << codigo + 1 << endl; // Imprime o item escolhido
        adicionarItem(pedidos, codigo, precos[codigo]);
    }
} while (!finalizarPedido);

    // Calcular e exibir o valor total
    double valorTotal = 0.0;
    for (const Item& item : pedidos) {
        valorTotal += item.preco;
    }
    cout << fixed << setprecision(2) << "Valor total do pedido: R$ " << valorTotal << endl;

    return 0;
}

