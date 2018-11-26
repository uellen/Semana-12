#include <iostream>

using namespace std;
int const SMAX = 51;
int const MAX = 20;

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
    int i = 0, j = 0, w = 0;

    while(srt[i] != '\0'){
        if(srt[i] != ' '){
            srt2[j] = srt[i];
            j++;
        }
        i++;
    }
    srt2[j] = '\0';

    srt = srt2;
    cout<<srt<<"\n";
}
void ordenar (char str1[]){
    int n = tamanho(str1);
    int i = 0, j = 0;
    char aux;

    for(i; i < n; i++){
        for(j = (i+1); j < n; j++){
            if(str1[j] > str1[i] && str1[j] != '\0' ){ //neste momento é importante que você tire os espaços tamabém.
                aux = str1[i];
                str1[i] = str1[j];
                str1[j] = aux;
            }
        }
    }

    cout<<str1<<endl;
}

void histograma (char str[], int vetor[]){
    int i = 0, j = 0, cont = 1;
    tratamento(str);
    ordenar(str);

    while(str[i] != '\0'){
        while(str[j] != '\0'){
            if(str[j] == str[i]){
              vetor[(int)str[i]-97] = cont++;
            }
            j++;
        }
        j = 0;
        cont = 0;
        i++;
    }
    cout<<str<<endl;
}
void exibir (int vet[], char str[]){
    int i =0;
        for(i = 0; i < 26; i++){
            cout<<str[i]<<": "<<vet[(int)str[i]-97]<<endl;
    }
}

int main()
{
    char sa1[SMAX];
    int vet[MAX] = {};
    cout<<"Digite uma frase.\n";
    cin.getline(sa1,SMAX);

    histograma(sa1,vet);
    exibir(vet,sa1);
    return 0;
}
