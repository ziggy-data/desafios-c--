#include <iostream>
using namespace std;

int main (){

    int l1,l2,l3;

    cout<<"Indique o primeiro lado"<<endl;
    cin>>l1;
    cout<<"Indique o segunda lado"<<endl;
    cin>>l2;
    cout<<"Indique o terceiro lado"<<endl;
    cin>>l3;

    if( (l2+l3) > l1 && (l1+l3) > l2 && (l1+l2) > l3){
        cout<<"Este triângulo existe"<<endl;
    }else{
        cout<<"Este triângulo NÃO existe"<<endl;
    }
    
    return 0;
}