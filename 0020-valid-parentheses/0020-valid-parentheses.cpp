class Solution {
public:
    bool isValid(string s) {
        int n=s.size();
        stack<char>st;
        
       for(char &ch:s){
           if(ch=='(') st.push(')');
           else if(ch=='{') st.push('}');
           else if(ch=='[') st.push(']');
           else if(st.empty()||st.top()!=ch) return false;
           else st.pop();//upr cloing hi pda h nikaal de
       }
        return st.empty();
    }
};