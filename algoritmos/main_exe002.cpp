#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	string nome ;
	float nota1, nota2, resultado;
	
	cout << "Informe o sei nome: \n";
	cin >>nome;
	cout << "Informe a primeira nota: \n";
	cin >> nota1;
	cout << "Informe a segunda nota: \n";
	cin >> nota2;
	resultado=nota1+nota2;
	cout << "Seu nome é:" << nome;
	
	
	return 0;
}
