#include <iostream>
using namespace std;

void printSortedArray(int *arr,int n){
    cout<<"the sorted array : " ;
    for(int i=0;i<n;i++){
        cout<<arr[i] <<",";
    }
    cout<<endl;
}
void bubbleSort(int arr[],int n ){
    bool  IsSwap =false;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                IsSwap=true;
                //cout<<"swape happen"<<endl;
            }
        }
        if(IsSwap==false){
           //cout<<"swape not  happen"<<endl;
            return;
        }
        
    }
    printSortedArray(arr,n);
}
int main(){
   int arr[]={5,4,1,3,2};
   int n =sizeof(arr)/sizeof(int);
    bubbleSort(arr,n);

    return 0;
}