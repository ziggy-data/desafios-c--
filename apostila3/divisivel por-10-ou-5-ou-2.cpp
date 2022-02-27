#include <iostream>
#include <cmath>
using namespace std;


int main(){

    int a;

    cout<<"Testa se o valor é divisivel por 2 ou 6 ou 10"<<endl;
    cout<<"Qual é o valor"<<endl;
    cin>>a;
    

    if (a % 5 == 0 || a % 10 == 0 || a % 2 == 0){
        cout<<"É divisivel por 2 ou 5 ou 10"<<endl;
    }
    else{
        cout<<"Não é divisivel por 2 ou 5 ou 10"<<endl;
    }

return 0;

}    