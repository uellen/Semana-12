#include <iostream>
#include <cstring>
using namespace std;

void insere_conteudo(char s1[],char s2[], char s3[], int p){

    int i = 0, j = 0;
    int n = strlen(s2);


    while (i<=p){
      if(i < p){
        s3[i] = s1[i];
      }
      else{
        for( j=0; j < n; j++){
            s3[i+j] = s2[j];
        }
      }
      i++;
    }
    while(s1[i] != '\0'){
        cout<<i;
        s3[i+j-1] = s1[i];
        i++;
    }
    s3[i+j-1] = '\0';
}

int main (){

    char str1[51], str2[51], saida[51];
    int p;
    cout<<"Insira a primeira string.\n";
    cin>>str1;
    cout<<"Insira a segunda string.\n";
    cin>>str2;
    cout<<"Insira a posicao onde deseja inserir o conteudo da str2.\n";
    cin>>p;

    insere_conteudo(str1,str2,saida,p);
    cout<<saida;

    return 0;
}
