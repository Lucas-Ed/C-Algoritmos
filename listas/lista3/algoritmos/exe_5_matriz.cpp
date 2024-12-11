//Lista 3-exercicío 5, matrix 10X10.
// Leia uma matriz 10 x 10 e escreva a localização (linha e a coluna) do maior
#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    const int LINHAS = 10;
    const int COLUNAS = 10;
    // Matriz 10 X 10.
    int matriz[10][10] = {
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15, 16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25, 26, 27, 28, 29, 30},
        {31, 32, 33, 34, 35, 36, 37, 38, 39, 40},
        {41, 42, 43, 44, 45, 46, 47, 48, 49, 50},
        {51, 52, 53, 54, 55, 56, 57, 58, 59, 60},
        {61, 62, 63, 64, 65, 66, 67, 68, 69, 70},
        {71, 72, 73, 74, 75, 76, 77, 78, 79, 80},
        {81, 82, 83, 84, 85, 86, 87, 88, 89, 90},
        {91, 92, 93, 94, 95, 96, 97, 98, 99, 100}
    };

    // Inicialização da busca pelo maior valor.
    int maior = matriz[0][0];
    int linhaMaior = 0, colunaMaior = 0;

    // Busca do maior valor e sua localização.
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
                linhaMaior = i;
                colunaMaior = j;
            }
        }
    }

    // Saída do maior valor e sua localização.
    cout << "Maior valor: " << maior << endl;
    cout << "Localização: linha " << linhaMaior << ", coluna " << colunaMaior << endl;

    return 0;
}
