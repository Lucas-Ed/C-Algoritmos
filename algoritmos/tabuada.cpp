#include <iostream>
#include <locale>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	// tipando vari�veis
	int num, aux;
	
	// entrada
	cout << "Infome um n�mero:";
	cin >> num;
	
	// processo
	    for(aux=1 ; aux<=10 ; aux++)
	    // saida
        cout<<num<<" * "<<aux<<" = " << num*aux <<endl;
	
	return 0;
}
