// 525. Contiguous Array

#include<vector>
#include<unordered_map>
using namespace std;
 
class Solution {
    public:
        int findMaxLength(vector<int>& nums) {
            /*
            GAME
            at any index, we encounter a sum that's already been encountered at some previous   index, it means that the number of 0's and 1's are equal between the indices corresponding to the equal sum values.
            */
            
            // map<sum, first occurence>
            unordered_map<int,int> mp;
            
            // je koi array starting toh start hoi te valid a ta eh step kita
            mp[0] = -1;
    
            int n = nums.size();
            
            int ans = 0;
            int sum = 0;
    
            for(int i = 0;i<n;i++){
                sum+= (nums[i]==0) ? -1 : 1;
    
                if(mp.find(sum)!=mp.end()){
                    ans = max(ans,i-mp[sum]);
                }
                else{
                    mp[sum] = i;
                }
            }
            
            return ans;
    
        }
    };