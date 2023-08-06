#include<iostream>
using namespace std;
int BinarySearch(int arr[], int size, int key){
  int start = 0;
  int end = size-1;
  int mid = (start+end)/2;

    while(start<=end){
      if(arr[mid] == key){
        return mid;
      }
      else if(key > arr[mid]){
        start = mid+1;
      }
      else{
        end = mid-1;
      }
      mid = (start+end)/2;
    }
   

  
}
int main(){
  // 20 ko search krna hai in your array by using binary search and return index
int arr[] = {10,20,30,40,50,60,80,90};
  int size = 6;
  int key = 80;

  int index = BinarySearch(arr, size,key );

  cout<<"the index of the key is "<<index<<endl;



  

  
  
}