#include<iostream>
using namespace std;

int main(){
    int n=0;
    int k=0;

do{
    if(n%2==0){
        k+=1;
    }
    n+=1;

}while(n<10);
    cout<<" Nilai K :"<<k;


}