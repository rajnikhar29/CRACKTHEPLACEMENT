class Solution {
public:
    string convertToTitle(int n) {
        string res="";
        while (n >0){
            n--;
            int rem=n%26;
            char ch = rem + 'A';
            res.push_back(ch);
            n=n/26;
        }
        reverse(res.begin(),res.end());
        return res;
    }
};