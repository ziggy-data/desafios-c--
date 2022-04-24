#include <iostream>
using namespace std;

bool manipula_soma(int *x, int *y, int *res){
    *res = *x + *y; 
        if(*res >= 10){
            return 1;
        }else{
            return 0;
        }
    }

int main(){

    int x = 10, y =30, res;

    cout<<manipula_soma(&x,&y,&res)<<endl;
    cout<<res<<endl;
    cout<<x<<endl;
    cout<<y<<endl;

    return 0;
}