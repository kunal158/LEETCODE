class Solution {
public:
    int firstUniqChar(string arr) {
        unordered_map<char,int> mp;
        int n=arr.size();
 
    for (int i = 0; i < n; i++)
        mp[arr[i]]++;

    for (int i = 0; i<arr.length(); i++) {
            if (mp[arr[i]] == 1) {
                return i;
        }
    }
        return -1;
    }
};
        
