class Solution {
  public:
    string longestCommonPrefix(vector<string> arr) {
        int n=arr.size();
        string ans= "";
        sort(arr.begin(),arr.end());
        
        string first=arr[0];
        string last=arr[n-1];
        int minLen=min(first.size(),last.size());
        
        for(int i=0; i<minLen;i++){
            if(first[i]!=last[i]) break;
            
            ans=ans+first[i];
        }
        return ans;
        
    }
};