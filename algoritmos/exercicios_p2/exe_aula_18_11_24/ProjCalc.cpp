#include <iostream>
#include <locale>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

// soma.
float soma(float n1, float n2){
	return n1 + n2;
}

//Subtra��o.
float sub(float n1, float n2){
	return n1 - n2;
}

//Multiplica��o.
float mult(float n1, float n2){
	return n1 * n2;
}

//Divis�o.
float divisao(float n1, float n2){
	return n1 / n2;
}

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	int op;
	float n1, n2;
	
	do{
	// Menu de op��es
	cout << "+==========================+ \n";
	cout << "| 1- Soma                  | \n";
	cout << "| 2- Subtra��o             | \n";
	cout << "| 3- Multiplica��o         | \n";
	cout << "| 4- Divis�o               | \n";
	cout << "| 5- Sair                  | \n";
	cout << "+==========================+ \n";
	cout << "Escolha uma op��o: \n";
	cin >> op;
			
	switch (op) {
		    case 1:
		        // C�digo para caso valor1
		        cout << "Informe o primeiro n�mero:";
		        cin >> n1;
		        cout << "Informe o Segundo n�mero:";
		        cin >> n2;
		        
		        cout << "Resultado:" << soma(n1,n2) << endl;
		        
		        break;
		    case 2:
		        // C�digo para caso valor2
		        cout << "Informe o primeiro n�mero:";
		        cin >> n1;
		        cout << "Informe o Segundo n�mero:";
		        cin >> n2;
		        
		        cout << "Resultado:" << sub(n1,n2) << endl;
		        break;
		    case 3:
		        // C�digo para caso valor2
		        cout << "Informe o primeiro n�mero:";
		        cin >> n1;
		        cout << "Informe o Segundo n�mero:";
		        cin >> n2;
		        
		        cout << "Resultado:" << mult(n1,n2) << endl;
		        break;
		    case 4:
		        // C�digo para caso valor2
		        cout << "Informe o primeiro n�mero:";
		        cin >> n1;
		        cout << "Informe o Segundo n�mero:";
		        cin >> n2;
		        
		        cout << "Resultado:" << divisao(n1,n2) << endl;
		        break;
		    default:
		        // C�digo para caso padr�o
		        cout << "Voc� informou uma op��o inv�lida !"  << endl;
};
	}while(op !=5);
	return 0;
}
