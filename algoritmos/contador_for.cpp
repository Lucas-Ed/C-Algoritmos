#include <iostream>
#include <locale>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	/*Tipando variáveis*/
    string nome;
    int inicio=0, fim=0;
    
    /*entradas*/
    /*cout << "Qual o seu nome ?" << endl;
    getline(cin, nome);*/
    
    cout << "Informe o início do intervalo:" << endl;
    cin >> inicio;
    
    cout << "Informe o final do intervalo:" << endl;
    cin >> fim;
    
    /*Laço for*/
    
    /*for( int i=inicio; i<fim; i++){
        cout << i << endl;
    }*/
    
    if(fim > inicio){
    	for( int i=inicio; i<=fim; i++){
        cout << i << endl;
    }
	}else{
		for( int i=inicio; i>=fim; i++){
        cout << i << endl;
    	}
	}
	
	
	return 0;
}
