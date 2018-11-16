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
void filter (funcionario ventrada[], int tam, data sarrafo, funcionario vsaida[]){
    int j = 0;
    for(int i = 0; i < tam; i++){
        if(ventrada[i].dataadmissao.ano > sarrafo.ano){
            vsaida[i] = ventrada[j];
            j++;
        }
        else if(ventrada[i].dataadmissao.ano == sarrafo.ano && ventrada[i].dataadmissao.mes > sarrafo.mes){
            vsaida[i] = ventrada[j];
            j++;
        }
        else if ( ventrada[i].dataadmissao.ano == sarrafo.ano && ventrada[i].dataadmissao.mes == sarrafo.mes && ventrada[i].dataadmissao.dia > sarrafo.dia){
            vsaida[i] = ventrada[j];
            j++;
        }
    }


}


int main(){
    int n;
    data datta;
    cout<<"Digite o numero de funcionarios: \n";
    cin>>n;
    funcionario vet1[n], vet2[n];

    for(int i = 0; i < n; i++){
        cin.ignore();
        cout<<"Nome do funcionario.\n";
        cin.getline(vet1[i].nome,SMAX);
        cout<<"Dia da admissao.\n";
        cin>>vet1[i].dataadmissao.dia;
        cout<<"Mes da admissao.\n";
        cin>>vet1[i].dataadmissao.mes;
        cout<<"Ano da admissao.\n";
        cin>>vet1[i].dataadmissao.ano;
        cout<<"Salario.\n";
        cin>>vet1[i].salario;
    }
    cin.ignore();
    cout<<"Agora digite a data limite que voce quer filtrar.\n";
    cin>> datta.dia;
    cin>> datta.mes;
    cin>> datta.ano;

    filter(vet1,n,datta, vet2);

    for(int i = 0 ; i < n; i++){
        cout << "Funcionario ";
        cout << vet1[i].nome;
        cout << " admitido em ";
        //cout << vet1[i].dataadmissao;
    }


    return 0;
}
