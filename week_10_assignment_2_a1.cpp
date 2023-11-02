// Write a program to apply binary search in array sorted in decreasing order.
#include<iostream>
using namespace std;
int main(){
    int arr[] = {5,4,3,-1,-4,-10};
    int n = 6;
    int lo = 0;
    int hi = n-1;
    int target;
    cout<<"enter a target value ";
    cin>>target;

    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid] == target){
            cout<<mid<<endl;
            break;
        }
        else if(arr[mid]<target) hi = mid-1;
        else lo = mid+1;
    }
}