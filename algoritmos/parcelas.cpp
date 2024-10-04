#include <iostream>
#include <locale>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	string nome_do_cliente;
	
	int Ano_atual,Ano_nascimento,Valor_compra=0,valor_parcelas=0,idade,quantidade_parcelas;
	char resp;
	do{
	
	cout < <"Informe, qual o seu nome?\n";
	cin>>nome_do_cliente;
	cout<<"Informe o ano atual?\n";
	cin>>Ano_atual;
	cout<<"Informe o ano do seu nascimento\n";
	cin>>Ano_nascimento;
	cout<<"Informe o valor da compra?\n";
	cin>>Valor_compra;
    
    
    // Regras
    //Para calcular as parcelas, use as seguintes regras: 
	//- Se o valor da compra for maior ou igual a R$ 1000,00, dividir em 12 vezes. XXXXXXX
	//- Se o valor da compra for menor que R$ 1000,00 e maior ou igual a R$ 500,00, dividir em 9 vezes. XXXXXX
	//- Se o valor da compra for menor que R$ 500,00 e maior ou igual a R$ 200,00, dividir em 6 vezes. XXXXXX
	//- Se o valor da compra for menor que R$ 200,00 e maior ou igual a R$ 50,00, dividir em 3 vezes. XXXXXX
	//- Se o valor da compra for menor que R$ 50,00, não dividir em parcelas. XXXXXX
	//- Se a idade do cliente for maior ou igual a 70 anos, dividir a compra somente em 3 vezes independentemente do valor da compra. XXXXXX
	
	valor_parcelas=Valor_compra/quantidade_parcelas;
	idade=Ano_atual-Ano_nascimento;
	if(idade>=70){
		"dividir em 3 vezes\n";
	}
	
	if (Valor_compra>=1000){
	cout<<"dividir em 12 Vezes\n";
	}
	
	else if(Valor_compra<=1000 && valor_parcelas>=500){
	cout<<"dividir em 9 vezes\n";	
	}
	else if(Valor_compra<=200&&valor_parcelas>=50 ){
	cout<<"dividir em 3 vezes";
	}
	else if(Valor_compra<=50){
	cout<<"não dividir parcelas";
	}
	cout<<"Deseja realizar um novo calculo(s/n)\n?";
	cin>>resp;
//	cin.ignore();
    }while(resp=='s');
	
	
	return 0;
}
