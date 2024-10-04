#include <iostream>
#include <locale>
#include <iomanip>  // Para usar fixed e setprecision
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;
int main(int argc, char** argv) {
    setlocale(LC_ALL, "Portuguese");

    // Alteramos os tipos de dados para float para lidar com decimais
    float pao = 0.35, broa = 1.50;
    int paes_vend, broas_vend;
    float paes_vendidos, broas, arrecadacao, poupanca;
    
    // Perguntas sobre as vendas.
    cout << "Informe a qtd de p�es vendidos: ";
    cin >> paes_vend;
    
    cout << "Informe a qtd de broas vendidas: ";
    cin >> broas_vend;
    
    // C�lculos das vendas.
    // P�es vendidos.
    paes_vendidos = paes_vend * pao;
    
    // Broas vendidas.
    broas = broas_vend * broa;
    
    // Arrecada��o.
    arrecadacao = broas + paes_vendidos;
    
    // Poupan�a.
    poupanca = 0.10 * arrecadacao;
    
    // Sa�das com duas casas decimais.
    cout << fixed << setprecision(2);
    cout << "A arrecada��o da padaria foi: R$ " << arrecadacao << endl;
    cout << "O valor a ser guardado em poupan�a �: R$ " << poupanca << endl;
   	
    return 0;
}
