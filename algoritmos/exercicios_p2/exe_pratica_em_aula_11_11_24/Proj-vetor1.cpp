// exercicio para praticar passado em aula, algoritmo mostra os dados do vetor.
#include <iostream>
#include <locale>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	// Tipoando vari�veis, vetor de 10 posi��es.
	int vetor[10];
	
	// Preenchendo o vetor com dados de usu�rio.
	cout << "informe o primeiro n�mero: \n";
	cin >> vetor[0];
	
	cout << "informe o segundo n�mero: \n";
	cin >> vetor[1];
	
	cout << "informe o terceiro n�mero: \n";
	cin >> vetor[2];
	
	cout << "informe o quarto n�mero: \n";
	cin >> vetor[3];
	
	cout << "informe o quinto n�mero: \n";
	cin >> vetor[4];
	
	//mostrando os dados do valor.
	cout << "[0]=" << vetor[0] << endl;
	cout << "[1]=" << vetor[1] << endl;
	cout << "[2]=" << vetor[2] << endl;
	cout << "[3]=" << vetor[3] << endl;
	cout << "[4]=" << vetor[4] << endl;
	
	
	
	return 0;
}
