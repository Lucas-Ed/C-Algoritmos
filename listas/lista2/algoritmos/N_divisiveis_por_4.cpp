// lista 2- exercic�o 3 n�meros que podem ser divis�veis por 4.

#include <iostream>
#include <locale>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    // Itera de 4 at� 199,
    //com incremento de 4 para garantir
    // que cada n�mero � divis�vel por 4.
    
    // incrementa num em 4 a cada itera��o
    for (int num = 4; num < 200; num += 4) {
    // inicializa��o; condi��o; incremento
    
    // Sa�da
    cout << num << " ";
};
    

    return 0;
}
