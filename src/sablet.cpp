
/**
 * @file sablet.cpp
 * @author Nina Cunha
 * @date 2026-03-11
 * @brief Valida operações matemáticas.
 * * Exercício: Crie um programa em C++ que leia dois números e uma operação (+, -, * ou /).
 * O programa deve calcular e mostrar o resultado da operação escolhida.
 * Se a operação for inválida, mostre “Operação inválida”.
 * Se for divisão por zero, mostre “Erro: divisão por zero”.
 * * Disciplina: Design de Softwares para Sistemas Mecatrônicos
 * Instituição: UniSENAI PR
 */

#include <iostream>
using namespace std;

int main(){
    float a, b; 
    int op;

    cout << "Digite o primeiro número: ";
    cin >> a;

    cout << "Digite o segundo número: ";
    cin >> b;

    cout << "Digite a operação desejada: \n1- Soma\n2- Subtração\n3- Multiplicação\n4-Divisão\nEscolha: ";
    cin >> op;

    cout << "O resultado é: ";

    switch(op){
        case 1:
            cout << a + b << endl;
            break;
        case 2:
            cout << a - b << endl;
            break;
        case 3:
            cout << a * b << endl;
            break;
        case 4:
            if(b==0){
                cout << "Erro: Divisão por zero" << endl;
                break;
            } else {
                cout << a / b << endl;
                break;
            }
        default:
            cout << "Operação Inválida" << endl;
            break;
    }   
    return 0;
}