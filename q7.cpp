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
bool validation (char se1[], char se2[], int p){

    for(int i = 0; i < p; i++){
        if(se1[i] != se2[i]){
            return false;
        }
    }
    return true;
}

bool conjunto (char s1[], char s2[]){
    int n = tamanho(s1), m = tamanho(s2), i = 0, j = 0;
    char s3[m];
    for(i; i<m; i++){
        for(j; j<n; j++){
            if(s2[i] == s1[j]){
                for(int k =0; k < m; k++){
                    s3[k] = s2[j+k];
                }
            }
        }
    }
    if(validation(s2,s3,m)){
        return true;
    }
    return false;
}

int main(){
    char sa1[51], sa2[51];
    cout<<"Digite uma frase.\n";
    cin.getline(sa1,51);

    cout<<"Digite uma outra frase.\n";
    cin.getline(sa2,51);

    if(conjunto(sa1,sa2)){
        cout<<"A segunda string eh subconjunto da primeira.\n";
    }
    else{
        cout<<"Nao temos conjunto.\n";
    }

    return 0;
}

