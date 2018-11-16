#include <iostream>
#include <cstring>
using namespace std;

int const SMAX = 51;
struct data{
    int dia;
    int mes;
    int ano;
};
struct funcionario{
    char nome[SMAX];
    data dataadmissao;
    int salario;
};
int posicao (funcionario vet[],int n, char str[]){
    int j = 0;
    for(int i = 0; i <= n; i++){
            if(strcmp(vet[i].nome, str) == 0){
                return i;
            }
    }
    return -1;
}


int main(){
    int n;
    char str[SMAX];
    cout<<"Digite o numero de funcionarios: \n";
    cin>>n;
    funcionario vetfunc[n];

    for(int i = 0; i < n; i++){
        cin.ignore();
        cout<<"Nome do funcionario.\n";
        cin.getline(vetfunc[i].nome,SMAX);
        cout<<"Dia da admissao.\n";
        cin>>vetfunc[i].dataadmissao.dia;
        cout<<"Mes da admissao.\n";
        cin>>vetfunc[i].dataadmissao.mes;
        cout<<"Ano da admissao.\n";
        cin>>vetfunc[i].dataadmissao.ano;
        cout<<"Salario.\n";
        cin>>vetfunc[i].salario;
    }
    cin.ignore();
    cout<<"Agora digite um nome a ser buscado: \n";
    cin.getline(str,SMAX);


    if(posicao(vetfunc,n,str) != -1){
        cout<<"O seu funcionario "<<str<<" foi achado na posicao "<<posicao(vetfunc,n,str);
    }
    else{
        cout<<"O funcionario nao foi encontrado.";
    }
    return 0;
}
