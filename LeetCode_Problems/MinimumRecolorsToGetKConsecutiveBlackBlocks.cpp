// problem link
// https://leetcode.com/problems/minimum-recolors-to-get-k-consecutive-black-blocks/description/

class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        map<char, int> mp;
        int n = blocks.length();

        for(int i = 0;i < k;i++){
            if(mp.find(blocks[i]) == mp.end()){
                mp[blocks[i]] = 1;
            }else{
                mp[blocks[i]]++;
            }
        }

        int s = 0, min = k;

        if(mp['W'] < min){
            min = mp['W'];
        }


        for(int i = k;i < n;i++){
            if(mp.find(blocks[i]) == mp.end()){
                mp[blocks[i]] = 1;
            }else{
                mp[blocks[i]]++;
            }

            if(mp[blocks[s]] == 1){
                mp.erase(blocks[s]);
            }else{
                mp[blocks[s]]--;
            }
            s++;

            if(min > mp['W']){
                min = mp['W'];
            }
        }

        return min;
    }
};
