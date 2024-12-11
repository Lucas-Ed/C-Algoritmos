#include <iostream>
#include <locale>

using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	int r;
	string nome[10];
	float precos[10];
	string consulta;
	
	do {
	cout << "***************************************** \n";
	cout << "            Consulta preços             | \n";
	cout << "***************************************** \n";
	cout << "-Escolha uma das opções:                | \n";
	cout << "1-  cadastro de produtos                | \n"; 
	cout << "2- Consulta Produtos                    | \n";
	cout << "3- consulta preços                      | \n";
	cout << "4- mostra descontos                     | \n";
	cout << "5- sair                                 | \n";
	cout << "***************************************** \n";
	cin >> r;
	
	switch(r){
		case 1:
			// cadastra os noemes e preços dos produtos.
			for(int i=0; i < 10; i++){
				cout << "Informe o nome do produto a ser cadastrado:";
				cin >> nome[i];
				cout << "Informe o preço do produto a ser cadastrado:";
				cin >> precos[i];
			}
			break;
		case 2:
			cout << "Informe o nome do produto a ser consultado:"
			cin >> consulta;
			break;
		case 3:
		
			break;
		case 4:
			
			break;
		default:
		    cout << "opção inválida, informe uma opção de 1 a 5.";
		    break;
	}
	}while(r >4);

	
	return 0;
}


//completo

#include <iostream>
#include <locale>
#include <string>
using namespace std;

int main(int argc, char** argv) {
    setlocale(LC_ALL, "Portuguese");
    int r;
    string nome[10];
    float precos[10];
    string consulta;
    bool produtoEncontrado;

    do {
        cout << "***************************************** \n";
        cout << " Consulta preços | \n";
        cout << "***************************************** \n";
        cout << "-Escolha uma das opções: | \n";
        cout << "1- Cadastro de produtos | \n";
        cout << "2- Consulta Produtos | \n";
        cout << "3- Consulta preços | \n";
        cout << "4- Mostra descontos | \n";
        cout << "5- Sair | \n";
        cout << "***************************************** \n";
        cin >> r;

        switch (r) {
        case 1:
            // Cadastra os nomes e preços dos produtos.
            for (int i = 0; i < 10; i++) {
                cout << "Informe o nome do produto a ser cadastrado: ";
                cin >> nome[i];
                cout << "Informe o preço do produto a ser cadastrado: ";
                cin >> precos[i];
            }
            break;

        case 2:
            // Consulta o nome dos produtos cadastrados.
            cout << "Produtos cadastrados: \n";
            for (int i = 0; i < 10; i++) {
                cout << i + 1 << ". " << nome[i] << "\n";
            }
            break;

        case 3:
            // Consulta o preço de um produto específico.
            cout << "Informe o nome do produto a ser consultado: ";
            cin >> consulta;
            produtoEncontrado = false;
            for (int i = 0; i < 10; i++) {
                if (nome[i] == consulta) {
                    cout << "O preço do produto '" << nome[i] << "' é R$ " << precos[i] << "\n";
                    produtoEncontrado = true;
                    break;
                }
            }
            if (!produtoEncontrado) {
                cout << "Produto não encontrado.\n";
            }
            break;

        case 4:
            // Mostra os produtos com desconto (10% de desconto).
            cout << "Produtos com desconto (10%): \n";
            for (int i = 0; i < 10; i++) {
                if (!nome[i].empty()) {
                    cout << nome[i] << " - Preço original: R$ " << precos[i]
                         << ", com desconto: R$ " << precos[i] * 0.9 << "\n";
                }
            }
            break;

        case 5:
            // Sair do programa.
            cout << "Saindo do programa. Obrigado!\n";
            break;

        default:
            cout << "Opção inválida, informe uma opção de 1 a 5.\n";
            break;
        }
    } while (r != 5);

    return 0;
}
