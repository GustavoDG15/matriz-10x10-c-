#include <iostream>
using namespace std;
//variaveis
int numero;

int main(){
    const int m = 10;
    int matriz[m][m];

    //leitura da matriz 10x10
    for (int i = 0; i<m; i++){
        for (int j = 0; j<m; j++){
            cout<<"digite o elemento da linha "<< i+1<<" coluna "<< j+1<<": ";
            cin>>matriz[i][j];
        }
    }
    //solicita um número
    cout<<"Digite um número: ";
    cin>>numero;

    cout<<"==multiplicacao diagonal principal==\n";
    //multiplica a diagonal principal pelo numero
    for (int i = 0; i<m; i++){
        matriz[i][i] *= numero;
    }

    //exibe a matriz com diagonal principal multiplicada
    for (int i = 0; i<m; i++){
        for (int j = 0; j<m; j++){
            cout<<" "<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"\n==multiplicacao pelo dobro diagonal secundaria==\n";
    //multiplica a diagonal secundaria pelo dobro do numero
    for (int i = 0; i<m; i++){
        matriz[i][m - i - 1]*=2*numero;
    }

    //exibe a matriz com a diagonal secundaria multiplicada
    for (int i = 0; i<m; i++){
        for (int j = 0; j<m; j++){
            cout<<" "<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
    }
