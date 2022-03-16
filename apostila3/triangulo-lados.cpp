# include <iostream>
using namespace std;

int main(){

    //Classifica dos triangulo  por seus lados 

    int l1,l2,l3;

    cout<<"Indique o primeiro lado"<<endl;
    cin>>l1;
    cout<<"Indique o segunda lado"<<endl;
    cin>>l2;
    cout<<"Indique o terceiro lado"<<endl;
    cin>>l3;

    if(l1==l2 && l1==l3 && l2==l3 ){
        cout<<"O triangulo é equilátero";
    }
    else if(l1 == l2 || l1 == l3 || l2 == l3){
        cout<<"O triangulo é isoceles";
    }else {
        cout<<"O triangulo é escaleno";
    }

    return 0;
}