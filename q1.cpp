#include <iostream>
#include <cstring>

using namespace std;

int tamanho (char s[]){
    int i = 0, cont = 0;
    while(s[i] != '\0'){
        cont++;
        i++;
    }
    return cont++;

}
void copiar (char destino[], char origem[]){
    int i = 0;
    while(origem[i] != '\0'){
        destino[i] = origem[i];
        i++;
    }
    destino[i] = '\0';

}
void concatenar (char cdestino[],char corigem[]){
    int i, l, j, n, m;

    n = strlen(cdestino);
    m = strlen(corigem);
    l = n + m;

    for(i = 0; i < n; i++ ){
        if(cdestino[i] == '\0'){
            for(j = 0; j < m; j++){
                cdestino[i+j] = corigem[j];
            }
        }
    }
}
int comparar (char Sa1[], char Sa2[]){
    int i = 0;
    while(Sa1[i] != '\0' && Sa2[i] != '\0'){
        if(Sa1[i] != Sa2[i]){
            return (Sa1[i] - Sa2[i]);
        }
        i++;
    }
    return 0;
}
int main()
{
    char str1[10], str2[15];

    cout<<"Digite uma frase.\n";
    cin>>str1;
    cout<<"Digite uma outra frase.\n";
    cin>>str2;
    cout<<endl;

    cout<<"Operacao usando a funcao strcmp.\n";
    cout<<"O resultado da comparacao eh : "<<strcmp (str2,str1);

    cout<<endl;
    cout<<"Operacao usando a funcao comparar.\n";
    cout<<"O resultado da funcao comparar eh :"<<comparar(str2,str1);


    return 0;
}
