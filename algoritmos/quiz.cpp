#include <iostream>
#include <locale>
#include <windows.h>
/*#include <thread>   // Para usar a função sleep_for*/
/*#include <chrono>   // Para definir a duração do sleep*/

using namespace std;

int main(int argc, char** argv) {
    setlocale(LC_ALL, "Portuguese");

    int resposta, total_perguntas, total_acertos, total_erros;
    int opcaoCorreta_one = 2;  // Define a opção correta para a primeira pergunta
    int opcaoCorreta_two = 3;  // Resposta correta para a segunda pergunta (França)
    int opcaoCorreta_three = 2;  // Resposta correta para a terceira pergunta (Diego Maradona)
    int opcaoCorreta_four = 1;  // Resposta correta para a quarta pergunta (Real Madrid)
    int opcaoCorreta_five = 1;  // Resposta correta para a quinta pergunta (Japão e Coreia do Sul)
    float acerto = 0;
    float erros = 0;

    // Primeira pergunta
   	cout << "***************************************** \n";
	cout << "                 QUIZZ                    \n";
	cout << "***************************************** \n";
    cout << "(1)-Quantos jogadores tem um time de futebol?\n";
    cout << "1. (10) Jogadores.\n";
    cout << "2. (11) Jogadores.\n";
    cout << "3. (14) Jogadores.\n";
    cout << "Escolha uma opção (1, 2 ou 3): ";
    cin >> resposta;

    if (resposta == opcaoCorreta_one) {
        cout << "Você acertou!\n\n";
        acerto = acerto+ 1;//contador
    } else {
        cout << "Você errou!! A resposta correta é a opção " << opcaoCorreta_one << ".\n\n";
        erros++;//contador
    }

    // Pausa de 2 segundos
    Sleep(2000);
    /*this_thread::sleep_for(chrono::seconds(5));*/

    // Segunda pergunta
    cout << "(2)-Quem ganhou a Copa do Mundo de 2018?\n";
    cout << "1. Alemanha\n";
    cout << "2. Brasil\n";
    cout << "3. França\n";
    cout << "Escolha uma opção (1, 2 ou 3): ";
    cin >> resposta;

    if (resposta == opcaoCorreta_two) {
        cout << "Você acertou!\n\n";
        acerto = acerto+1;//contador
    } else {
        cout << "Você errou!! A resposta correta é a opção " << opcaoCorreta_two << ".\n\n";
        erros++;//contador
    }

    // Pausa de 2 segundos
    Sleep(2000);
    //*this_thread::sleep_for(chrono::seconds(5));*//

    // Terceira pergunta
    cout << "(3)-Qual jogador é conhecido como 'El Pibe de Oro'?\n";
    cout << "1. Lionel Messi\n";
    cout << "2. Diego Maradona\n";
    cout << "3. Cristiano Ronaldo\n";
    cout << "Escolha uma opção (1, 2 ou 3): ";
    cin >> resposta;

    if (resposta == opcaoCorreta_three) {
        cout << "Você acertou!\n\n";
        acerto = acerto+1;//contador
    } else {
        cout << "Você errou!! A resposta correta é a opção " << opcaoCorreta_three << ".\n\n";
        erros++;//contador
    }

    // Pausa de 2 segundos
    Sleep(2000);
    /*this_thread::sleep_for(chrono::seconds(5));*/

    // Quarta pergunta
    cout << "(4)-Qual clube conquistou a UEFA Champions League mais vezes?\n";
    cout << "1. Real Madrid\n";
    cout << "2. Barcelona\n";
    cout << "3. Bayern de Munique\n";
    cout << "Escolha uma opção (1, 2 ou 3): ";
    cin >> resposta;

    if (resposta == opcaoCorreta_four) {
        cout << "Você acertou!\n\n";
        acerto = acerto+1;//contador
    } else {
        cout << "Você errou!! A resposta correta é a opção " << opcaoCorreta_four << ".\n\n";
        erros++;//contador
    }

    // Pausa de 2 segundos
    Sleep(2000);
    /*this_thread::sleep_for(chrono::seconds(5));*/

    // Quinta pergunta
    cout << "(5)-Qual país sediou a Copa do Mundo de 2002?\n";
    cout << "1. Japão e Coreia do Sul\n";
    cout << "2. Alemanha\n";
    cout << "3. França\n";
    cout << "Escolha uma opção (1, 2 ou 3): ";
    cin >> resposta;

    if (resposta == opcaoCorreta_five) {
        cout << "Você acertou!\n";
        acerto = acerto+1; //contador
    } else {
        cout << "Você errou!! A sresposta correta é a opção " << opcaoCorreta_five << ".\n";
        erros++;//contador
    }
    
    // Cálculo % de acertos e erros.
    total_perguntas = 5; // Define o total de perguntas.
    total_acertos = (acerto / total_perguntas) * 100;// faz o calculo da % de acertos.
    total_erros = (erros / total_perguntas) * 100;// faz o calculo da % de erros.
    // Saída pro usuário.
    cout << "Você Acertou: " << acerto <<  " questões\n";
    cout << "Percentual de acertos: " << total_acertos << "%\n";
    cout << "Você errou: " << erros <<  " questões\n";
    cout << "Percentual de erros: " << total_erros << "%\n";

    return 0;
}

