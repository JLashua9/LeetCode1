class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int evenNumbers = 0;
        for (int num : nums){
            string numString = to_string(num);
            int numDigits = numString.length();
            if(numDigits % 2 == 0){
                evenNumbers+=1;
            }
        }
        return evenNumbers;
    }
};