#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
const int MAX = 100;

void concatenar(char v1[], char v2[],char resultado[], char sol[], int nl, int nc);




void gerar_matriz (char mat[][MAX], int num_l, int num_c){
    srand(time(0));

    for(int i = 0; i<num_l; i++){
        for(int j=0; j<num_c;j++){
            mat[i][j] = (rand()%(105 - 99 ) +99);
        }
    }
}
void transposta (char m1[][MAX],char m2[][MAX], int nl, int nc){
 for(int i =0 ; i<nl; i++){
        for(int j =0; j<nc; j++){
            m2[i][j] = m1[j][i];
        }
    }
}
void solucionar (char mat[][MAX],char vet[], char wet[], int nl, int nc, int linh, int col){
    int soma = nl+nc;
    char maux[MAX][MAX];
    transposta(mat,maux,nl,nc);

    concatenar(mat[linh],maux[col],vet, wet, nl, nc);

}


void concatenar(char v1[], char v2[],char resultado[], char sol[], int nl, int nc){

    int cont = 0;
    for(int i =0; i <nl; i++){
        for(int j = 0; j<nc; j++){
           resultado[j] = v1[j];
            if(v1[i] !=v2[j]){
                resultado[i+j] = v2[j];
            }
        }

    }
    for (int k = 0; k < nl; k++){
        for (int t = 0; t < nc; t++){
            if(resultado[k] == resultado [t]){
                cont++;
            }
        }
    }
    for(int w = 0; w < (nl+nc-cont); w++){
        for( int u = 0; u < (nl+nc-cont); u++){
            if(resultado[w] != resultado[u]){
                sol[w] = resultado[w];
            }

        }

    }


}

int main(){

    char mc[MAX][MAX], maux[MAX][MAX];
    char vet[MAX];
    char v[MAX];
    int nl, nc,num_int_l, num_int_c;

    cout<<"Informe a quantidade de linhas da matriz.\n";
    cin>>nl;
    cout<<"Informe a quantidade de colunas da matriz.\n";
    cin>>nc;
    gerar_matriz(mc,nl,nc);
    cout<<"Matriz gerada.\n";
    for(int i = 0; i<nl; i++){
        for(int j =0; j<nc;j++){
            cout<<mc[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Informe a linha.\n";
    cin>>num_int_l;
    cout<<"Informe a coluna.\n";
    cin>>num_int_c;

    solucionar(mc,vet,v,nl,nc,num_int_l,num_int_c);

    for (int i =0; i<(nl+nc); i++){
        cout<<v[i]<<" ";

    }

return 0;
}
