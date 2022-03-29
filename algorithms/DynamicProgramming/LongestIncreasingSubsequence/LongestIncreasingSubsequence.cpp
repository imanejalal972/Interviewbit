int Solution::lis(const vector<int> &A) {
    int length_lis = 0;
    vector<int> v(A.size(), 0);
    
    for (int i = 0; i < A.size(); i++) {
        int y = 0;
        for (int j = 0; j < i; j++) {
            if (A[i] > A[j]) {
                y = max(y, v[j]);
            }
        }
        v[i] = y + 1;
        length_lis = max(length_lis, v[i]);
    }
    return length_lis;
}
