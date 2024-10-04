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

	cout << "Informe o código da máquina: \n";
    cin >> codigo_maquina;
    
	cout << "Informe o total de peças produzidas: \n";
    cin >> total_peca_produzidas;
    
    cout << "Informe o total de peça defeituosas: \n";
    cin >> total_peca_defeituosas;
    
    // cálculos da qtd de peças referente ao da produção !
    limite_defeituosas = total_peca_produzidas * 0.10;
    
    // Verificação da necessidade de manutenção !
    if (total_peca_defeituosas > limite_defeituosas){
    	mensagem = "A máquina está precisando de manutenção!!";
	}else{
		mensagem = "A máquina está funcionando perfeitamente !!";
	}
    
    //Saída de resultados
    cout << "Nome do funcionário: \n" << nome_funcionario << endl;
    cout << "O código da máquina é: \n" << codigo_maquina << endl;
    cout << "Mensagem: \n" << mensagem << endl;

	return 0;
}
