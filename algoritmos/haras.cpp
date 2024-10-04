#include <iostream>
#include <locale>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	int qtd, ferradura = 4, ferraduras_nec;
	
	cout << "Informe quantos cavalos tem no haras:";
	cin >> qtd;
	
	//Cáclculo de quantidade de ferraduras necessária para a qtd de cavalos.
	ferraduras_nec = qtd * ferradura;
	
	// Saídas
	cout << " A quantidade necessária de ferraduras para o haras é: " << ferraduras_nec;
	
	
	return 0;
}
