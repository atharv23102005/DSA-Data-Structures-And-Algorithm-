class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {

        int base = 0;

        for(int i = 0; i < customers.size(); i++){
            if(grumpy[i] == 0){
                base += customers[i];
            }
        }

        int sum = 0;
        int maxi = 0;

        for(int i = 0; i < customers.size(); i++){

            if(grumpy[i] == 1){
                sum += customers[i];
            }

            if(i >= minutes){

                if(grumpy[i - minutes] == 1){
                    sum -= customers[i - minutes];
                }
            }

            maxi = max(maxi, sum);
        }

        return base + maxi;
    }
};