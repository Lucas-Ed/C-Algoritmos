#include <iostream>
#include <locale>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
	// tipando a matriz.
	int matriz[4][4];
	
	
	/*matriz[0][0] = 0;
	matriz[0][1] = 1;
	matriz[0][2] = 2;
	matriz[0][3] = 3;
	matriz[1][0] = 4;
	matriz[1][1] = 5;
	matriz[1][2] = 6;
	matriz[1][3] = 7;
	matriz[2][0] = 8;
	matriz[2][1] = 9;
	matriz[2][2] = 10;
	matriz[2][3] = 11;
	matriz[3][0] = 12;
	matriz[3][1] = 13;
	matriz[3][2] = 14;
	matriz[3][3] = 15;

	
	
	//Saídas
	cout << matriz[0][0] << "|";
	cout << matriz[0][1] << "|";
	cout << matriz[0][2] << "|"; 
	cout << matriz[0][3] << "|" << endl;
	cout << matriz[1][0] << "|";
	cout << matriz[1][1] << "|";
	cout << matriz[1][2] << "|";
	cout << matriz[1][3] << "|" << endl;
	cout << matriz[2][0] << "|";
	cout << matriz[2][1] << "|";
	cout << matriz[2][2] << "|";
	cout << matriz[2][3] << "|" << endl;
	cout << matriz[3][0] << "|";
	cout << matriz[3][1] << "|";
	cout << matriz[3][2] << "|";
	cout << matriz[3][3] << "|" << endl;*/
	
	
    // Preenchimento da matriz
    for (int lin = 0; lin < 4; lin++) {
        for (int col = 0; col < 4; col++) {
            matriz[lin][col] = lin * col;
        }
    }

    // Impressão da matriz
    for (int lin = 0; lin < 4; lin++) {
        for (int col = 0; col < 4; col++) {
            cout << matriz[lin][col] << "|";
        }
        cout << endl; 
    }
	
	
	return 0;
}
