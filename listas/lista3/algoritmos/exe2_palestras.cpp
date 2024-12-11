// Lista 3-exercic�o 2, Palestras.
#include <iostream>
#include <locale>

using namespace std;

int main() {
    // Setando idioma.
    setlocale(LC_ALL, "Portuguese");

    // tipando vari�veis.
    int op, codigo;
    
    // Matriz que armazena os dados das palestras
    string palestras[4][3] = {
        {"Linux", "Auditorio 1", "8h as 9h"},
        {"Recupera��o de Desastres", "Auditorio 2", "9h as 10h"},
        {"Windows Server", "Auditorio 3", "13h as 14h"},
        {"L�gica e Programa��o", "Auditorio Principal", "Hor�rio n�o definido"}
    };

   
    do{
	// Menu de op��es
	cout << "+==================================+ \n";
    cout << "| - Selecione a Palestra           | \n";
	cout << "| 1- Palestra Linux                | \n";
	cout << "| 2- Recupera��o de Desastres      | \n";
	cout << "| 3- Palestra Windows Server       | \n";
	cout << "| 4- Palestra L�gica e Programa��o | \n";
	cout << "| 5- Sair                          | \n";
	cout << "+==================================+ \n";
	cout << "Escolha uma op��o: \n";
	cin >> op;
			

    // Verifica se o c�digo est� no intervalo v�lido
    if (op < 1 || op > 4) {
        cout << "C�digo inv�lido. Tente novamente com um valor entre 1 e 4." << endl;
    } else {
        // Ajusta o �ndice para acessar a matriz (�ndice come�a em 0)
        codigo -= 1;

        cout << "Informa��es da palestra:" << endl;
        cout << "T�tulo: " << palestras[0][0] << endl;
        cout << "Local: " << palestras[1][1] << endl;
        cout << "Hor�rio: " << palestras[2][2] << endl;
    }
	}while(op !=5);

    return 0;
}

