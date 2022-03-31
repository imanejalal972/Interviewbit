int Solution::numDistinct(string A, string B) {
    int columns = A.size(), rows = B.size();

    if(columns < rows)
        return 0;
    
    vector<vector<int>> ans (rows+1, vector<int>(columns+1, 0));
    
    for(int i = 0; i <= columns; i++)
        ans[0][i] = 1;
    
    for(int i = 1; i <= rows; i++){
        for(int j = i; j <= columns; j++){
            if(A[j-1] == B[i-1])
                ans[i][j] = ans[i-1][j-1] + ans[i][j-1];
            else
                ans[i][j] = ans[i][j-1];
        }
    }
    
    return ans[rows][columns];
}
