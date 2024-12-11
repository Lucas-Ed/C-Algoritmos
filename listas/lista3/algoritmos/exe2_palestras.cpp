// Lista 3-exercicío 2, Palestras.
#include <iostream>
#include <locale>

using namespace std;

int main() {
    // Setando idioma.
    setlocale(LC_ALL, "Portuguese");

    // tipando variáveis.
    int op, codigo;
    
    // Matriz que armazena os dados das palestras
    string palestras[4][3] = {
        {"Linux", "Auditorio 1", "8h as 9h"},
        {"Recuperação de Desastres", "Auditorio 2", "9h as 10h"},
        {"Windows Server", "Auditorio 3", "13h as 14h"},
        {"Lógica e Programação", "Auditorio Principal", "Horário não definido"}
    };

   
    do{
	// Menu de opções
	cout << "+==================================+ \n";
    cout << "| - Selecione a Palestra           | \n";
	cout << "| 1- Palestra Linux                | \n";
	cout << "| 2- Recuperação de Desastres      | \n";
	cout << "| 3- Palestra Windows Server       | \n";
	cout << "| 4- Palestra Lógica e Programação | \n";
	cout << "| 5- Sair                          | \n";
	cout << "+==================================+ \n";
	cout << "Escolha uma opção: \n";
	cin >> op;
			

    // Verifica se o código está no intervalo válido
    if (op < 1 || op > 4) {
        cout << "Código inválido. Tente novamente com um valor entre 1 e 4." << endl;
    } else {
        // Ajusta o índice para acessar a matriz (índice começa em 0)
        codigo -= 1;

        cout << "Informações da palestra:" << endl;
        cout << "Título: " << palestras[0][0] << endl;
        cout << "Local: " << palestras[1][1] << endl;
        cout << "Horário: " << palestras[2][2] << endl;
    }
	}while(op !=5);

    return 0;
}

