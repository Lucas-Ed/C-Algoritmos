#include <iostream>
#include <locale>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "portuguese");
	
	float nota1, nota2, media;
	
	cout << "Entre com a nota 1: \n";
	cin >> nota1;
	
	cout << "Entre com a nota 2: \n";
	cin >> nota2;
	
	media = (nota1+nota2)/2;
	
	if(media<5){
		cout << "I\n";
	}else if (media>=5 && media<=5){
		cout << "B\n";
	}
	
	
	return 0;
}
