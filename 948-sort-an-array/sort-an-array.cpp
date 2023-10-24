class Solution {
public:
    void sort(vector<int> &v, int l, int h){
        if(h>l){
            int mid = l + (h-l)/2 ;

            sort(v,l,mid) ;
            sort(v,mid+1,h) ;

            merge(v,l,mid,h) ;
        } 
    }
    void merge(vector<int> &v, int l, int mid, int h){
        int i = l ;
        int j = mid+1; 
        int k =l ;
        int dum[h+1] ;
        while(i<=mid && j<=h){
            if(v[i] < v[j]){
                dum[k++] = v[i++] ;
            }
            else{
                dum[k++] = v[j++] ;
            }
        }
        while(i<=mid){
            dum[k++] = v[i++] ;
        }
        while(j<=h){
            dum[k++] = v[j++] ;
        }
        for(int i =l; i<=h;i++){
            v[i] = dum[i] ;
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        //using merge sort based on divide and conquer
        sort(nums,0,nums.size()-1) ;
        return nums ;
    }
};