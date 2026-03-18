/**
 * @file aula03_at03.cpp
 * @author Nina Cunha
 * @date 2026-03-18
 * @brief Lê valores inteiros até que 0 seja digitado e informa a quantidade de valores.
 * Disciplina: Design de Softwares para Sistemas Mecatrônicos
 * Instituição: UniSENAI PR
 */
#include <iostream>
using namespace std;

int main(){
    int n;
    int contador = 0;

    while(true){
        cout << "Digite o valor: ";
        cin >> n;
        if(n==0){
            break;
        }
        contador++;
    }

    cout << "\n"<< contador << " valores foram escritos" << endl;
    return 0;
}