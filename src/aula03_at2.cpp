/**
 * @file aula03_at02.cpp
 * @author Nina Cunha
 * @date 2026-03-18
 * @brief Lê 5 valores e os soma.
 * * Faça um programa que leia 5 valores reais representando leituras de sensores e 
 * calcule a soma total usando um laço de repetição.
 * * Disciplina: Design de Softwares para Sistemas Mecatrônicos
 * Instituição: UniSENAI PR
 */

#include <iostream>
using namespace std;

int main(){
    float soma = 0;
    float valor;

    for(int i = 0; i < 5; i++){
        cout << "Leitura do Sensor: ";
        cin >> valor;
        soma += valor;
    }

    cout << "\nA soma dos valores é: " << soma << endl;

    return 0;
}