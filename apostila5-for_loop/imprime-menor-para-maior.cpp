#include <iostream>
using namespace std;

int main() {
    double num1,num2;

    cout<<"Digite um numero 1"<<endl;
    cin>>num1;
    cout<<"Digite um numero 2"<<endl;
    cin>>num2;  

    if(num1>num2){
        for (int i = num2; i <= num1; i++){
            cout<<i<<endl;
        }
    }else{
        for (int i = num1; i <= num2; i++){
            cout<<i<<endl;
        }
    }
    return 0;
}