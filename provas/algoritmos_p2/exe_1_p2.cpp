#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main() {
	
	int temp = 18;
	
	switch(temp){
		case temp < 10:
			cout << "Est� verdadeiramente frio";
			break;
		case temp < 25:
			cout << "Que tempo agrad�vel";
			break;
		defalt: 
		    cout << "certamente est� quente";
		    break;
	}
	
	return 0;
}
