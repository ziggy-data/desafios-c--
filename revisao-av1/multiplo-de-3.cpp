#include <iostream>
#include <stdlib.h>
using namespace std;


bool eh_multiplo_de_3(int a){
    if(a % 3 ==0){
        return 1;
    }else{
        return 0;
    }
}


int main(){

    cout<<eh_multiplo_de_3(30)<<endl;

    return 0;

}