#include <iostream>
#include <locale>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Portuguese");
	
 	string RaAluno[10][4];
 	float media;
 	int contador =0 , contador1 = 0;
 	
 	    // Loop para ler as notas de cada aluno
    for (int lin = 0; lin < 10 RaAluno; lin++) {
        cout << "Informe o RA: \n " << i << endl;
        cin >> RaAluno[lin][0];
        cout << "Informe a Nota 1: \n " << i << endl;
        cin >> RaAluno[lin][1];
        cout << "Informe a Nota2: \n " << i << endl;
        cin >> RaAluno[lin][2];
        cout << "Informe a Nota3: \n " << i << endl;
        cin >> RaAluno[lin][3];
        
        media = (RaAluno[lin][1] = RaAluno[lin][2] + RaAluno[lin][3] / 3)
        
        if (media >=5){
        	// contador
        	contador++;
		}elseif(media <5){
			// contador
        	contador1++;
		}
    }
    
    cout << contador << "Alunos que obtiveram média >= 5" << endl;
    cout <<  "Alunos que foram reprovados" << contador1 << ;
	
	return 0;
}
