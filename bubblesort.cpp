#include <iostream>
using namespace std;

void bubblesort(int arr[], int n){
 for(int i=n-1;i>=1;i--){
  for(int j=0;j<i;j++){
    if(arr[j] >arr[j+1]){
    int temp = arr[j+1];
    arr[j+1] = arr[j];
    arr[j] = temp;
    }
   }
  }
}
 
int main(){
 int n;
 int arr[n];
 cout<<"Enter the number of elements to be entered ";
 cin >> n;
 for(int i=0;i<n;i++){
  cin >> arr[i];
  
  }
  
 bubblesort(arr,n);
 cout<<"the sorted elements are :";
 for(int i =0;i<n;i++){
    cout<<arr[i]<<""<<endl;
 }
 }
  
