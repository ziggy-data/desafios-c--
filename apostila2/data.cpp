#include <iostream>
using namespace std;

int main(){

    string data;
    string calendario[3] = {"Ano", "Mês", "dia"};

    cout<<"digite uma data sendo DD/MM/YYYY"<<endl;
    cin>>data;

    cout<<calendario[0]<<" : "<<data[4]<<data[5]<<data[6]<<data[7]<<endl;
    cout<<calendario[1]<<" : "<<data[2]<<data[3]<<endl;
    cout<<calendario[2]<<" : "<<data[0]<<data[1]<<endl;        

    return 0;
}