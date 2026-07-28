        
        if(r==1){
            int i=0;
            while(i<c){
                ans.push_back(mat[0][i++]);
            }
            return ans;
        }
        
        else if(c==1){
            int i=0;
            while(i<r){
                ans.push_back(mat[i++][0]);
            }
            return ans;
        }
        
        else{
            for(int i=0;i<c;i++){
                ans.push_back(mat[0][i]);
            }
            
            for(int j=1;j<=r-1;j++){
                ans.push_back(mat[j][c-1]);
            }
            
            for(int i=c-2; i>=0; i--){
                ans.push_back(mat[r-1][i]);
            }
            
            for(int j=r-2;j>=1;j--){
                ans.push_back(mat[j][0]);
            }
        }
        return ans;
    }
};
