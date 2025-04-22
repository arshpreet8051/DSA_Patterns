//? two pointer approach
//? Time complexity: O(n)
//? Space complexity: O(1)
class Solution {
    public:
        vector<int> twoSum(vector<int>& arr, int target) {
            int n = arr.size();
    
            int left = 0;
            int right = n-1;
    
            int sum = 0;
    
            while(left<right){
    
                sum = arr[left] + arr[right];
    
                if(sum==target){
                    return {left+1,right+1};
                }
                else if(sum<target){
                    left++;
                }
                else{
                    right--;
                }
            }
    
            return {-1,-1};
        }
    };

/*++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/

//? Hash map approach
//? Time complexity: O(n)
//? Space complexity: O(n)
class Solution {
    public:
        vector<int> twoSum(vector<int>& numbers, int target) {
            int n = numbers.size();
    
            unordered_map<int,int>mp;
    
            for(int i = 0;i<n;i++){
                
                int a = numbers[i];
                int b = target-a;
    
                if(mp.find(b)!=mp.end()){
                    return{mp[b]+1,i+1};
                }
    
                mp[a] = i;
            }
    
            return {-1,-1};
    
        }
    };