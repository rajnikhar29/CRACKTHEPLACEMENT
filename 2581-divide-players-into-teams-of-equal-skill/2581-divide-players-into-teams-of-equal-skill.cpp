class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        int n=skill.size();
        // sorted
        sort(skill.begin(),skill.end());

        long long ans=0;
        long long val1;
        long long val2;
        long long target=skill[0]+skill[n-1];

        int i=0;
        int j=n-1;

        while(i<j){
            val1=skill[i++];
            val2=skill[j--];

            if(val1+val2!=target) return -1;
             ans += val1*val2;
        }

        return ans;

    }
};