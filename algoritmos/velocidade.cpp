#include <iostream>
#include <locale>
using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
    // Variáveis para armazenar a velocidade permitida e a velocidade do motorista
    float velocidade_permitida, velocidade_motorista;
    
    // Solicitar e ler a velocidade máxima permitida na avenida
    cout << "Digite a velocidade máxima permitida (em km/h): ";
    cin >> velocidade_permitida;
    
    // Solicitar e ler a velocidade que o motorista estava dirigindo
    cout << "Digite a velocidade com que o motorista estava dirigindo (em km/h): ";
    cin >> velocidade_motorista;
    
    // Calcular a diferença entre a velocidade do motorista e a velocidade permitida
    float diferenca = velocidade_motorista - velocidade_permitida;
    
    // Verificar em qual faixa de multa o motorista se encontra
    if (diferenca <= 0) {
        cout << "O motorista estava dentro do limite de velocidade. Nenhuma multa aplicada." << endl;
    } else if (diferenca <= 10) {
        cout << "O motorista ultrapassou a velocidade permitida em até 10km/h. Multa: R$ 50,00." << endl;
    } else if (diferenca <= 30) {
        cout << "O motorista ultrapassou a velocidade permitida entre 11 e 30km/h. Multa: R$ 100,00." << endl;
    } else {
        cout << "O motorista ultrapassou a velocidade permitida em mais de 31km/h. Multa: R$ 200,00." << endl;
    }
    
    return 0;
}
