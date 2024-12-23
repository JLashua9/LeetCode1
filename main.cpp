class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> romanMap={{'I',1}, {'V', 5},{'X',10}, {'L',50},
        {'C',100}, {'D', 500}, {'M',1000}};

        int total=0;
        int length = s.size();
        for(int i = 0; i < length; i++){
            /** at each letter in the string
            check to see if s[i+1]<s[i]
            convert the roman numeral to a number
            **/
            if (i<length-1 && romanMap[s[i]] < romanMap[s[i+1]]){
                total-=romanMap[s[i]];
            } else {
                total+=romanMap[s[i]];
            }
        }
        return total;


    }
};
