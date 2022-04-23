#include <iostream>
using namespace std;

int main(){

    double a1,a2,a3;

    cout<<"Classificador de triangulos quanto aos ângulos internos"<<endl;
    cout<<"Digite um angulô 1: ";
    cin>>a1;
    cout<<"Digite um angulô 2: ";
    cin>>a2;
    cout<<"Digite um angulô 3: ";
    cin>>a3;


    if(a1 == 90 || a2 == 90 || a3 == 90){
        cout<<"Este triângulo é: retângulo";
    }else if(a1 < 90 && a2 < 90 && a3 < 90){
        cout<<"Este triângulo é: acutângulo";
    }else if (a1 > 90 || a2 > 90|| a3 > 90){
        cout<<"Este triângulo é: obtusângulo";
    }

    return 0;
}