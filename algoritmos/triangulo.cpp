#include <iostream>
#include <locale>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 
int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	// setando os tipos de  vari�veis.
	int primeiro_numero, segundo_numero, terceiro_numero;

	// Entrada de dados
	cout << "Informe o primeiro n�mero: \n";
    cin >> primeiro_numero;
 
	cout << "Informe o segundo n�mero: \n";
    cin >> segundo_numero;
    
	cout << "Informe o terceiro n�mero: \n";
    cin >> terceiro_numero;
    

    // C�lculos
    
    // Regras para definir o tri�ngulo & Sa�da de resultados.
       // Verificar se as medidas formam um tri�ngulo v�lido:
    if (primeiro_numero + segundo_numero > terceiro_numero &&
        primeiro_numero + terceiro_numero > segundo_numero &&
        segundo_numero + terceiro_numero > primeiro_numero) {

        // Regras para definir o tri�ngulo & Sa�da de resultados
        if (primeiro_numero == segundo_numero && segundo_numero == terceiro_numero) {
            cout << "\n As medidas formam um tri�ngulo Equil�tero\n";
        } else if (primeiro_numero != segundo_numero && primeiro_numero != terceiro_numero && segundo_numero != terceiro_numero) {
            cout << "\n As medidas formam um tri�ngulo Escaleno\n";
        } else {
            cout << "\nAs medidas formam um tri�ngulo Is�sceles\n";
        }

    } else {
        cout << "\n As medidas fornecidas n�o formam um tri�ngulo v�lido.\n";
    }
 
	return 0;
}
