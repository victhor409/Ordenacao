#include<iostream>
#include<cstdlib>

using namespace std;

int main(){


double vet[10]={9,9.7,5,0,10,5.5,8.2,7.3,7.2,7.1};

//////////// Insert Sort ////////////
double aux;
for(int i=0; i<9; i++){
    for(int j=i+1; j>0; j--){
        if(vet[j]<vet[j-1]){
            aux=vet[j];
            vet[j]=vet[j-1];
            vet[j-1]=aux;
        }
    }
}



for(int i=0; i<10; i++)
    cout<<vet[i]<<" | ";
    cout<<endl;

 return 0;
}