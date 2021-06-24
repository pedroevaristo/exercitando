/*Desenvolva um algoritmo que leia 5 valores e apresente a posição onde está
o maior valor. Após isso o algoritmo deve apresentar o vetor em ordem decrescente */
#include <iostream>
#include <math.h>
using namespace std;

int main(){
int vet[5], i, j, a, m, c;//auxiliar. m = minimo

cout<<"Digite 5 numeros \n";
for(i = 0 ;i < 5; i++){

cin>> vet[i];

}

        for(i = 0 ; i < 5; i++){

                m = i;

            for(j = i + 1; j < 5  ; j++){

                if(vet[i] > vet[j]){

                        m = j;
                
                a = vet[i];
                vet[i] = vet[m];
                vet[m] = a;
                }
            }
         cout <<"\n" << vet[i] <<endl;
        }   

/* for(x = 4; x >= 0; x--){

cout <<"\n"<< vet[x] <<endl;

}*/





}