#include <iostream>
using namespace std;

int main (){
    int x;

    cout<<"Digite o X"<<endl;
    cin>>x;
    
    if(x % 2 == 0){
        cout<<"X é par"<<endl;
    }else{
        cout<<"X é impar"<<endl;
    }
    return 0;
}    