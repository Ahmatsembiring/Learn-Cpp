#include<iostream>

using namespace std;

int main(){

    int M[2][2]={{9,10},{8,11}};
    float x;
    cin>>x;

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            M[i][j]=x*M[i][j];
            cout<<M[i][j]<<" ";
    }
    cout<<"\n";
}
}