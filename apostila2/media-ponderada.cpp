#include <iostream>
using namespace std;

int main(){

    float l1,l2,l3,l4,p1,p2,p3,p4,resultado;

    cout<<"Indique o primeiro valor"<<endl;
    cin>>l1;
    cout<<"Indique o primeiro peso"<<endl;
    cin>>p1;
    
    cout<<"Indique o segunda valor"<<endl;
    cin>>l2;
    cout<<"Indique o segunda peso"<<endl;
    cin>>p2;
    
    cout<<"Indique o terceiro valor"<<endl;
    cin>>l3;
    cout<<"Indique o terceiro peso"<<endl;
    cin>>p3;

    cout<<"Indique o quarto valor"<<endl;
    cin>>l4;
    cout<<"Indique o quarto peso"<<endl;
    cin>>p4;

    

    resultado = (((l1*p1) + (l2*p2) + (l3*p3) + (l4*p4)) / (p1+p2+p3+p4));

    cout<<"Resultado :"<< resultado <<endl;

}