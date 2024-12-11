// lista 2- exercicío 3 números que podem ser divisíveis por 4.

#include <iostream>
#include <locale>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    // Itera de 4 até 199,
    //com incremento de 4 para garantir
    // que cada número é divisível por 4.
    
    // incrementa num em 4 a cada iteração
    for (int num = 4; num < 200; num += 4) {
    // inicialização; condição; incremento
    
    // Saída
    cout << num << " ";
};
    

    return 0;
}
