// algoritmo lista 2- fibonaccci
#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) {
        return n; // Caso base: F(0) = 0, F(1) = 1
    }
    return fibonacci(n - 1) + fibonacci(n - 2); // Recursão
}

int main() {
    int terms = 10; // Defina o número de termos que deseja
    for (int i = 0; i < terms; i++) {
        cout << fibonacci(i) << " ";
    }
    return 0;
}
