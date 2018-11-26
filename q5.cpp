#include <iostream>

using namespace std;
int const SMAX = 51;
int const MAX = 30;

void histograma (char str[], int vetor[])
{
    int i = 0;

    while(str[i] != '\0')
    {
        vetor[(int)str[i]-97]++;
        i++;
    }

}
void exibir (int vet[], char str[])
{
    for(int i = 0;  i < 26; i++){
        if(vet[(int)str[i]-97]!=0){
            cout<<str[i]<<": "<<vet[(int)str[i]-97]<<endl;
        }
    }
}

int main()
{
    char sa1[SMAX];
    int vet[MAX] = {};
    cout<<"Digite uma frase.\n";
    cin.getline(sa1,SMAX);
    histograma(sa1,vet);

    char alfa[26]= {};
    for(int i = 0; i < 26; i++){
        alfa[i] = char (97 + i);
    }

    exibir(vet,alfa);

    return 0;
}
