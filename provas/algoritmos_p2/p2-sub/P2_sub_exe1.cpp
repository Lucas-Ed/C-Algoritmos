#include <iostream>
#include <locale>

using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	int quant;
	int queijo=100, quant_queijo;// 50 gramas(cada), no lanche vai 2 fatias.
	int presunto=50, quant_presunto; // 50 gramas 1 fatia.
	int hamb=100, quant_hamb;// 100 gramas
	
	cout << "Quantos sandu�ches ser�o feitos ?";
	cin >> quant;
	
	// C�lculo de kg's de ingreientres necess�rios.
	
	quant_queijo = quant * queijo; 
	
	quant_presunto = quant * presunto;
	
	quant_hamb =  quant * hamb;
	
	// sa�das, quantidade de ingredientes necess�rias.
	
	cout << "A quantidade de queijo necess�ria �: " <<  quant_queijo << " kilogramas" << endl;
	
	cout << "A quantidade necess�ria de presunto �: "  << quant_presunto << " kilogramas" << endl;
	
	cout << "A quantidade necess�ria de hamburguer �: " << quant_hamb << " kilogramas" << endl;
	
	return 0;
}




