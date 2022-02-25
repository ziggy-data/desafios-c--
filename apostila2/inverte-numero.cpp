#include <iostream>
using namespace std;

int main(){

    string data,mistura,a1,a2,a3;

    cout<<"Digite 3 inteiros"<<endl;
    cin>>data;

    a1 = data[0];
    a2 = data[1];
    a3 = data[2];
    
    mistura = a3+ a2 +a1;

    cout<<mistura<<endl;

    return 0;
}