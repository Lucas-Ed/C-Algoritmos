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

// Fun��o para listar todos os produtos
void listarprodutos(Produto produtos[], int quantidadeProdutos) {
    cout << "\nLista de todos os produtos:\n";
    for (int i = 0; i < quantidadeProdutos; i++) {
        cout << "C�digo: " << produtos[i].codigo 
             << ", Nome: " << produtos[i].nome 
             << ", Quantidade: " << produtos[i].quantidade  
             << ", Valor de compra: " << produtos[i].valorCompra 
             << ", Valor de venda: " << produtos[i].valorVenda << endl;
    }
}

// Fun��o para listar um produto por c�digo
void listarProdutoPorCodigo(Produto produtos[], int quantidadeProdutos, int codigo) {
    bool encontrado = false;
    for (int i = 0; i < quantidadeProdutos; i++) {
        if (produtos[i].codigo == codigo) {
            cout << "Produto encontrado:\n";
            cout << "C�digo: " << produtos[i].codigo 
                 << ", Nome: " << produtos[i].nome 
                 << ", Quantidade: " << produtos[i].quantidade  
                 << ", Valor de compra: " << produtos[i].valorCompra 
                 << ", Valor de venda: " << produtos[i].valorVenda << endl;
            encontrado = true;
            break;
        }
    }
    if (!encontrado) {
        cout << "Produto com o c�digo " << codigo << " n�o encontrado!\n";
    }
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    Produto produtos[30];
    int opcao, codigoBuscado;

    // Preenchendo os produtos com informa��es de exemplo
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

    // Menu para o usu�rio
    int r;
    do {
        cout << "***************************************** \n";
        cout << "            Consulta pre�os             | \n";
        cout << "***************************************** \n";
        cout << "-Escolha uma das op��es:                | \n";
        cout << "1-  Listar todos os produtos            | \n"; 
        cout << "2- Listar Produtos por c�digo           | \n";
        cout << "3- Sair                                 | \n";
        cout << "***************************************** \n";
        cin >> r;

        switch (r) {
            case 1:
                listarprodutos(produtos, 30);
                break;
            case 2:
                cout << "Digite o c�digo do produto: ";
                cin >> codigoBuscado;
                listarProdutoPorCodigo(produtos, 30, codigoBuscado);
                break;
            case 3:
                cout << "Saindo do programa ...." << endl;
                break;
            default:
                cout << "Op��o inv�lida, tente novamente" << endl;
                break;
        }
    } while (r != 3);

    return 0;
}
