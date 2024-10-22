#include<iostream>
using namespace std;
int wow(int a,int b){
    int x=a,y=b ,r;
    while(y >0){
        r=x%y;
        x=y;
        y=r;
    }
    return x;
}

int main(){
    cout<<wow(12345,54321)<<endl;

}