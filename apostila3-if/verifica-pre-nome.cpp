#include <iostream>
using namespace std;

int main(){
    string nome;

    cout<<"Se o seu nome for Maria será impresso o seu nome? ";
    cin>>nome;

    if (nome == "maria" || nome == "Maria" || nome == "MARIA" ){
        cout<<nome<<endl;
    }
    else{
        cout<<"Seu nome não é maria entao não será impresso"<<endl;
    }

return 0;

}    