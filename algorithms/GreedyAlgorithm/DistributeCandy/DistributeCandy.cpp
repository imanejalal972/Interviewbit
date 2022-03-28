int Solution::candy(vector<int> &A) {
    int numberOfCandies = 0;
    vector<int> lefttoright(A.size(), 1);
    vector<int> righttoleft(A.size(), 1);
    
    for (int i = 1; i < A.size(); i++)
        if (A[i] > A[i-1])
            lefttoright[i] = lefttoright[i-1] + 1;
    
    for (int i = A.size()-2; i >= 0; i--)
        if (A[i] > A[i+1])
            righttoleft[i] = righttoleft[i+1] + 1;
            
    for (int i = 0; i < A.size(); i++)
        numberOfCandies += max(lefttoright[i], righttoleft[i]);
        
    return numberOfCandies;
}
