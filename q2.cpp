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

void inverte_frase (char str1[], char str2[]){
    int i, n = tamanho(str1);

    for(i = 0; i < n; i++){
        str2[i] = str1[n-i-1];
    }


}

int main()
{
    char sa1[51], sa2[51];
    cout<<"Digite uma frase.\n";
    cin.getline(sa1,51);

    inverte_frase(sa1, sa2);
    cout<<sa2;

    return 0;
}
