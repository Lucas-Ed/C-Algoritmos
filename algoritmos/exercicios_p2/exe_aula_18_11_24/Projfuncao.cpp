#include <iostream>
#include <locale>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;


// Função sem retorno e sem parâmetros.
void semretorno(){
	cout << "Ola Mundo !!!";
}

// Função sem retorno e com parâmetro.
void comretorno(string msg){
	cout <<  msg;
}

// função com retorno e sem parâmetro.
int somasimples(){
	// retorna o número 20.
	return 20;
}

// Função  com retorno e com parâmetro.
string comretornoecomparametro(string msg){
	return msg + ",Obrigado";
}

// Função  com retorno e com parâmetro.
int soma(int number_one, int number_two){
	
	number_one = 5;
	number_two = 5;
	
	//Realiza o cáalculo.
	int soma = number_one + number_two;
	
	return soma;
}


int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	// Chama a função sem retorno.
	semretorno();
	
	// pula linha.
	cout << endl; 
	
	// Chama a função sem retorno2.
	comretorno("Olá seja bem vindo !!");
	// pula linha.
	cout << endl;
	
	cout << somasimples();
	// pula linha.
	cout << endl;
	
	cout << comretornoecomparametro("volte sempre");
	// pula linha.
	cout << endl;
	
	int resultado = soma(0, 0);  // Os valores 0, 0 serão ignorados pela função

    // Exibe o resultado
    cout << "O resultado da soma é: " << resultado << endl;
	
	
	
	
	return 0;
}
