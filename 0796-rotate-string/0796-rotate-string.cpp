class Solution {
public:
    bool rotateString(string s, string goal)
    { 
        if(s.length()!=goal.length()) return false;
        int p=s.size();
        for(int i=0; i<p;i++)
        {
            char first=s[0];
            s=s.substr(1)+first;
            if(s==goal) return true;
        }
        return false;
        
    }
};