#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char** argv) {
	string nome;	
	int idade;

	
	cout << "Informe o seu nome: \n";
	cin >> nome;
	    
	cout << "Informe sua idade: \n";
	cin >> idade;
	
	if(idade >= 18){
	cout << "Voc� pode votar !!! ";
}else{
	cout << "Voc� n�o pode votar !!";
}
	
	return 0;
}
	
	


