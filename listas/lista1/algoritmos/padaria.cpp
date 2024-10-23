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
    cout << "Informe a qtd de pães vendidos: ";
    cin >> paes_vend;
    
    cout << "Informe a qtd de broas vendidas: ";
    cin >> broas_vend;
    
    // Cálculos das vendas.
    // Pães vendidos.
    paes_vendidos = paes_vend * pao;
    
    // Broas vendidas.
    broas = broas_vend * broa;
    
    // Arrecadação.
    arrecadacao = broas + paes_vendidos;
    
    // Poupança.
    poupanca = 0.10 * arrecadacao;
    
    // Saídas com duas casas decimais.
    cout << fixed << setprecision(2);
    cout << "A arrecadação da padaria foi: R$ " << arrecadacao << endl;
    cout << "O valor a ser guardado em poupança é: R$ " << poupanca << endl;
   	
    return 0;
}
