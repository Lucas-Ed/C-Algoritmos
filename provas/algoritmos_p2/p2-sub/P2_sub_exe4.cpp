#include <iostream>
#include <locale>
#include <string>

using namespace std;

// Estrutura para armazenar infos dos produtos
struct Produto {
    int codigo;
    string nome;
    int quantidade;
    float valorCompra;
    float valorVenda;
};

// Função para listar todos os produtos
void listarprodutos(Produto produtos[], int quantidadeProdutos) {
    cout << "\nLista de todos os produtos:\n";
    for (int i = 0; i < quantidadeProdutos; i++) {
        cout << "Código: " << produtos[i].codigo 
             << ", Nome: " << produtos[i].nome 
             << ", Quantidade: " << produtos[i].quantidade  
             << ", Valor de compra: " << produtos[i].valorCompra 
             << ", Valor de venda: " << produtos[i].valorVenda << endl;
    }
}

// Função para listar um produto por código
void listarProdutoPorCodigo(Produto produtos[], int quantidadeProdutos, int codigo) {
    bool encontrado = false;
    for (int i = 0; i < quantidadeProdutos; i++) {
        if (produtos[i].codigo == codigo) {
            cout << "Produto encontrado:\n";
            cout << "Código: " << produtos[i].codigo 
                 << ", Nome: " << produtos[i].nome 
                 << ", Quantidade: " << produtos[i].quantidade  
                 << ", Valor de compra: " << produtos[i].valorCompra 
                 << ", Valor de venda: " << produtos[i].valorVenda << endl;
            encontrado = true;
            break;
        }
    }
    if (!encontrado) {
        cout << "Produto com o código " << codigo << " não encontrado!\n";
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    Produto produtos[30];
    int opcao, codigoBuscado;

    // Preenchendo os produtos com informações de exemplo
    for (int i = 0; i < 30; i++) {
        produtos[i].codigo = i + 1;

        cout << "Digite o nome do Produto " << i + 1 << ": ";
        cin.ignore();
        getline(cin, produtos[i].nome);

        cout << "Digite a quantidade do Produto " << i + 1 << ": ";
        cin >> produtos[i].quantidade;

        cout << "Digite o valor de compra do Produto " << i + 1 << ": ";
        cin >> produtos[i].valorCompra;

        cout << "Digite o valor de venda do Produto " << i + 1 << ": ";
        cin >> produtos[i].valorVenda;
    }

    // Menu para o usuário
    int r;
    do {
        cout << "***************************************** \n";
        cout << "            Consulta preços             | \n";
        cout << "***************************************** \n";
        cout << "-Escolha uma das opções:                | \n";
        cout << "1-  Listar todos os produtos            | \n"; 
        cout << "2- Listar Produtos por código           | \n";
        cout << "3- Sair                                 | \n";
        cout << "***************************************** \n";
        cin >> r;

        switch (r) {
            case 1:
                listarprodutos(produtos, 30);
                break;
            case 2:
                cout << "Digite o código do produto: ";
                cin >> codigoBuscado;
                listarProdutoPorCodigo(produtos, 30, codigoBuscado);
                break;
            case 3:
                cout << "Saindo do programa ...." << endl;
                break;
            default:
                cout << "Opção inválida, tente novamente" << endl;
                break;
        }
    } while (r != 3);

    return 0;
}
