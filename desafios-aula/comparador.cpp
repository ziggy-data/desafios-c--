#include <iostream>
using namespace std;

int main (){

    //Comparando duas variaveis de valores interiros que o usuario inserir

    int x,y;

    cout<<"Digite o x"<<endl;
    cin>>x;
    cout<<"Digite o y"<<endl;
    cin>>y;

    if(x>y){
        cout<<"X é maior !"<<endl;
    }else{
        cout<<"Y é maior !"<<endl;
    }
    return 0;
}