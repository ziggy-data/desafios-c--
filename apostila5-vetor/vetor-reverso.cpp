#include <iostream>
using namespace std;

int main(){

    int numero[3];

    for(int m=0;m<3;m++){
        cout<<"Digite o "<<m<<"º nome de 10"<<endl;
        cin>>numero[m];
    }

    for(int c=2;c>=0;c--){
        cout<<numero[c];
    }

}