/**
 * @file aula02_atv01.cpp
 * @author Nina Cunha
 * @date 2026-03-11
 * @brief Lê a velocidade de um motor e a classifica.
 * * Exercício: Crie um programa que leia a velocidade de um motor e a classifique como:
 * Baixa se < 500
 * Média se entre 500 e 1500
 * Alta se > 1500
 * * Disciplina: Design de Softwares para Sistemas Mecatrônicos
 * Instituição: UniSENAI PR
 */

#include <iostream>
using namespace std;

int main(){
    float rpm;

    cout << "Digite o RPM: ";
    cin >> rpm;

    if (rpm < 500){
        cout << "Seu rpm está baixo" << endl;  
    } else if (rpm > 1500){
        cout << "Seu rpm está alto" << endl;
    } else {
        cout << "Seu rpm está na média" << endl;
    }

    return 0;
 }