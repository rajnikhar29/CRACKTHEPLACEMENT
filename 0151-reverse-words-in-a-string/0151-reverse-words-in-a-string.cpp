class Solution {
public:
    string reverseWords(string s) {
    // BEST APPROACH
    reverse(s.begin(),s.end());
    int i=0;
    int l=0,r=0;

    int n=s.length();

    while(i<n){
        while(i<n && s[i]!=' '){
            s[r++]=s[i++];
        }

        if(l<r){
            reverse(s.begin()+l,s.begin()+r);
            s[r]=' ';
            r++;
            l=r;
        }
        i++;
    }
    s=s.substr(0,r-1);
    return s;




    // O(N),O(N)
    //     int n=s.size();
    //     string result="";
    //     stringstream ss(s);
    //     string token;
    //     while(ss>>token){
    //         if(!result.empty()) result=" " + result;
    //         result=token+result;
    //     }
    //     return result;
    }
};