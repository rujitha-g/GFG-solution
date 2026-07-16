class Solution {
  public:
    bool areIsomorphic(string &s1, string &s2) {
        int a[256]={0};
        int b[256]={0};
        
        int n1=s1.size();
        int m1=s2.size();
        
        int n=min(n1,m1);
        for(int i=0; i<n;i++){
            if(a[s1[i]]!=b[s2[i]]) return false;
            
            a[s1[i]]=i+1;
            b[s2[i]]=i+1;
        }
        return true;
    }
};