class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result="";
        
        for(int i=0;i<strs[0].length();i++){
            char ch=strs[0][i];
            bool match=true;
            
//             for comapring with rest of strings
            for(int j=1;j<strs.size();j++){
                if(strs[j].size() <i || ch!=strs[j][i]){
                    match=false;
                    break;
                }
            }
            if(match==false) break;
            else result.push_back(ch);
        }
        return result;
    }
};