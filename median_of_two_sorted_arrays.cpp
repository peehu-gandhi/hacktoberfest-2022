class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double x,y;
        int i = 0, j = 0;
        int count = 0;
        while(count <= (nums1.size()+nums2.size())/2){
            y = x;
            if(i == nums1.size()){
                x = nums2[j++];
            }
            else if(j == nums2.size()){
                x = nums1[i++];
            }
            else if(nums1[i] < nums2[j]){
                x = nums1[i++];
            }
            else{
                x = nums2[j++];
            }
            
            count++;
        }
        
        if((nums1.size()+nums2.size())%2 == 0){
            return (x+y)/2.0;
        }
        else{
            return x;
        }
    }
};
