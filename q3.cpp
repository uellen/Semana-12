#include <iostream>

using namespace std;

int tamanho (char s[]){
    int i = 0, cont = 0;
    while(s[i] != '\0'){
        cont++;
        i++;
    }
    return cont++;
}

void alterna_caixa (char str1[], char str2[]){
    int i, n = tamanho(str1);

    for(i = 0; i < n; i++){
        str2[i] = (char)((int)str1[i] - 32);
    }


}

int main()
{
    char sa1[51], sa2[51];
    cout<<"Digite uma frase.\n";
    cin.getline(sa1,51);

    alterna_caixa(sa1, sa2);
    cout<<sa2;

    return 0;
}

