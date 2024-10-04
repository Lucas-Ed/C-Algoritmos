#include <iostream>
#include <locale>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	// variáveis
	int resp;
	float resultado, num1, num2;
	
do {
	// limpando as variáveis da memória. 
	system("cls");
	resultado=0;
	num1=0;
	num2=0;
	// Menu de opções
	cout << "+==========================+ \n";
	cout << "| 1- Soma                  | \n";
	cout << "| 2- Subtração             | \n";
	cout << "| 3- Multiplicação         | \n";
	cout << "| 4- Divisão               | \n";
	cout << "| 5- Sair                  | \n";
	cout << "+==========================+ \n";
	cout << "Escolha uma opção: \n";
	cin >> resp;
	
	if (resp >=1 && resp <=4 ){
		do{
		
			cout << "Informe o primeiro número: \n";
			cin >> num1;
			cout << "Informe o segundo número: \n";
			cin >> num2;
	}while(num1 < 1);
	};
	
	switch(resp){
		case 1:
			cout << "Soma \n";
			// Cálculo 
			resultado = num1 + num2;
			break;
		case 2:
			cout << "Subtração \n";
			// Cálculo 
			resultado = num1 - num2;
			break;
		case 3:
			cout << "Multiplicação \n";
			// Cálculo 
			resultado = num1 * num2;
			break;
		case 4:
			cout << "Divisão \n";
			// Cálculo 
			resultado = num1 / num2;
			break;
		case 5:
			cout << "saindo......... \n";
			break;
		default:
			cout << "Opção inválida !! \n";
			break;
	}
	cout << "O resultado da soma é:   \n" << resultado;
	system("pause"); // Pausa a execução.
}while(resp != 5);
	
	
	return 0;
}
