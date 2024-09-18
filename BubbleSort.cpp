// In Bubble sort we need swap the value like
// {5,1,4,2,8}={1,5,4,2,8}={1,4,5,2,8}= frist pass={1,4,2,5,8}
// =second pass={1,2,4,5,8}Array is sorted;


#include<iostream>
using namespace std;
void bubbleSort(int array[],int n){
    int temp;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){  // j<n-1-i
            if(array[j]>array[j+1]){  //if j>j1 then swap (j,j+1)
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        bubbleSort(arr,n);
        cout<<arr[i]<<" ";

    }
    cout<<endl;
}