#include <iostream>

using namespace std;
int tamanho (char srt[]){
    int i = 0, cont =0;
    while(srt[i] != '\0'){
        cont++;
        i++;
    }
    return cont++;
}

bool palindromo (char srt[]){
    int n = tamanho(srt);
    for(int i = 0; i<n; i++){
        if(srt[i] != srt[n-i-1]){
            return false;
        }
    }
    return true;
}

int main()
{
    char sa1[51];
    cout<<"Digite uma frase.\n";
    cin.getline(sa1,51);

    if(palindromo(sa1)){
        cout<<"Temos um palindromo.\n";
    }
    else{
        cout<<"Nao temos um palindromo.\n";
    }




    return 0;
}

