class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int write_index = 2;
        if (nums.size() <= 2){
            return nums.size();
        }
        for( int read_index = 2; read_index<nums.size(); read_index++){
            if (nums[read_index] != nums[write_index - 2]){
                nums[write_index] = nums[read_index];
                ++write_index;
            }
        }
        return write_index;

    }
};