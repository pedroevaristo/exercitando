/*Desenvolva um algoritmo que forneça ao usuário a opção de ordenar um
vetor em ordem crescente ou decrescente. O vetor deve ter n posições, também
informado pelo usuário. */

#include <iostream>
using namespace std;

int main(){
int vet[5], x, y, m, n, a;//media, numero, auxilio


cout <<"Digita aí 5 numeros \n";
for(x = 0; x < 5; x++){

cin>>vet[x];

}
cout<<"1 ou 2?"<<endl;
cin>>n;

   switch (n)
    {
    case 1: cout<<"Ordem crescente"<<endl;
        for(x = 0; x < 5; x++){//aqui vai repetir o loop mesmo

            m = x;// aqui vai atribuir x a media que será usado depois 
               for(y = x + 1; y < 5; y++){//não entendi essa logica aqui!!!

                  if(vet[x] > vet[y]){//vet[x] é esta sendo colocado as informações e vai comparar(depois disso)
                                    //o resultado de y, na parte y =x +1;

                  m = y;//por meio dessa mediasera um ponto de conexão entre  a media de x e y
                  
                  a = vet[x];
                  vet[x] = vet[m];
                  vet[m] = a;// Aqui vai verificando os numeros e ordenando( ordenação do algoritmo)


                  }
               }
            
         cout<<vet[x]<<endl;
        }break;

   case 2: cout<<"Ordem decrescente"<<endl;
     for(x = 5; x > 0; x--){

            m = x; 
               for(y = x - 1; y >= 0; y--){

                  if(vet[x] < vet[y]){

                  m = y;
                  
                  a = vet[x];
                  vet[x] = vet[m];
                  vet[m] = a;


                  }
               }
            
         cout<<vet[x]<<endl;
        }break;

    default: cout<<"Error!"<<endl;
    break;
   } 


}