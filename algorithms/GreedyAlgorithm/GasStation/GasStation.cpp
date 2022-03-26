int Solution::canCompleteCircuit(const vector<int> &A, const vector<int> &B) {
    int fuel = 0, starting_gas_station_index = 0, count = 0;
    
    for(int i = 0; i < A.size(); i++) {
        count = count + (A[i] - B[i]);
        fuel = fuel + (A[i] - B[i]);
        
        if(fuel < 0) {
            fuel = 0;
            starting_gas_station_index = i+1;
        }
    }
    
    if(count >= 0) {
        return starting_gas_station_index%(A.size());
    }
    
    return -1;
}