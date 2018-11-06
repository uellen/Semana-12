#include <iostream>
using namespace std;

void imprime_numeros_com_maior_soma_dos_digitos_pares_que_impares(int a, int b);
void alg (int n , int& a1 , int& a2);
int main()
{

    int lim_inf , lim_sup;
    do{
        cout<<"Digite o limite inferior do intervalo"<<endl;
        cin>>lim_inf;
    } while (lim_inf <=0);

    cout<<"Digite o limite superior do intervalo"<<endl;
    cin>>lim_sup;

    while (lim_inf > lim_sup){
        cout<<"Digite o limite superior do intervalo"<<endl;
        cin>>lim_sup;
    }

    imprime_numeros_com_maior_soma_dos_digitos_pares_que_impares ( lim_inf , lim_sup );


    return 0;
}

void imprime_numeros_com_maior_soma_dos_digitos_pares_que_impares(int a, int b){

    int soma_par , soma_impar;
    for (int i = a ; i<=b ; i++){
       alg (i , soma_par , soma_impar);
       if(soma_par > soma_impar){
            cout<<"numeros com a soma dos digitos pares maior que a soma dos digitos impares :"<<endl;
            cout<<i<<endl;
        }
    }
}


void alg (int n , int& a1 ,int& a2){
    int comp;
    int soma_p = 0;
    int soma_i = 0;

    while (n != 0){
        comp = n % 10;
        n = n / 10;

        if(comp % 2 ==0){
            soma_p = soma_p + comp;
        }
        else if(comp % 2 ==1){
            soma_i = soma_i + comp;
        }
    }



}


