// Lista 3-exercicío 1, vetores.

//fazer 3 vetores de 7 posições
//um deles tera caracteres preenchido com quatro operações aritiméticas básicas,
//O programa
//deverá armazenar em um quarto vetor o resultado do calculo entre os dois
//primeiros vetores numéricos levando em consideração as operações
//aritméticas informadas no quarto vetor. Exemplo

#include <iostream>
#include <locale>

using namespace std;

int main() {
    // Setando idioma.
    setlocale(LC_ALL, "Portuguese");
    // Criando os vetores
    int vetor_1[7] = {10, 5, 7, 11, 3, 45, 20};
    int vetor_2[7] = {5, 2, 6, 4, 1, 30, 10};
    char vetor_3[4] = {'+', '*', '-', '/'};
    int vetor_4[7] = { };
//----------------------Soma------------------------------------------

    // fazendo a operação de soma
    // Acessando o operador '+' na posição 0 do vetor_3
    char operador = vetor_3[0];
    // Fazendo a operação de soma entre o vetor_1 e vetor_2.
    for(int i=0; i < 7; i++){
        if (operador == '+'){
            vetor_4[i] = vetor_1[i] + vetor_2[i];

        }
    }
    // Exibindo os valores do vetor de resultados do operador '+'
    cout << "Resultados dos cálculos:" << endl;
    for(int i=0; i < 7; i++){
        //cout << "Resultado:" << vetor_4[i] << endl
        cout << vetor_1[i] << " " << operador << " " << vetor_2[i] << " = " << vetor_4[i] << endl;
    }
//--------------------Multiplicação------------------------------------------
    // Acessando o operador '+' na posição 1 do vetor_3
    char operador_00 = vetor_3[1];

    // Fazendo a operação de multiplicação entre o vetor_1 e vetor_2.
    for(int i=0; i < 7; i++){
        if (operador_00 == '*'){
            vetor_4[i] = vetor_1[i] * vetor_2[i];

        }
    }
    // Exibindo os valores do vetor de resultados do operador '+'
    cout << "Resultados dos cálculos:" << endl;
    for(int i=0; i < 7; i++){
        //cout << "Resultado:" << vetor_4[i] << endl
        cout << vetor_1[i] << " " << operador_00 << " " << vetor_2[i] << " = " << vetor_4[i] << endl;
    }
//--------------------Subtração------------------------------------------
    // Acessando o operador '+' na posição 2 do vetor_3
    char operador_01 = vetor_3[2];

    // Fazendo a operação de multiplicação entre o vetor_1 e vetor_2.
    for(int i=0; i < 7; i++){
        if (operador_01 == '-'){
            vetor_4[i] = vetor_1[i] - vetor_2[i];

        }
    }
    // Exibindo os valores do vetor de resultados do operador '+'
    cout << "Resultados dos cálculos:" << endl;
    for(int i=0; i < 7; i++){
        //cout << "Resultado:" << vetor_4[i] << endl
        cout << vetor_1[i] << " " << operador_01 << " " << vetor_2[i] << " = " << vetor_4[i] << endl;
    }
//--------------------Divisão------------------------------------------
    // Acessando o operador '+' na posição 3 do vetor_3
    char operador_02 = vetor_3[3];

    // Fazendo a operação de multiplicação entre o vetor_1 e vetor_2.
    for(int i=0; i < 7; i++){
        if (operador_02 == '/'){
            vetor_4[i] = vetor_1[i] / vetor_2[i];

        }
    }
    // Exibindo os valores do vetor de resultados do operador '+'
    cout << "Resultados dos cálculos:" << endl;
    for(int i=0; i < 7; i++){
        //cout << "Resultado:" << vetor_4[i] << endl
        cout << vetor_1[i] << " " << operador_02 << " " << vetor_2[i] << " = " << vetor_4[i] << endl;
    }
    return 0;
}
