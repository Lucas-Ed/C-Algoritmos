#include <iostream>
#include <locale>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 
int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	// setando os tipos de  variáveis.
	int primeiro_numero, segundo_numero, terceiro_numero;

	// Entrada de dados
	cout << "Informe o primeiro número: \n";
    cin >> primeiro_numero;
 
	cout << "Informe o segundo número: \n";
    cin >> segundo_numero;
    
	cout << "Informe o terceiro número: \n";
    cin >> terceiro_numero;
    

    // Cálculos
    
    // Regras para definir o triângulo & Saída de resultados.
       // Verificar se as medidas formam um triângulo válido:
    if (primeiro_numero + segundo_numero > terceiro_numero &&
        primeiro_numero + terceiro_numero > segundo_numero &&
        segundo_numero + terceiro_numero > primeiro_numero) {

        // Regras para definir o triângulo & Saída de resultados
        if (primeiro_numero == segundo_numero && segundo_numero == terceiro_numero) {
            cout << "\n As medidas formam um triângulo Equilátero\n";
        } else if (primeiro_numero != segundo_numero && primeiro_numero != terceiro_numero && segundo_numero != terceiro_numero) {
            cout << "\n As medidas formam um triângulo Escaleno\n";
        } else {
            cout << "\nAs medidas formam um triângulo Isósceles\n";
        }

    } else {
        cout << "\n As medidas fornecidas não formam um triângulo válido.\n";
    }
 
	return 0;
}
