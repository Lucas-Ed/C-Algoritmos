#include <iostream>
#include <locale>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	// vari�veis
	int resp;
	float resultado, num1, num2;
	
do {
	// limpando as vari�veis da mem�ria. 
	system("cls");
	resultado=0;
	num1=0;
	num2=0;
	// Menu de op��es
	cout << "+==========================+ \n";
	cout << "| 1- Soma                  | \n";
	cout << "| 2- Subtra��o             | \n";
	cout << "| 3- Multiplica��o         | \n";
	cout << "| 4- Divis�o               | \n";
	cout << "| 5- Sair                  | \n";
	cout << "+==========================+ \n";
	cout << "Escolha uma op��o: \n";
	cin >> resp;
	
	if (resp >=1 && resp <=4 ){
		do{
		
			cout << "Informe o primeiro n�mero: \n";
			cin >> num1;
			cout << "Informe o segundo n�mero: \n";
			cin >> num2;
	}while(num1 < 1);
	};
	
	switch(resp){
		case 1:
			cout << "Soma \n";
			// C�lculo 
			resultado = num1 + num2;
			break;
		case 2:
			cout << "Subtra��o \n";
			// C�lculo 
			resultado = num1 - num2;
			break;
		case 3:
			cout << "Multiplica��o \n";
			// C�lculo 
			resultado = num1 * num2;
			break;
		case 4:
			cout << "Divis�o \n";
			// C�lculo 
			resultado = num1 / num2;
			break;
		case 5:
			cout << "saindo......... \n";
			break;
		default:
			cout << "Op��o inv�lida !! \n";
			break;
	}
	cout << "O resultado da soma �:   \n" << resultado;
	system("pause"); // Pausa a execu��o.
}while(resp != 5);
	
	
	return 0;
}
