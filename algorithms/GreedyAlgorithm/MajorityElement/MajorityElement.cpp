int Solution::majorityElement(const vector<int> &A) {
    int index = 0;
    for (int cnt = 1, i = 1; i <= A.size() - 1; i++) {
        if (A[index] == A[i]) {
            cnt++;
        }  
        else {
            cnt--;
        }
        if (cnt == 0) {
            index = i;
            cnt = 1;
        }
    }
    return A[index];
}
