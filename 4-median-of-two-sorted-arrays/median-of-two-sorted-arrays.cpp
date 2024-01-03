class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size() ;
        int n2= nums2.size() ;

        //my approach 2 pointer create a new array and find its median 
        //O(n1 + n2) approach !!
        vector<int> arr(n1+n2,0) ;
        int i = 0; int k=0; int j=0 ;

        while(i<n1 && j<n2){
            if(nums1[i] <= nums2[j]){
                arr[k++] = nums1[i++] ;
            }
            
            else{
                arr[k++] = nums2[j++] ;
            }
        }
        while(i<n1){
            arr[k++] = nums1[i++] ;
        }
        while(j<n2){
            arr[k++] = nums2[j++] ;
        }

        int n = n1 + n2 ;

        if (n % 2 != 0) return (double)arr[n/2];
        return (double)(arr[(n-1)/2] + arr[n/2])/2.0;
            
    }
};