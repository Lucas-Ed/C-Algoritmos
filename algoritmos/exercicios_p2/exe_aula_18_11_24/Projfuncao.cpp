#include <iostream>
#include <locale>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;


// Fun��o sem retorno e sem par�metros.
void semretorno(){
	cout << "Ola Mundo !!!";
}

// Fun��o sem retorno e com par�metro.
void comretorno(string msg){
	cout <<  msg;
}

// fun��o com retorno e sem par�metro.
int somasimples(){
	// retorna o n�mero 20.
	return 20;
}

// Fun��o  com retorno e com par�metro.
string comretornoecomparametro(string msg){
	return msg + ",Obrigado";
}

// Fun��o  com retorno e com par�metro.
int soma(int number_one, int number_two){
	
	number_one = 5;
	number_two = 5;
	
	//Realiza o c�alculo.
	int soma = number_one + number_two;
	
	return soma;
}


int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	// Chama a fun��o sem retorno.
	semretorno();
	
	// pula linha.
	cout << endl; 
	
	// Chama a fun��o sem retorno2.
	comretorno("Ol� seja bem vindo !!");
	// pula linha.
	cout << endl;
	
	cout << somasimples();
	// pula linha.
	cout << endl;
	
	cout << comretornoecomparametro("volte sempre");
	// pula linha.
	cout << endl;
	
	int resultado = soma(0, 0);  // Os valores 0, 0 ser�o ignorados pela fun��o

    // Exibe o resultado
    cout << "O resultado da soma �: " << resultado << endl;
	
	
	
	
	return 0;
}
