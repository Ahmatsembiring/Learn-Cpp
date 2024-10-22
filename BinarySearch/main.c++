#include<iostream>
using namespace std;

int binarySearch(int arr[],int left,int right,int target){
    while(left <=right){
        int mid =left +(right - left);

        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid] < target){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    return -1;
}

int main(){

   
 char pilihan;
    do{
int target,result;

int arr[]={12,12,12,14,16,18,20,22,24,26,28,29};
int length=sizeof(arr)/sizeof(*arr);
cout<<"Data Yang Tersedia Iyalah "<<endl;
for(int i=0;i<length;i++){
    cout<<"index ke-"<<i<<" : "<<arr[i]<<endl;
}
    cout<<"Masukkan Data Yang Ingin Dicari : ";
    cin>>target;
    for(int j=0;j<length;j++){
        if(target == arr[j]){
            result++;
        }
    }
 result=binarySearch(arr,0,length-1,target);
if(result!=-1){
    cout<<"Data "<<target<<" Ditemukan pada :"<<endl;
    for(int k=0;k<length;k++){
        if(target ==arr[k]){
            cout<<"index ke-"<<k<<endl;
        }
    }
    }
    else{
        cout<<"Elemen tidak ditemukan"<<endl;
}
cout<<"Apkah anda Ingin Mencari sebuah data lagi ?? (Y/T) :";
cin>>pilihan;


}
while(pilihan=='Y'||pilihan=='T');
cout<<"Program selesai";


}


