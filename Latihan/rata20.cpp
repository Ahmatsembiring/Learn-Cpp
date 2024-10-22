#include <iostream>
using namespace std;
int main(){
    int bilangan[20];
    int max=INT_MIN; 
    int min=INT_MAX;
    
    cout<<"Masukkan 20 billangan :"<<endl;
    for(int i=0;i<20;i++){
        cout<<"bilanagan ke-"<<i+1<<":";
        cin>>bilangan[20];

        if(bilangan[i] >max){
            max=bilangan[i];
        if(bilangan[i] <min){
            min=bilangan[i];
        }
    }

}
}