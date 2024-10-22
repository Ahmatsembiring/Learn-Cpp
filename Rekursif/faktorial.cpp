#include<iostream>
using namespace std;
int faktorial(int n){
    if(n==0){
        return 1;
    }else{
        return n*faktorial(n-1);
    }
}

int main(){
   int n;
    cout<<"Masukkan nilai n : ";
    cin>>n;
    cout<<"Nilai faktorial dari "<<n<<" adalah "<<faktorial(n)<<endl;
    return 0;   
    

    
}

