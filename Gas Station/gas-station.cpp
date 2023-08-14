class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int size = gas.size();
        bool isCompleted = false;
        int index = 0;

        int tank = 0;
        int remaining = 0;
        int tcost = 0;

        for(int i=0;i<size;i++){
            tank += gas[i];
            tcost += cost[i];
            remaining += gas[i];

            remaining -= cost[i];

            if(remaining < 0){
                index=i+1;
                remaining=0;
            } 
            std::cout<<remaining<<endl;
            std::cout<<"end of "<<i<<endl;

        }
        if(tcost>tank) return -1;
        if(remaining >= 0){
            return index;
        }
        return -1;
    }
};