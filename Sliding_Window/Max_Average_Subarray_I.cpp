




//! TLE wala solution
//? O(N^2) solutionclass Solution {
public:
double findMaxAverage(vector<int>& nums, int k) {

    double ans = INT_MIN;

    int i = 0;
    int j = k-1;

    int n = nums.size();
    double sum = 0;

    while(j<n){

        sum = 0;
        for(int x = i;x<=j;x++){
            sum+=nums[x];
        }

        ans = max(ans,sum/k);
        i++;
        j++;
    }

    return ans;
}
};