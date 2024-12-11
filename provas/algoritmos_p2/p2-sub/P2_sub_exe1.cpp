#include <iostream>
#include <locale>

using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	int quant;
	int queijo=100, quant_queijo;// 50 gramas(cada), no lanche vai 2 fatias.
	int presunto=50, quant_presunto; // 50 gramas 1 fatia.
	int hamb=100, quant_hamb;// 100 gramas
	
	cout << "Quantos sanduíches serão feitos ?";
	cin >> quant;
	
	// Cálculo de kg's de ingreientres necessários.
	
	quant_queijo = quant * queijo; 
	
	quant_presunto = quant * presunto;
	
	quant_hamb =  quant * hamb;
	
	// saídas, quantidade de ingredientes necessárias.
	
	cout << "A quantidade de queijo necessária é: " <<  quant_queijo << " kilogramas" << endl;
	
	cout << "A quantidade necessária de presunto é: "  << quant_presunto << " kilogramas" << endl;
	
	cout << "A quantidade necessária de hamburguer é: " << quant_hamb << " kilogramas" << endl;
	
	return 0;
}




