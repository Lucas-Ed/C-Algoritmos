#include <iostream>
#include <locale>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	int qtd, ferradura = 4, ferraduras_nec;
	
	cout << "Informe quantos cavalos tem no haras:";
	cin >> qtd;
	
	//C�clculo de quantidade de ferraduras necess�ria para a qtd de cavalos.
	ferraduras_nec = qtd * ferradura;
	
	// Sa�das
	cout << " A quantidade necess�ria de ferraduras para o haras �: " << ferraduras_nec;
	
	
	return 0;
}
