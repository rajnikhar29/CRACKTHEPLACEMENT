class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int m=s1.length();
        int n=s2.length();
        
        if(m>n) return false;

        sort(begin(s1),end(s1));

        for(int i=0;i<=n-m;i++){
            string sub= s2.substr(i,m);
            sort(begin(sub),end(sub));

            if(s1==sub) return true;

        }
        return false;
    }
};