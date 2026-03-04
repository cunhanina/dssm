/**
 * @file aula01_atv02.cpp
 * @author Nina Cunha
 * @date 2026-03-04
 * @brief Exibe uma mensagem de boas-vindas da disciplina.
 * * Exercício: Faça um programa que leia dois valores reais: tensão e corrente de um circuito.
 * Implemente uma terceira variável com o resultado referente à potência resultante da tensão e corrente lidos.
 * Em seguida, exiba os três valores na tela com mensagens identificando cada valor.
 * * Disciplina: Design de Softwares para Sistemas Mecatrônicos
 * Instituição: UniSENAI PR
 */

#include <iostream>
#include <string>
using namespace std;

int main(){
    float tensao;
    float corrente;

    cout << "Digite a tensão: ";
    cin >> tensao;

    cout << "Digite a corrente: ";
    cin >> corrente;

    cout << "A potência total do circuito é de " << tensao * corrente << "w" << endl;

    return 0;
}