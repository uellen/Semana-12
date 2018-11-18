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
    j++;
    srt2[j] = '\0';
    for(int w = 0; w < n; w++){
        srt[w] = srt2[w];
    }
}
void ordenar (char str1[]){
    int n = tamanho(str1);
    char str2[n];
    int i = 0, j = 0, index = 0;
    while(index != 25){
        while(str1[i] != '\0'){
            if((int)str1[i]-97 == index){
                str2[j] = str1[i];
                j++;
                index++;
            }
            i++;
        }
        index++;
    }
    i = 0;
    j = 0;
    while(str2[j] != '\0'){
        if(str2[j] != 0){
            str1[i] = str2[j];
            i++;
        }
        j++;
    }
    i++;
    str1[i] = '\0';
}

void validador (int v[]){
    int i = 0, j = 0, cont = 1;
    while (v[i] != '\0'){
        while (v[j] != '\0'){
            if(v[i] == v[j]){
              cont++;
            }
            j++;
        }
        cont = 0;
        i++;
    }
}

void histograma (char str[], int vetor[]){
    int i = 0, j = 0, cont = 0;
    vetor[26] = {};
    tratamento(str);
    ordenar(str);
    /*while(str[i] != '\0'){
        cout<<str[i]<<" ";
        i++;
    }*/

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
}
void exibir (int vet[], char str[]){
    int i =0;
        for(i = 0; i < 26; i++){
            cout<<str[i]<<": "<<vet[(int)str[i]-97]<<endl;
    }
}

int main()
{
    char sa1[51];
    int vet[26] = {};
    cout<<"Digite uma frase.\n";
    cin.getline(sa1,51);

    histograma(sa1,vet);
    exibir(vet,sa1);
    return 0;
}

