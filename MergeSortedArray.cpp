/**
Created by Jami Lashua 11/4/24 7am
**/
#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p1 = m - 1; // Points to the least meaningful element in Nums1
        int p2 = n - 1; // Points to the last meaningful element in Nums2
        int p = m + n -1; //points to the last position in nums1
        while (p2 >= 0) {
            //using p2 b/c the goal is to merge el from nums2 to nums1, and if p2 is 0 then no more ele
            if (p1 >= 0 && nums1[p1] > nums2[p2]){
                nums1[p] = nums1[p1];
                p1--;
            } else {
                nums1[p] = nums2[p2];
                p2--;

            }
            p--;
        }

    }
};