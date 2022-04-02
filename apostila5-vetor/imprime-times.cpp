#include <iostream>
using namespace std;

int main(){

    string time_um[3],time_dois[3];

    for(int i=0;i<3;i++){
        cout<<"Digite o time da casa "<<i<<" :"<<endl;
        cin>>time_um[i];
        cout<<"Digite o time adversario "<<i<<" :"<<endl;
        cin>>time_dois[i];
    }

    for(int i=0;i<3;i++){
        cout<<time_um[i]<<" X "<< time_dois[i]<<endl;
    }

    return 0;
}