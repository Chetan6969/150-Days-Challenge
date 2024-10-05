#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        if (nums.empty()) {
            return -1; 
        }
        
        int count = 0, majority = 0;
        
        for (int n : nums) {
            if (count == 0) {
                majority = n;
            }
            count += (n == majority) ? 1 : -1;
        }
        count = 0;
        for (int n : nums) {
            if (n == majority) {
                count++;
            }
        }
        
        return (count > nums.size() / 2) ? majority : -1; 
    }
};