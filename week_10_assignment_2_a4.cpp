class Solution {
public:
    bool search(vector<int>& arr, int target) {
        int n = arr.size();
        int lo = 0;
        int hi = n-1;
        
        while(lo<=hi){
            // initialize mid
            int mid = lo + (hi-lo)/2;

            //if target and mid_value are equal
            if(arr[mid] == target) return true;
            
            //if arrlo arrhi and arrmid are same
            else if(arr[lo] == arr[mid] && arr[hi]==arr[mid]){
                hi--;
                lo++;
            }


            //if mid_value is less than or equal to hi_value
            //this will determine that array on right of mid is sorted
            else if(arr[mid]<=arr[hi]){
                //case1:- if mid_value<=target and target<= hi
                //this will determine that the target value is at right of the mid_value
                if(arr[mid]<=target && target<=arr[hi]){
                    lo = mid+1;
                }
                //if the above does not hit it means the target is not at right od mid
                else{
                    hi = mid -1;
                }
            }
            //if mid_value is greater than or equal to lo_value
            //this will detrmine that array on left of mid is sorted
            else if(arr[mid]>=arr[lo]){
                //case1: if mid_value>= target and target>=lo;
                if(arr[mid]>=target && target>=arr[lo]){
                    hi = mid -1;
                }
                //case2: if not the above then target is not on the left of mid
                else{
                    lo = mid+1;
                }
            }
        }
        return false;
    }
};