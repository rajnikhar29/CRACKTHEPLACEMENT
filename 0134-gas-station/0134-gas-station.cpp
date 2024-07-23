class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totalGas=accumulate(gas.begin(),gas.end(),0);
        int totalCost=accumulate(cost.begin(),cost.end(),0);

        if(totalGas < totalCost) return -1;
        int index=0;
        int current_gas=0;

        for(int i=0;i<gas.size();i++){
            current_gas+=gas[i]-cost[i];

            if(current_gas<0) {
                index=i+1;
                current_gas=0;
            }
        }
        return index;


    }
};