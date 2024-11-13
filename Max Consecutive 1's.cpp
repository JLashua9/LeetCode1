class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_count = 0;
        int current_count = 0;
        for (int num : nums){
            if (num == 1){
                current_count+=1;
            } else {
                max_count = max(max_count, current_count);
                current_count = 0;
            }
        }
        max_count = max(max_count, current_count);
        return max_count;

    }

};