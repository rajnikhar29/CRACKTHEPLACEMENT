class Solution {
public:
int f(string &s,int i,int j){
    if(i>=j) return 0;
    if(s[i]==s[j]) return f(s,i+1,j-1);
    else return 1+min(f(s,i+1,j),f(s,i,j-1));
}
    int minInsertions(string s) {
        int n=s.size();
        return f(s,0,n-1);

    }
};