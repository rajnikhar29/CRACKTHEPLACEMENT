class Solution {
public:
string convert(string s){
    stack<char>st;

    for(int i=0;i<s.length();i++){
        if(s[i]=='#'){
            if(!st.empty()) st.pop();
        }
        else st.push(s[i]);
    }
    string result="";

    while(!st.empty()){
       result+=st.top();
       st.pop();
    }
    return result;
}
    bool backspaceCompare(string s, string t) {
        string a=convert(s);
        string b=convert(t);

        return a==b;
    }
};