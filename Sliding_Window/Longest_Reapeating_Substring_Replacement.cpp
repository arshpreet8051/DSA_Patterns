class Solution {
    public:
        int characterReplacement(string s, int k) {
            
            int n = s.length();
    
            vector<int>freq_map(26,0);
    
            int left = 0;
            int max_freq = 0;
            int max_len = 0;
    
            for(int right = 0;right<n;right++){
                
                freq_map[s[right]-'A']++;
                max_freq = max(max_freq,freq_map[s[right]-'A']);
    
                //  size of current window -> (right - left + 1)
                if((right - left + 1) - max_freq > k){
                    freq_map[s[left]-'A']--;
                    left ++;
                }
                else{
                    max_len = max(max_len,right-left+1);
                }
    
                
            }
    
            return max_len;
        }
    };