#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    string nome;
    float anos, cigarros, maco, cigarro_unit, resultado_final;

    cout << "Informe o seu nome: \n";
    cin >> nome;
    cout << "Informe h� quantos anos voc� fuma: \n";
    cin >> anos;
    cout << "Informe quantos cigarros consome por dia: \n";
    cin >> cigarros;
    cout << "Informe o valor do ma�o de cigarros (20 cigarros): \n";
    cin >> maco;
    
    cigarro_unit = maco / 20; // valor unit�rio do cigarro
    resultado_final = (cigarro_unit * (cigarros * 365) * anos); // valor gasto durante o per�odo

    cout << nome << ", o valor gasto durante o tempo de fumante �: R$ " << resultado_final << endl;

    return 0;
}
