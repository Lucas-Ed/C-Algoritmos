#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main() {
	
	int temp = 18;
	
	switch(temp){
		case temp < 10:
			cout << "Está verdadeiramente frio";
			break;
		case temp < 25:
			cout << "Que tempo agradável";
			break;
		defalt: 
		    cout << "certamente está quente";
		    break;
	}
	
	return 0;
}
