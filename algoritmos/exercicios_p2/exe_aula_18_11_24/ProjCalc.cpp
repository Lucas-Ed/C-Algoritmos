#include <iostream>
#include <locale>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

// soma.
float soma(float n1, float n2){
	return n1 + n2;
}

//Subtração.
float sub(float n1, float n2){
	return n1 - n2;
}

//Multiplicação.
float mult(float n1, float n2){
	return n1 * n2;
}

//Divisão.
float divisao(float n1, float n2){
	return n1 / n2;
}

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	int op;
	float n1, n2;
	
	do{
	// Menu de opções
	cout << "+==========================+ \n";
	cout << "| 1- Soma                  | \n";
	cout << "| 2- Subtração             | \n";
	cout << "| 3- Multiplicação         | \n";
	cout << "| 4- Divisão               | \n";
	cout << "| 5- Sair                  | \n";
	cout << "+==========================+ \n";
	cout << "Escolha uma opção: \n";
	cin >> op;
			
	switch (op) {
		    case 1:
		        // Código para caso valor1
		        cout << "Informe o primeiro número:";
		        cin >> n1;
		        cout << "Informe o Segundo número:";
		        cin >> n2;
		        
		        cout << "Resultado:" << soma(n1,n2) << endl;
		        
		        break;
		    case 2:
		        // Código para caso valor2
		        cout << "Informe o primeiro número:";
		        cin >> n1;
		        cout << "Informe o Segundo número:";
		        cin >> n2;
		        
		        cout << "Resultado:" << sub(n1,n2) << endl;
		        break;
		    case 3:
		        // Código para caso valor2
		        cout << "Informe o primeiro número:";
		        cin >> n1;
		        cout << "Informe o Segundo número:";
		        cin >> n2;
		        
		        cout << "Resultado:" << mult(n1,n2) << endl;
		        break;
		    case 4:
		        // Código para caso valor2
		        cout << "Informe o primeiro número:";
		        cin >> n1;
		        cout << "Informe o Segundo número:";
		        cin >> n2;
		        
		        cout << "Resultado:" << divisao(n1,n2) << endl;
		        break;
		    default:
		        // Código para caso padrão
		        cout << "Você informou uma opção inválida !"  << endl;
};
	}while(op !=5);
	return 0;
}
