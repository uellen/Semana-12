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
void tratamento (char srt[]){
    int n = tamanho(srt);
    char srt2[n];
    int i = 0, j =0;

    while(srt[i] != '\0'){
        if(srt[i] != ' '){
            srt2[j] = srt[i];
            j++;
        }
        i++;
    }
    srt2[j] = '\0';
    for(int w = 0; w <= n; w++){
        srt[w] = srt2[w];
    }
}

bool palindromo (char srt[]){
    int n = tamanho(srt);
    tratamento(srt);

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

    tratamento(sa1);
    //cout<<sa1<<endl;
    if(palindromo(sa1)){
        cout<<"Temos um palindromo.\n";
    }
    else{
        cout<<"Nao temos um palindromo.\n";
    }

    return 0;
}

