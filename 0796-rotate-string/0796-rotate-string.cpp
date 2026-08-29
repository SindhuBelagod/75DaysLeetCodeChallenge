class Solution {
public:
    bool rotateString(string s, string goal) {
       if(s.size()!=goal.size())
       return false;
       string tempo=s+s;
       return tempo.find(goal)!=string::npos; 
    }
};