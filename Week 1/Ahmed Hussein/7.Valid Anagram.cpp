//
// Created by Ahmed hesen on 10/7/2024.
//

class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> freq1(26,0), freq2(26,0);
        for(char c : s){
            freq1[c - 'a']++;
        }

        for(char c : t){
            freq2[c - 'a']++;
        }

        for(int i=0; i<26; i++){
            if(freq1[i] != freq2[i]) return 0;
        }
        return 1;
    }
};