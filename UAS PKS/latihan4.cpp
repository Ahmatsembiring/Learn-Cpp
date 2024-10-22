#include<iostream>
using namespace std;

int main(){
  int n=0; 
  int k=0;

  while(n<10){
    if(n%2==0){
        k=k+1;
    }
    n=n+1;
  }
  cout<<"Nilai K adalah :"<<k;
}   