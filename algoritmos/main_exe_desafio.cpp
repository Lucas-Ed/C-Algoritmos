#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    string nome;
    float anos, cigarros, maco, cigarro_unit, resultado_final;

    cout << "Informe o seu nome: \n";
    cin >> nome;
    cout << "Informe há quantos anos você fuma: \n";
    cin >> anos;
    cout << "Informe quantos cigarros consome por dia: \n";
    cin >> cigarros;
    cout << "Informe o valor do maço de cigarros (20 cigarros): \n";
    cin >> maco;
    
    cigarro_unit = maco / 20; // valor unitário do cigarro
    resultado_final = (cigarro_unit * (cigarros * 365) * anos); // valor gasto durante o período

    cout << nome << ", o valor gasto durante o tempo de fumante é: R$ " << resultado_final << endl;

    return 0;
}
