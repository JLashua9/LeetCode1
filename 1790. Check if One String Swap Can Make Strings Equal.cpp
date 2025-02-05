//
// Created by Jami Lashua on 2/5/25.
//
class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        vector<int> differentIndex;

        if (s1 == s2){
            return true;
        }

        for (int idx = 0; idx < s1.length(); idx++){
            if (s1[idx] != s2[idx]){
                differentIndex.push_back(idx);
            }
        }
        if (differentIndex.size() != 2){
            return false;
        }

        int i = differentIndex[0];
        int j = differentIndex[1];
        if (s1[i] == s2[j] && s1[j] == s2[i]){
            return true;
        }
        return false;
    }
};