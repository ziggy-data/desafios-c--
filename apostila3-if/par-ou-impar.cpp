#include <iostream>
using namespace std;


int main(){

    int a;

    cout<<"O valor será identificado como impar ou par"<<endl;
    cout<<"Qual é o valor"<<endl;
    cin>>a;
    

    if (a % 2 == 0){
        cout<<"É par"<<endl;
    }
    else{
        cout<<"É impar"<<endl;
    }

return 0;

}    