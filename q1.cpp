#include <iostream>
#include <string>
using namespace std;

void substring (char s1[],char s2[], int q, int p){
    int i = 0;
    int j = p;
    while (j <= q){
        s2[i] = s1[j];
        i++;
        j++;
    }
    s2[j] = '\0';
}

int main (){

    char str[51], saida[51];
    int p, q;
    cout<<"Insira uma string.\n";
    cin>>str;
    cout<<"Insira o interavalo superior.\n";
    cin>>q;
    cout<<"Insira o intervalo inferior.\n";
    cin>>p;

    substring (str,saida,q,p);
    cout<<saida;

    return 0;
}
