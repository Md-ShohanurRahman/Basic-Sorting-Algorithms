#include <iostream>
using namespace std;
void printSortedArray(int *arr,int n){
    cout<<"the sorted array : " ;
    for(int i=0;i<n;i++){
        cout<<arr[i] <<",";
    }
    cout<<endl;
}

void insertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int current =arr[i];
        int pre=i-1;
        while(pre>=0&&arr[pre]>current){
            swap(arr[pre],arr[pre+1]);
            pre--;
        }
    }
    printSortedArray(arr,n);
}

int main(){
   int arr[]={5,4,1,3,2};
   int n =sizeof(arr)/sizeof(int);
 insertionSort(arr,n);

    return 0;
}
// time complexity of the code is O(n^2)
