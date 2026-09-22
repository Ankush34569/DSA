class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int>sumleft(n,0);
        sumleft[0]=nums[0];
        vector<int>sumright(n,0);
        sumright[n-1]=nums[n-1];
        for(int i=1;i<n;i++){
            sumleft[i]=sumleft[i-1]+nums[i];
        }
        for(int i=n-2;i>=0;i--){
            sumright[i]=sumright[i+1]+nums[i];
        }

        for(int i=0;i<n;i++){
            if(sumleft[i]==sumright[i]){
                return i;
            }
        }
      return -1;

    }
};