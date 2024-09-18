// Insertion sort basicaly insert less number in array and insert index 0 and then comapre other and again insert less number in index no=1 son on....
// like {23,1,10,5,2}={1,23,10,5,2}={1,10,23,5,2}={1,5,10,23,2}={1,2,5,10,23}sorted array


#include<iostream>
using namespace std;
void insertionSort(int arr[],int n){
    for(int i=0;i<n;i++){
        int temp=arr[i]; //store array in temp
        int j=i-1; // insilaze j=i-1;
        while(j>=0 && temp<arr[j]){ //check j>=0 and arr[j]>temp that is arr[i];
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=temp;

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
        insertionSort(arr,n);
        cout<<arr[i]<<" ";
    }
}