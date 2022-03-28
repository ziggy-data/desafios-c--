#include <iostream>
using namespace std;

int main(){

    //imprime os numeros fora da diagonal primaria

    int matriz[3][3];

    cout<<"digita ae"<<endl;

    for(int i =0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>matriz[i][j];
        }
    }

    cout<<"comecando ae"<<endl;

    for(int i =0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i!=j){
                cout<<matriz[i][j]<<endl;
                }
        }
    }


}