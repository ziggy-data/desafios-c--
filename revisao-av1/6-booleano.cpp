#include <iostream>
using namespace std;

bool eh_multiplo_de_3(int a){
    if(a % 3 == 0){
        return 1;
    }else{
        return 0;
    }
}

int main(){

    int a = 8;

    cout<<eh_multiplo_de_3(a)<<endl;

    return 0;
}