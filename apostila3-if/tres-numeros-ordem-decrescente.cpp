#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3, temp;

    cout<<"Classifica os 3 valores em ordem decrescente:";
    cout<<"Numero 1: "<<endl;
    cin>>num1;

    cout<<"Numero 2: "<<endl;
    cin>>num2;

    cout<<"Numero 3: "<<endl;
    cin>>num3;

    if(num2 < num1){
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    if(num3 < num1){
        temp = num1;
        num1 = num3;
        num3 = temp;
    }

    if(num3 < num2){
        temp = num2;
        num2 = num3;
        num3 = temp;
    }

    cout <<num1<<" - "<<num2<<" - "<<num3<<endl;
}