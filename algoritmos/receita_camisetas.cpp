#include <cstdlib>
#include <iostream>
#include <locale>

using namespace std;

int main(int argc, char *argv[]) {   
    setlocale(LC_ALL, "Portuguese");

    // Preço das camisetas
    int pequena = 30;
    int media = 40;
    int grande = 50;

    // Quantidade de camisetas vendidas
    int vend_peq, vend_med, vend_gran;

    // Variáveis para calcular a receita
    int receita_pequena, receita_media, receita_grande, soma;

    // Inputs
    cout << "Informe a quantidade de camisetas pequenas vendidas: ";
    cin >> vend_peq;
    
    cout << "Informe a quantidade de camisetas médias vendidas: ";
    cin >> vend_med;
    
    cout << "Informe a quantidade de camisetas grandes vendidas: ";
    cin >> vend_gran;

    // Cálculo de receita
    receita_pequena = vend_peq * pequena;
    receita_media = vend_med * media;
    receita_grande = vend_gran * grande;

    // Receita total
    soma = receita_pequena + receita_media + receita_grande;
    
    // Saída
    cout << "O valor arrecadado com as vendas das camisetas é: R$ " << soma << endl;

    return EXIT_SUCCESS;
}
