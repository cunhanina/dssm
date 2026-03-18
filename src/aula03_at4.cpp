/**
 * @file aula03_at4.cpp
 * @author Nina Cunha
 * @date 2026-03-18
 * @brief Faça um programa que leia 10 valores de sensores. Sempre que um valor negativo for digitado, 
 * ele deve ser ignorado usando continue. Ao final, mostre a soma apenas dos valores válidos (positivos).
 * Disciplina: Design de Softwares para Sistemas Mecatrônicos
 * Instituição: UniSENAI PR
 */

#include <iostream>
using namespace std;

int main(){
    float valor;
    float soma = 0;

    for(int i=0; i < 10; i++){
        cout << "Escreva o valor do sensor: ";
        cin >> valor;
        if(valor < 0){
            continue;
        }
        soma+= valor;
    }

    cout << "A soma dos valores válidos é de " << soma << endl;

    return 0;
}