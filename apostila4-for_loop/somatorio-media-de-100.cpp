#include <iostream>
using namespace std;

int main(){

    int resultado,media;

    for(int a=1; a<=100;a++){

        resultado = a+a;
        media = resultado/2;
        cout<<a<<" + "<<a<<" = "<<resultado<<endl;
        cout<<"media: "<<media<<endl;
    }

}