#include <iostream>
using namespace std;

int main(){

    double matriz[2][2],dobro[2][2];

    for(int d = 0; d < 2; d++){
        for(int j = 0; j < 2; j++){
                cout<<"Digite o seu nome:"<<endl;
                
                cin>>matriz[d][j];
       }    

    }

    for(int d = 0; d < 2; d++){
        for(int j = 0; j < 2; j++){
            dobro[d][j] = matriz[d][j] * matriz[d][j];
        }
    }

    for(int d = 0; d < 2; d++){
        for(int j = 0; j < 2; j++){
            cout<<dobro[d][j]<<endl;
        }
    }
   return 0;
}