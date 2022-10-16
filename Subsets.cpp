class Solution {
public:
    vector<vector<int>>res;
    void solve(int ind,int n,vector<int>& subset,vector<int>& nums)
    {
        if(ind==n)
        {
            res.push_back(subset);
            return;
        }
        subset.push_back(nums[ind]);
        solve(ind+1,n,subset,nums);
        subset.pop_back();
        solve(ind+1,n,subset,nums);        
    }
    vector<vector<int>> subsets(vector<int>& nums)
    {
       int n=nums.size();
        vector<int>subset;
       solve(0,n,subset,nums);
       return res;
    }
};
