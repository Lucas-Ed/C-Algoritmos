#include <iostream>
#include <locale>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	// tipando a matriz.
	string funcionarios[5][2];
	
	
	    // Preenchimento da matriz
    for (int lin = 0; lin < 5; lin++) {
	    cout << "Informe o c�digo do funcion�rio \n";
	    cin >> funcionarios[lin][0];
	    cout << "Informe o Nome do funcion�rio \n";
	    cin >> funcionarios[lin][1];
    }
    
    // sa�da.
    for (int lin = 0; lin < 5; lin++){
    	 cout << "C�digo:" << funcionarios[lin][0] << endl;	
    	 cout << "Nome:" << funcionarios[lin][1] << endl;
		 cout << " ========================= \n" ;	
	}
	
	
	return 0;
}
