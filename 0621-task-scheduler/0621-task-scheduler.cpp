class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int>mp(26,0);
        
        for(char &ch:tasks) mp[ch-'A']++;

        sort(begin(mp),end(mp));

        // pick the highest freq element
        int maxFreq=mp[25];
        int pits=maxFreq-1;
        int idleSlots=n*pits;

        for(int i=24;i>=0;i--){
            idleSlots -=min(mp[i],pits);
        }
        if(idleSlots>0) return tasks.size()+idleSlots;
        return tasks.size();
    }
    
};