// problem link
// https://leetcode.com/problems/find-the-k-beauty-of-a-number/description/

class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string str = to_string(num);

        string res = "";
        int s = 0, n = str.length(), count = 0;

        for(int e = 0;e <= n-k;e++){
            res = str.substr(e, k);
            int val = stoi(res);

            if(val != 0 && num%val == 0){
                count++;
            }
        }

        return count;
    }
};
