#include <iostream>
#include <locale>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	// setando os tipos de  variáveis.
    string nome_atleta, mensagem;
	int ano_nascimento,ano_atual,idade, resposta;
	        
	
	// Entrada de dados
	cout << "Informe o seu nome do atleta: \n";
    cin >> nome_atleta;

	cout << "Informe o ano atual: \n";
    cin >> ano_atual;
    
	cout << "Informe o ano de nascimento: \n";
    cin >> ano_nascimento;
    
    cout << "Informe o estilo de natação\n";
    cout << "1. Nado livre.\n";
    cout << "2. Nado de costas.\n";
    cout << "3. Nado borboleta.\n";
    cout << "Escolha uma opção (1, 2 ou 3): ";
    cin >> resposta;
    
    // Cálculos
    // Cálculo da idade do atleta
    idade = ano_atual-ano_nascimento;
    
    
    // Regras para separar os atletas 
    if (resposta == 1 && idade <= 16){
    	mensagem = "O atleta deve utilizar a piscina 1";
    } else if(resposta ==1 && idade > 16){
    	mensagem = "O atleta deve utilizar a piscina 5";
	} else if(resposta == 2 && idade <= 21){
	    mensagem = "O atleta deve utilizar a piscina 2";
	} else if(resposta == 2 && idade > 21){
		mensagem = "O atleta deve utilizar a piscina 3";
	} else if(resposta == 3 && idade < 12){
	    mensagem = "O atleta deve utilizar a piscina 4";
	} else if(resposta == 3 && idade >= 12){
		mensagem = "O atleta deve utilizar a piscina 6";
	}
	
    
      
    //Saída de resultados
    cout << "A idade do atleta é: \n" << idade << endl;
    cout << "O estilo de natação é: \n" << resposta << endl;
    cout << " A piscina que o atleta deve usar é: \n" << mensagem << endl;
    //cout << "Nome do funcionário: \n" << nome_funcionario << endl;
    //cout << "O código da máquina é: \n" << codigo_maquina << endl;
    //cout << "Mensagem: \n" << mensagem << endl;

	return 0;
}
