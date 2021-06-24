/* Faça um programa que lê 4 valores X, A, B e C onde X é um número inteiro e
positivo e A, B, e C são quaisquer valores reais. O programa deve escrever os valores lidos
e:
• se X = 1, escrever os três valores A, B e C em ordem crescente;
• se X = 2, escrever os três valores A, B e C em ordem decrescente;
• se X = 3, escrever os três valores A, B, e C de forma que o maior valor fique entre os
outros dois;
• se X não for um dos três valores acima, dar uma mensagem indicando isso.*/


#include <iostream>
#include <math.h>
#include <bits/stdc++.h>
using namespace std;

int main(){
int vet[3];
int x, n, maior;//n = 1,2,3

cout<<"Digita 4 numeros: \n";
 for(x = 0 ; x < 3; x++){
     cin >> vet[x];

 }
 cout<<"agora digita uma das opcoes: 1(ordem crescente), 2(ordem decrescente), 3(o maior valor fica no meio)";
 cin >> n;


    switch (n){
    case 1:
    sort(vet, vet + 3); 
    for(x = 0; x < 3; x++){
        
            cout<< vet[x] <<endl;
    }
    break;

case 2:
    sort(vet, vet + 3, greater<int>()); 
    for(x = 0; x < 3; x++){
        
            cout<< vet[x] <<endl;
    }
    break;

case 3:
sort(vet, vet + 3);
maior = vet[2];

vet[2] = vet[1];
vet[1] = maior;

for(x = 0; x < 3 ; x++){
    if( vet[x] and vet[x]){

        cout<< vet[x]<<endl;

    } }   break;

default:
    break;
}
    
}