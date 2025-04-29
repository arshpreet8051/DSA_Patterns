class Solution {
    public:
        int lengthOfLongestSubstring(string s) {
            
            // here game to maintain the start
    
            int n = s.length();
    
            int ans = 0;
            int start = 0;
    
            unordered_map<char,int> mp;
            // < char, last occurenece >
    
            for(int i = 0;i<n;i++){
    
                char ch = s[i];
    
                // if the char is duplicate and is present in current sliding window
                if(mp.find(ch)!=mp.end() && mp[ch]>=start){
    
                    // change start of the sliding window next to the last occurence of duplicate element
                    start = mp[ch]+1;
                }
    
                mp[ch] = i;
    
                ans = max(ans, i - start + 1);
            }
            return ans;
        }
    };