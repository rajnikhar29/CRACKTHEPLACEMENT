class Solution {
public:
    vector<string> result;

//     bool isValid(string& str) {
//         int count = 0;
//         for (char ch : str) {
//             if (ch == '(')
//                 count++;
//             else
//                 count--;
//             if (count < 0)
//                 return false;
//         }
//         return count == 0;
//     }

    void solve(string& curr, int n,int open,int close) {
        if (curr.length() == 2 * n) {
            result.push_back(curr);
            return;
        }
        if(open<n){
        curr.push_back('(');
        solve(curr, n,open+1,close);
        curr.pop_back();
        }
        if(close<open){
        curr.push_back(')');
        solve(curr, n,open,close+1);
        curr.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        string curr = "";
        int open=0;
        int close=0;

        solve(curr, n,open,close);
        return result;
    }
};