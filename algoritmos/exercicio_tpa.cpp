#include <iostream>
#include <locale>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	// setando os tipos de  vari�veis.
    string nome_atleta, mensagem;
	int ano_nascimento,ano_atual,idade, resposta;
	        
	
	// Entrada de dados
	cout << "Informe o seu nome do atleta: \n";
    cin >> nome_atleta;

	cout << "Informe o ano atual: \n";
    cin >> ano_atual;
    
	cout << "Informe o ano de nascimento: \n";
    cin >> ano_nascimento;
    
    cout << "Informe o estilo de nata��o\n";
    cout << "1. Nado livre.\n";
    cout << "2. Nado de costas.\n";
    cout << "3. Nado borboleta.\n";
    cout << "Escolha uma op��o (1, 2 ou 3): ";
    cin >> resposta;
    
    // C�lculos
    // C�lculo da idade do atleta
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
	
    
      
    //Sa�da de resultados
    cout << "A idade do atleta �: \n" << idade << endl;
    cout << "O estilo de nata��o �: \n" << resposta << endl;
    cout << " A piscina que o atleta deve usar �: \n" << mensagem << endl;
    //cout << "Nome do funcion�rio: \n" << nome_funcionario << endl;
    //cout << "O c�digo da m�quina �: \n" << codigo_maquina << endl;
    //cout << "Mensagem: \n" << mensagem << endl;

	return 0;
}
