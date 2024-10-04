#include <iostream>
#include <locale>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
    string nome_funcionario, codigo_maquina, mensagem;
	int total_peca_produzidas, total_peca_defeituosas, limite_defeituosas; 
	
	// Entrada de dados
	cout << "Informe o seu nome: \n";
    cin >> nome_funcionario;

	cout << "Informe o c�digo da m�quina: \n";
    cin >> codigo_maquina;
    
	cout << "Informe o total de pe�as produzidas: \n";
    cin >> total_peca_produzidas;
    
    cout << "Informe o total de pe�a defeituosas: \n";
    cin >> total_peca_defeituosas;
    
    // c�lculos da qtd de pe�as referente ao da produ��o !
    limite_defeituosas = total_peca_produzidas * 0.10;
    
    // Verifica��o da necessidade de manuten��o !
    if (total_peca_defeituosas > limite_defeituosas){
    	mensagem = "A m�quina est� precisando de manuten��o!!";
	}else{
		mensagem = "A m�quina est� funcionando perfeitamente !!";
	}
    
    //Sa�da de resultados
    cout << "Nome do funcion�rio: \n" << nome_funcionario << endl;
    cout << "O c�digo da m�quina �: \n" << codigo_maquina << endl;
    cout << "Mensagem: \n" << mensagem << endl;

	return 0;
}
