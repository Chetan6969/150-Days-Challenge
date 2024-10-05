class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        
        sort(skill.begin(), skill.end());
        
        int n = skill.size();
        long long totalChemistry = 0;
        int targetSum = skill[0] + skill[n - 1]; 
        
       
        for (int i = 0; i < n / 2; ++i) {
            int teamSum = skill[i] + skill[n - i - 1];
            if (teamSum != targetSum) {
                return -1; 
            }
            totalChemistry += (long long)skill[i] * skill[n - i - 1];
        }
        
        return totalChemistry;
    }
};