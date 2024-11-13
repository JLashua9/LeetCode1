class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        std::vector<int> squares;
        for(int num : nums){
            int squaredNum = num*num;
            squares.push_back(squaredNum);
        }
        std::sort(squares.begin(), squares.end());
        return squares;

    }

};