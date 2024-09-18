// slection sort is basicaly slect the smallest elements from 
// unsorted list in each iteration
// like {7,5,4,2}={2,5,4,7}={2,4,5,7}= array become short

#include<iostream>
using namespace std;
void slectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
         int small=arr[i];
         int loc=i;
         for(int j=i+1;j<n;j++){
            if(small>arr[j]){
                small=arr[j];
                loc=j;
            }
         }
         int temp=arr[i];
         arr[i]=arr[loc];
         arr[loc]=temp;
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
        slectionSort(arr,n);
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}