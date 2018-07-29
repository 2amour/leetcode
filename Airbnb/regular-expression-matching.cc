//  Regular Expression Matching

//  Time O(N), Space O(1)
class Solution {
public:
    bool isMatch(string s, string p) {
        if (p.size() == 0)  return s.size()==0;
        if (p.size() == 1)  
            return (s.size()==1 && (p[0]==s[0] || p[0]=='.'));
        if (p[1] != '*') {
            if (s.size() == 0)  return false;
            return (p[0]==s[0] || p[0]=='.') && isMatch(s.substr(1), p.substr(1));
        }
        while (s.size()!=0 && (p[0]==s[0] || p[0]=='.')) {
            if (isMatch(s, p.substr(2)))    return true;
            s = s.substr(1);
        }
        return isMatch(s, p.substr(2));
    }
};
