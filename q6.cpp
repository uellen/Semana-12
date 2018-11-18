#include <iostream>
using namespace std;

void iniciais (char str1[], char str2[]){
    int i = 0, j = 0;

    if(str1[0] == ' '){

    }
    else{
      str2[0] = str1[0];
      j++;
    }

    while(str1[i] != '\0'){
        if(str1[i] == ' '){
            str2[j] = str1[i+1];
            j++;
        }
        i++;
    }
    str2[j] = '\0';
}

int main()
{
    char sa1[51], sa2[51];
    cout<<"Digite o seu nome completo.\n";
    cin.getline(sa1,51);
    iniciais(sa1,sa2);

    int i = 0;
    while(sa2[i] != '\0'){
        cout<<sa2[i]<<". ";
        i++;
    }

    return 0;
}
