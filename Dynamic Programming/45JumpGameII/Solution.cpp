class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int min[n];
        min[n-1] = 0;
        for (int i = n-2;i>=0;i--){
            int minJumps = n;
            for (int j = 1;j<nums[i]+1;j++){
            if (i+j>n-1){
                break;
            }
            else if (minJumps>min[i+j]+1){
                minJumps = min[i+j]+1;
            }
            }
            min[i] = minJumps;
        }
        return min[0];
}
    
};
