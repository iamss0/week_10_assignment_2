#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,12,16,18,19,30,35,37,49,50,51,53,56,58,59,67,59,71,75,76,78,79,87,89,99,100,101};
    int lo = 0;
    int hi = 1;
    int x = 75; // target value
    // changing hi and lo one by one unless we get the x graeter than lo and less than hi
    while(arr[hi]<x){
        lo = hi;
        hi *= 2;
    }

    // applying BS
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid] == x){
            cout<<mid<<endl;
            break;
        }
        else if(arr[mid] > x) hi = mid-1;
        else lo = mid+1;
    }
    
}