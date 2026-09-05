class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
    int n=nums.size();
        vector<int> rsg(n,0);
        rsg[0]=nums[0];
        for(int i=1;i<n;i++){
            rsg[i]=max(nums[i],rsg[i-1]);
        }
        vector<int> lsl(n,0);
        lsl[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            lsl[i]=min(nums[i],lsl[i+1]);
        }



        for(int i=0;i<n;i++){
            if(rsg[i]-lsl[i]<=k){
                return i;
            }
        }
     return -1;
    }
};