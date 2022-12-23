class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        bool canJump[n];
        canJump[n-1] = true;

        for (int i = n-2;i>=0;i--){
            bool isTrue = false;
            for (int j = 1;j<nums[i]+1;j++){
            if (i+j>n-1){
                break;
            }
            else if (canJump[i+j]==true){
                isTrue = true;
                break;
            }
            }
            canJump[i] = isTrue;
        }
        
        return canJump[0];
    }
};
