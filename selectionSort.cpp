#include <iostream>
using namespace std;
void printSortedArray(int *arr,int n){
    cout<<"the sorted array : " ;
    for(int i=0;i<n;i++){
        cout<<arr[i] <<",";
    }
    cout<<endl;
}

void bubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[minIndex]>arr[j]){
                minIndex=j;
            }
            swap(arr[minIndex],arr[i]);
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