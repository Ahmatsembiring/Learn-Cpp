#include<iostream>
using namespace std;

int main(){
  int i,j,x;
  int nilai[3][4]={{9,8,7,7},
                   {7,7,8,9},
                   {8,8,8,8}
  };
  cout<<"Inputkan X :";
  cin>>x;

  for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        nilai[i][j]=x*nilai[i][j];
        cout<<nilai[i][j]<<" ";
    }
    cout<<endl;

  }


}