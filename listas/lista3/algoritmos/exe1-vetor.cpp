// Lista 3-exercic�o 1, vetores.

//fazer 3 vetores de 7 posi��es
//um deles tera caracteres preenchido com quatro opera��es aritim�ticas b�sicas,
//O programa
//dever� armazenar em um quarto vetor o resultado do calculo entre os dois
//primeiros vetores num�ricos levando em considera��o as opera��es
//aritm�ticas informadas no quarto vetor. Exemplo

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

    // fazendo a opera��o de soma
    // Acessando o operador '+' na posi��o 0 do vetor_3
    char operador = vetor_3[0];
    // Fazendo a opera��o de soma entre o vetor_1 e vetor_2.
    for(int i=0; i < 7; i++){
        if (operador == '+'){
            vetor_4[i] = vetor_1[i] + vetor_2[i];

        }
    }
    // Exibindo os valores do vetor de resultados do operador '+'
    cout << "Resultados dos c�lculos:" << endl;
    for(int i=0; i < 7; i++){
        //cout << "Resultado:" << vetor_4[i] << endl
        cout << vetor_1[i] << " " << operador << " " << vetor_2[i] << " = " << vetor_4[i] << endl;
    }
//--------------------Multiplica��o------------------------------------------
    // Acessando o operador '+' na posi��o 1 do vetor_3
    char operador_00 = vetor_3[1];

    // Fazendo a opera��o de multiplica��o entre o vetor_1 e vetor_2.
    for(int i=0; i < 7; i++){
        if (operador_00 == '*'){
            vetor_4[i] = vetor_1[i] * vetor_2[i];

        }
    }
    // Exibindo os valores do vetor de resultados do operador '+'
    cout << "Resultados dos c�lculos:" << endl;
    for(int i=0; i < 7; i++){
        //cout << "Resultado:" << vetor_4[i] << endl
        cout << vetor_1[i] << " " << operador_00 << " " << vetor_2[i] << " = " << vetor_4[i] << endl;
    }
//--------------------Subtra��o------------------------------------------
    // Acessando o operador '+' na posi��o 2 do vetor_3
    char operador_01 = vetor_3[2];

    // Fazendo a opera��o de multiplica��o entre o vetor_1 e vetor_2.
    for(int i=0; i < 7; i++){
        if (operador_01 == '-'){
            vetor_4[i] = vetor_1[i] - vetor_2[i];

        }
    }
    // Exibindo os valores do vetor de resultados do operador '+'
    cout << "Resultados dos c�lculos:" << endl;
    for(int i=0; i < 7; i++){
        //cout << "Resultado:" << vetor_4[i] << endl
        cout << vetor_1[i] << " " << operador_01 << " " << vetor_2[i] << " = " << vetor_4[i] << endl;
    }
//--------------------Divis�o------------------------------------------
    // Acessando o operador '+' na posi��o 3 do vetor_3
    char operador_02 = vetor_3[3];

    // Fazendo a opera��o de multiplica��o entre o vetor_1 e vetor_2.
    for(int i=0; i < 7; i++){
        if (operador_02 == '/'){
            vetor_4[i] = vetor_1[i] / vetor_2[i];

        }
    }
    // Exibindo os valores do vetor de resultados do operador '+'
    cout << "Resultados dos c�lculos:" << endl;
    for(int i=0; i < 7; i++){
        //cout << "Resultado:" << vetor_4[i] << endl
        cout << vetor_1[i] << " " << operador_02 << " " << vetor_2[i] << " = " << vetor_4[i] << endl;
    }
    return 0;
}
