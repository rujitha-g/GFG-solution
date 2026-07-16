class Solution {
  public:
    bool areRotations(string &s1, string &s2) {
       int n=s1.size();
       int m=s2.size();
       if(n!=m)
        return false;
        string d=s1+s1;
        return d.find(s2)!=string::npos;
    }
};