#include <iostream>
using namespace std;

int main(){

    float quociente = 0,dividendo,divisor,x,resto=0;

    cout<<"Digite o divisor"<<endl;
    cin>>divisor;
    cout<<"Digite o dividendo"<<endl;
    cin>>dividendo;

    while(x>= divisor){
        x = x - divisor;
        quociente =  quociente + 1 ;

    }
    resto = x;
    cout<<dividendo<<"/"<<divisor<<"="<<quociente<<"  resto:"<<resto<<endl;

    return 0;
}
