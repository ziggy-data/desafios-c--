#include <iostream>
using namespace std;

int main(){

    int matriz[3][3];

    cout<<"digita ae"<<endl;

    for(int i =0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>matriz[i][j];
        }
    }

    cout<<"leitura diagonal"<<endl;

    for(int i =0;i<3;i++){
        for(int j=3;j<0;j--){
            
                cout<<matriz[i][3 - 1 - j]<<endl;
                
        }
    }


}