#include <iostream>
#include <locale>

using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	// tipando variáveis.
	
	int nort_completo=900.00, nort_nao_compl=500.00;
	int nordeste_completo=650.00, nordeste_nao_compl=350.00;
	int centro_o_completo=600.00, centro_o_nao_compl=350.00;
	int sul_completo=550.00, sul_nao_compl=300.00;
	int resp, retorno;
	
	// Entradas do usuário.
	cout << "***************************************** \n";
	cout << " Informe o destino da sua viagem ?      | \n";
	cout << "***************************************** \n";
	cout << "-Escolha uma das opções:                | \n";
	cout << "1- Região Norte                         | \n"; 
	cout << "2- Região nordeste                      | \n";
	cout << "3- Região centro oeste                  | \n";
	cout << "4- Região Sul                           | \n";
	cout << "***************************************** \n";
	cin >> resp;
	//----------------------------------------
	cout << "***************************************** \n";
	cout << "   A viagem vai incluir retorno ?       | \n";
	cout << "***************************************** \n";
	cout << "1- sim                                 | \n"; 
	cout << "2- Não                                  | \n";
	cout << "***************************************** \n";
	cin >> retorno;
	//----------------------------------------
	
	// Condições
	if(resp == 1 && retorno == 1){
		cout << " O valor do pacote completo para a Região Norte fica no valor de: R$ " << nort_completo << endl;// ida & volta Região Norte-ok 
	}else if (resp == 1 && retorno == 2){
		cout << " O valor da passagem só de Ida, para a Região Norte fica no valor de: R$ " << nort_nao_compl << endl; //ida Região Norte-ok
	}else if (resp == 2 && retorno == 1){
		cout << " O valor do pacote completo para a Região Nordeste fica no valor de: R$ " << nordeste_completo << endl;// ida & volta Região Nordeste-ok
	}else if (resp == 2 && retorno == 2){
		cout << " O valor da passagem só de Ida, para a Região Nordeste fica no valor de: R$ " << nordeste_nao_compl << endl; //ida Região Nordeste-ok
	}else if (resp == 3 && retorno == 1){
		cout << " O valor do pacote completo para a Região centro Oeste fica no valor de: R$ " << centro_o_completo << endl;// ida & volta Região centro Oeste-ok
	}else if (resp == 3 && retorno == 2){
		cout << " O valor da passagem só de Ida, para a Região centro Oeste fica no valor de: R$ " << centro_o_nao_compl << endl; //ida Região centro Oeste-ok
	}else if (resp == 4 && retorno == 1){
		cout << " O valor do pacote completo para a Região Sul fica no valor de: R$ " << sul_completo << endl;// ida & volta Região centro Oeste-ok
	}else if (resp == 4 && retorno == 2){
		cout << " O valor da passagem só de Ida, para a Região Sul fica no valor de: R$ " << sul_nao_compl << endl; //ida Região centro Oeste-ok
	};

	
	return 0;
}
