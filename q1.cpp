#include <iostream>
using namespace std;

int const SMAX = 51;
struct data{
    int dia;
    int mes;
    int ano;
};
struct funcionario{
    char nome[SMAX];
    data data_admissao;
    int salaroo;
};
int main(){
    char str1[51] = "bola";
    char str2[51] = "bola";

    if(str1 == str2){
        cout<<"Ok, dá para fazer.\n";
    }
    else{
        cout<<"Tem que usar outro for.\n";
    }

return 0;
}
