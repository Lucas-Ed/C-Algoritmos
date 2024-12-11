#include <iostream>
#include <locale>

using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	// tipando vari�veis.
	
	int nort_completo=900.00, nort_nao_compl=500.00;
	int nordeste_completo=650.00, nordeste_nao_compl=350.00;
	int centro_o_completo=600.00, centro_o_nao_compl=350.00;
	int sul_completo=550.00, sul_nao_compl=300.00;
	int resp, retorno;
	
	// Entradas do usu�rio.
	cout << "***************************************** \n";
	cout << " Informe o destino da sua viagem ?      | \n";
	cout << "***************************************** \n";
	cout << "-Escolha uma das op��es:                | \n";
	cout << "1- Regi�o Norte                         | \n"; 
	cout << "2- Regi�o nordeste                      | \n";
	cout << "3- Regi�o centro oeste                  | \n";
	cout << "4- Regi�o Sul                           | \n";
	cout << "***************************************** \n";
	cin >> resp;
	//----------------------------------------
	cout << "***************************************** \n";
	cout << "   A viagem vai incluir retorno ?       | \n";
	cout << "***************************************** \n";
	cout << "1- sim                                 | \n"; 
	cout << "2- N�o                                  | \n";
	cout << "***************************************** \n";
	cin >> retorno;
	//----------------------------------------
	
	// Condi��es
	if(resp == 1 && retorno == 1){
		cout << " O valor do pacote completo para a Regi�o Norte fica no valor de: R$ " << nort_completo << endl;// ida & volta Regi�o Norte-ok 
	}else if (resp == 1 && retorno == 2){
		cout << " O valor da passagem s� de Ida, para a Regi�o Norte fica no valor de: R$ " << nort_nao_compl << endl; //ida Regi�o Norte-ok
	}else if (resp == 2 && retorno == 1){
		cout << " O valor do pacote completo para a Regi�o Nordeste fica no valor de: R$ " << nordeste_completo << endl;// ida & volta Regi�o Nordeste-ok
	}else if (resp == 2 && retorno == 2){
		cout << " O valor da passagem s� de Ida, para a Regi�o Nordeste fica no valor de: R$ " << nordeste_nao_compl << endl; //ida Regi�o Nordeste-ok
	}else if (resp == 3 && retorno == 1){
		cout << " O valor do pacote completo para a Regi�o centro Oeste fica no valor de: R$ " << centro_o_completo << endl;// ida & volta Regi�o centro Oeste-ok
	}else if (resp == 3 && retorno == 2){
		cout << " O valor da passagem s� de Ida, para a Regi�o centro Oeste fica no valor de: R$ " << centro_o_nao_compl << endl; //ida Regi�o centro Oeste-ok
	}else if (resp == 4 && retorno == 1){
		cout << " O valor do pacote completo para a Regi�o Sul fica no valor de: R$ " << sul_completo << endl;// ida & volta Regi�o centro Oeste-ok
	}else if (resp == 4 && retorno == 2){
		cout << " O valor da passagem s� de Ida, para a Regi�o Sul fica no valor de: R$ " << sul_nao_compl << endl; //ida Regi�o centro Oeste-ok
	};

	
	return 0;
}
